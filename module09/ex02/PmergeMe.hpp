/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:01:11 by uahmed            #+#    #+#             */
/*   Updated: 2024/08/03 12:29:12 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <deque>
#include <list>
#include <string>
#include <sys/resource.h>
#include <utility>
#include <vector>
#include <algorithm>
#include <iostream>
#include <chrono>
#include <iterator>

// NOTE: pair
using t_pair = std::pair<unsigned int, unsigned int>;

// NOTE: Vector declaration
using t_pairVec = std::vector<t_pair>;
using t_intVec = std::vector<unsigned int>;
using t_vecIter = t_intVec::iterator;

// NOTE: List declaration
using t_pairLst = std::list<t_pair>;
using t_intLst = std::list<unsigned int>;
using t_lstIter = t_intLst::iterator;

// NOTE: Deque declaration
using t_pairDeq = std::deque<t_pair>;
using t_intDeq = std::deque<unsigned int>;
using t_deqIter = t_intDeq::iterator;

class	PmergeMe
{
	private:
		// NOTE: Canonical Form Attrs.
		PmergeMe( void );
		~PmergeMe( void );
		PmergeMe( const PmergeMe& );
		PmergeMe&	operator=( const PmergeMe& );

		// NOTE: Private Attributes
		// NOTE: Vecor
		t_intVec	_vec;
		t_pairVec	_pairVec;

		// NOTE: Deque
		t_intDeq	_deq;
		t_pairDeq	_pairDeq;

		// NOTE: Deque
		t_intLst	_list;
		t_pairLst	_pairLst;

		// NOTE: Private Input Handlers
		bool	initContainers( int argc, char *argv[] );

		// NOTE: Private Merge-Insert Sort Helpers (Jacobsthal numbers help in insertion)
		bool	jacobsthalNbr( int );
		int	getJacobsthalNbr( int );
		int	nextJacobsthalNbr( int , int&, int );
	
		// NOTE: Private Merge-Insert Sort Helper (Binary search used in insertion)
		t_vecIter	binarySearchVec( int, int, int );
		t_deqIter	binarySearchDeq( int, int, int );
		t_lstIter	binarySearchLst( t_lstIter, t_lstIter, int );

		// NOTE: Private Merge-Insert Sort Handlers using vector container
		// NOTE: Vector
		void	sortWithVec( void );
		t_pairVec	mergeSortVec( int, int );
		t_pairVec	mergeVec( t_pairVec , t_pairVec );
		void	insertVec( t_pairVec );

		// NOTE: List
		void	sortWithLst( void );
		t_pairLst	mergeSortLst( t_lstIter, t_lstIter );
		t_pairLst	mergeLst( t_pairLst& , t_pairLst& );
		void	insertLst( t_pairLst );

		// NOTE: Deque
		void	sortWithDeq( void );
		t_pairDeq	mergeSortDeq( int, int );
		t_pairDeq	mergeDeq( t_pairDeq , t_pairDeq );
		void	insertDeq( t_pairDeq );

		// NOTE: Print sorted array
		template<typename T>
		void	printContainer( T& container )
		{
			size_t	size = container.size() - 1;
			size_t	i = 0;
			for (auto n : container)
			{
				std::cout << n;
				if (i < size)
					std::cout << " ";
				i++;
			}
			std::cout << std::endl;
		};

	public:
		static	void	pMergeMe( int argc, char *argv[] );

};

#define USAGE "\033[32mUSAGE: \033[0m\n\t\033[31m./PmergeMe <nums_to_sort>\033[0m\n"
#define CONTINUE 42

#endif
