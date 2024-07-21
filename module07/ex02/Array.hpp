/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 09:37:54 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/21 10:06:59 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <exception>

template<typename T>
class	Array
{
	public:
		Array( void );
		~Array( void );
		Array( unsigned int );
		Array( const Array<T>& );
		Array<T>&	operator=( const Array<T>& );
		T&	operator[]( size_t index );

		size_t	size( void )	const;
	private:
		T*	arr;
		size_t	nElems;
};

template<typename T>
Array<T>::Array( void )
{
	this->arr = new T[0];
	this->nElems = 0;
};

template<typename T>
Array<T>::Array( unsigned int nElems )
{
	this->arr = new T[nElems];
	this->nElems = nElems;
};

template<typename T>
Array<T>::~Array( void )
{
	delete [] this->arr;
};

template<typename T>
Array<T>::Array( const Array<T>& from )
{
	size_t	nElems	= from.nElems;
	this->arr = new T[nElems];
	this->nElems = nElems;
	for (size_t i = 0; i < nElems; i++)
		this->arr[i] = from.arr[i];
};

template<typename T>
Array<T>&	Array<T>::operator=( const Array<T>& from )
{
	if (this != &from)
	{
		delete [] this->arr;
		size_t	nElems	= from.nElems;
		this->arr = new T[nElems];
		this->nElems = nElems;
		for (size_t i = 0; i < nElems; i++)
			this->arr[i] = from.arr[i];
	}
	return *this;
};

template<typename T>
T&	Array<T>::operator[]( size_t index )
{
	if (this->nElems <= index)
	{
		throw std::exception();
		return this->arr[0];
	}
	return this->arr[index];
};

template<typename T>
size_t	Array<T>::size( void )	const
{
	return this->nElems;
};

#endif
