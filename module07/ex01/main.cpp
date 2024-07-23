/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 23:13:38 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/20 23:18:29 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void )
{
    int intArr[] = {1, 2};
    std::string strArr[] = {"eval1", "eval2"};

    iter(intArr, 2, printParameter);
    iter(strArr, 2, printParameter);
    iter(intArr, 2, incrementParameter);
    iter(intArr, 2, printParameter);
};
