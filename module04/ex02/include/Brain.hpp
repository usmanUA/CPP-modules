/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 10:28:38 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/14 10:39:46 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef BRAIN_HPP
#define BRAIN_HPP

# include "string"

class	Brain
{
	public:
		Brain(void);
		Brain(const Brain&);
		Brain&	operator=(const Brain&);
		~Brain();
		void	addIdea(const std::string);
		void	printIdeas(void);
	private:
		std::string	ideas[100];
};

#endif
