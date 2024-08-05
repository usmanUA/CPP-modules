/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 10:43:11 by uahmed            #+#    #+#             */
/*   Updated: 2024/08/03 12:58:22 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

static	bool	onlyDigits( std::string s )
{
	return s.find_first_not_of("0123456789") == std::string::npos;
}

PmergeMe::PmergeMe( void )
{};

PmergeMe::~PmergeMe( void )
{};

PmergeMe::PmergeMe( const PmergeMe& from )
{
	(void)from;
}

PmergeMe&	PmergeMe::operator=( const PmergeMe& from )
{
	(void)from;
	return *this;
}

bool	PmergeMe::initContainers( int argc, char *argv[] )
{
	int	nbr;
	for (int i = 1; i < argc; i++)
	{
		if (onlyDigits( argv[i] ) == false)
			return false;
		nbr = std::stoi(argv[i]);
		_vec.push_back(nbr);
		_deq.push_back(nbr);
		_list.push_back(nbr);
	}
	return true;
}

int	PmergeMe::getJacobsthalNbr( int nbr )
{
	if (nbr == 0 || nbr == 1)
		return nbr;
	return getJacobsthalNbr(nbr - 1) + 2 * getJacobsthalNbr(nbr - 2);
}

bool	PmergeMe::jacobsthalNbr( int nbr )
{
	int n = 0;
	while (getJacobsthalNbr( n ) < nbr)
	{
//		std::cout << "ha\n";
		n++;
	}
	return getJacobsthalNbr(n) == nbr;
}

int	PmergeMe::nextJacobsthalNbr( int nbr, int& jS, int tot )
{
	if (!jacobsthalNbr( nbr ))
		return nbr - 1;
	if (nbr + 1 == tot || getJacobsthalNbr(jS) >= tot)
		return (tot);
	return std::min(getJacobsthalNbr(++jS) - 1, tot - 1);
}

// NOTE: Merge-Insert Algo using std::vector
t_vecIter	PmergeMe::binarySearchVec( int l, int r, int nbr )
{
	int	m = 0;
	int	tot = 0;
	int	middleNbr = 0;
	while (CONTINUE)
	{
		if (l > r)
			return _vec.begin() + l;
		tot = r - l + 1;
		m = l + tot / 2;
		middleNbr = _vec[m];
		if (middleNbr == nbr)
			return _vec.begin() + m;
		if (middleNbr > nbr)
			r = m - 1;
		else
			l = m + 1;
	}
}

t_pairVec	PmergeMe::mergeSortVec( int l, int r )
{
	int	size = r - l + 1;
	if (size <= 2)
	{
		t_pair	p;
		t_pairVec pVec;
		p = _vec[l] > _vec[l+1] ? std::make_pair(_vec[l], _vec[l+1]) : std::make_pair(_vec[l+1], _vec[l]);
		pVec.push_back(p);
		return pVec;
	}
	int	m = l + size / 2 - 1;
	if (m % 2 == 0)
		m++;
	t_pairVec left = mergeSortVec( l, m );
	t_pairVec right = mergeSortVec( m + 1, r );
	return mergeVec( left, right );
}

t_pairVec	PmergeMe::mergeVec( t_pairVec l, t_pairVec r )
{
	t_pairVec pVec;
	size_t	lI = 0;
	size_t	rI = 0;
	size_t	lS = l.size();
	size_t	rS = r.size();

	while (lI < lS && rI < rS)
	{
		if (l[lI] < r[rI])
			pVec.push_back(l[lI++]);
		else
			pVec.push_back(r[rI++]);
	}
	while (lI < lS)
		pVec.push_back(l[lI++]);
	while (rI < rS)
		pVec.push_back(r[rI++]);
	return pVec;
}

void	PmergeMe::insertVec( t_pairVec pVec )
{
	_vec.insert(_vec.begin(), pVec.begin()->second);
	if (pVec.size() != 1)
	{
		int	jacobNbr = 3;
		int	inserted = 1;
		for (int i = std::min((int)pVec.size()-1,2); i < (int)pVec.size(); i = nextJacobsthalNbr(i, jacobNbr, pVec.size()))
		{
			t_vecIter vIter = binarySearchVec(0, i+inserted++, pVec[i].second);
			_vec.insert(vIter, pVec[i].second);
		}
	}
}

void	PmergeMe::sortWithVec( void )
{
	t_pair		oddPair;

	if (_vec.size() % 2 == 1)
	{
		oddPair = std::make_pair(1, _vec.back());
		_vec.pop_back();
	}
	t_pairVec pVec = mergeSortVec( 0, _vec.size() - 1 );
	_vec.clear();
	for (auto pair : pVec)
		_vec.push_back(pair.first);
	insertVec( pVec );
	if (oddPair.first)
	{
		t_vecIter vIter = binarySearchVec(0, _vec.size() - 1, oddPair.second);
		_vec.insert(vIter, oddPair.second);
	}

};

// NOTE: Merge-Insert Algo using std::list
t_lstIter	PmergeMe::binarySearchLst( t_lstIter l, t_lstIter r, int nbr )
{
	t_lstIter m;
	int	tot = 0;
	while (CONTINUE)
	{
		tot = std::distance(l, r);
		if (tot <= 1)
			return nbr > (int)*l ? std::next(l) : l;
		m = std::next(l, tot / 2);
		if ((int)*m == nbr)
			return m;
		if ((int)*m > nbr)
			r = m;
		else
			l = m;
	}
}

t_pairLst	PmergeMe::mergeSortLst( t_lstIter l, t_lstIter r )
{
	int	size = std::distance(l, r) + 1;
	if (size <= 3)
	{
		t_pair	p;
		t_pairLst pLst;
		unsigned int	first = *l;
		unsigned int	second = *std::next(l, 1);
		p = first > second ? std::make_pair(first, second) : std::make_pair(second, first);
		pLst.push_back(p);
		return pLst;
	}
	int	m = size / 2;
	if (m % 2 == 1)
		m++;
	t_lstIter middleIter = std::next(l, m - 1);
	t_pairLst left = mergeSortLst( l, middleIter );
	t_pairLst right = mergeSortLst( std::next(middleIter), r );
	return mergeLst( left, right );
}

t_pairLst	PmergeMe::mergeLst( t_pairLst& l, t_pairLst& r )
{
	t_pairLst::iterator lIter = l.begin();
	t_pairLst::iterator rIter = r.begin();

	while (lIter != l.end() && rIter != r.end())
	{
		if (*rIter < *lIter)
		{
			lIter = l.insert(lIter, *rIter);
			rIter++;
		}
		lIter++;
	}
	while (rIter != r.end())
	{
		l.push_back(*rIter);
		rIter++;
	}
	return l;
}

void	PmergeMe::insertLst( t_pairLst pLst )
{
	_list.push_front(pLst.front().second);
	if (pLst.size() > 1)
	{
		int	jacobNbr = 3;
		int	inserted = 1;
		for (int i = std::min((int)pLst.size()-1,2); i < (int)pLst.size(); i = nextJacobsthalNbr(i, jacobNbr, pLst.size()))
		{
			t_lstIter lIter = std::next(_list.begin(), i+inserted++);
			int insertIt = std::next(pLst.begin(), i)->second;
			t_lstIter next = binarySearchLst(_list.begin(), lIter, insertIt);
			_list.insert(next, insertIt);
		}
	}
}

void	PmergeMe::sortWithLst( void )
{
	t_pair		oddPair;

	if (_list.size() % 2 == 1)
	{
		oddPair = std::make_pair(1, _list.back());
		_list.pop_back();
	}
	t_pairLst pLst = mergeSortLst( _list.begin(), _list.end() );
	_list.clear();
	for (t_pair& pair : pLst)
		_list.push_back(pair.first);
	insertLst( pLst );
	if (oddPair.first)
	{
		t_lstIter lIter = binarySearchLst(_list.begin(), _list.end() , oddPair.second);
		_list.insert(lIter, oddPair.second);
	}

};


// NOTE: Merge-Insert Algo using std::deque
t_deqIter	PmergeMe::binarySearchDeq( int l, int r, int nbr )
{
	int	m = 0;
	int	tot = 0;
	int	middleNbr = 0;
	while (CONTINUE)
	{
		if (l > r)
		{
			t_deqIter dItr = _deq.begin();
			std::advance(dItr, l);
			return dItr;
		}
		tot = r - l + 1;
		m = l + tot / 2;
		middleNbr = _deq[m];
		if (middleNbr == nbr)
		{
			t_deqIter dItr = _deq.begin();
			std::advance(dItr, m);
			return dItr;
		}
		if (middleNbr > nbr)
			r = m - 1;
		else
			l = m + 1;
	}
}

t_pairDeq	PmergeMe::mergeSortDeq( int l, int r )
{
	int	size = r - l + 1;
	if (size <= 2)
	{
		t_pair	p;
		t_pairDeq pDeq;
		p = _deq[l] > _deq[l+1] ? std::make_pair(_deq[l], _deq[l+1]) : std::make_pair(_deq[l+1], _deq[l]);
		pDeq.push_back(p);
		return pDeq;
	}
	int	m = l + size / 2 - 1;
	if (m % 2 == 0)
		m++;
	t_pairDeq left = mergeSortDeq( l, m );
	t_pairDeq right = mergeSortDeq( m + 1, r );
	return mergeDeq( left, right );
}

t_pairDeq	PmergeMe::mergeDeq( t_pairDeq l, t_pairDeq r )
{
	t_pairDeq pDeq;
	size_t	lI = 0;
	size_t	rI = 0;
	size_t	lS = l.size();
	size_t	rS = r.size();

	while (lI < lS && rI < rS)
	{
		if (l[lI] < r[rI])
			pDeq.push_back(l[lI++]);
		else
			pDeq.push_back(r[rI++]);
	}
	while (lI < lS)
		pDeq.push_back(l[lI++]);
	while (rI < rS)
		pDeq.push_back(r[rI++]);
	return pDeq;
}


void	PmergeMe::insertDeq( t_pairDeq pDeq )
{
	_deq.insert(_deq.begin(), pDeq.begin()->second);
	if (pDeq.size() != 1)
	{
		int	jacobNbr = 3;
		int	inserted = 1;
		for (int i = std::min((int)pDeq.size()-1,2); i < (int)pDeq.size(); i = nextJacobsthalNbr(i, jacobNbr, pDeq.size()))
		{
			t_deqIter dIter = binarySearchDeq(0, i+inserted++, pDeq[i].second);
			_deq.insert(dIter, pDeq[i].second);
		}
	}
}

void	PmergeMe::sortWithDeq( void )
{
	t_pair		oddPair;

	if (_deq.size() % 2 == 1)
	{
		oddPair = std::make_pair(1, _deq.back());
		_deq.pop_back();
	}
	t_pairDeq pDeq = mergeSortDeq( 0, _deq.size() - 1 );
	_deq.clear();
	for (auto pair : pDeq)
		_deq.push_back(pair.first);
	insertDeq( pDeq );
	if (oddPair.first)
	{
		t_deqIter dIter = binarySearchDeq(0, _deq.size() - 1, oddPair.second);
		_deq.insert(dIter, oddPair.second);
	}

};

// NOTE: Merge the array using multiple containers
void	PmergeMe::pMergeMe( int argc, char *argv[] )
{
	PmergeMe	pmm;

	if (pmm.initContainers( argc, argv ) == false)
	{
		std::cout << "\033[31mInvalid Input\033[0m\n";
		return;
	};
	if (pmm._vec.size() == 1)
		return;
	std::cout << "\033[31mBefore: \033[0m";
	pmm.printContainer( pmm._vec );
	auto vecSortStart = std::chrono::high_resolution_clock::now();
	pmm.sortWithVec();
	auto vecSortEnd = std::chrono::high_resolution_clock::now();
	std::cout << "\033[32mAfter vecSort: \033[0m";
	pmm.printContainer( pmm._vec );
	auto deqSortStart = std::chrono::high_resolution_clock::now();
	pmm.sortWithDeq();
	auto deqSortEnd = std::chrono::high_resolution_clock::now();
	std::cout << "\033[33mAfter deqSort: \033[0m";
	pmm.printContainer( pmm._deq );
	auto lstSortStart = std::chrono::high_resolution_clock::now();
	pmm.sortWithLst();
	auto lstSortEnd = std::chrono::high_resolution_clock::now();
	std::cout << "\033[34mAfter listDort: \033[0m";
	pmm.printContainer( pmm._list );
	double vecDuration = std::chrono::duration_cast<std::chrono::nanoseconds>(vecSortEnd-vecSortStart).count();
	double deqDuration = std::chrono::duration_cast<std::chrono::nanoseconds>(deqSortEnd-deqSortStart).count();
	double lstDuration = std::chrono::duration_cast<std::chrono::nanoseconds>(lstSortEnd-lstSortStart).count();
	std::cout << "\033[35mTime to process a range of " << pmm._vec.size() << " elements with std::vector : " << vecDuration/1000 << " us\033[0m" << std::endl;
	std::cout << "\033[36mTime to process a range of " << pmm._deq.size() << " elements with std::deque : " << deqDuration/1000 << " us\033[0m" << std::endl;
	std::cout << "\033[37mTime to process a range of " << pmm._list.size() << " elements with std::list : " << lstDuration/1000 << " us\033[0m" << std::endl;
};
