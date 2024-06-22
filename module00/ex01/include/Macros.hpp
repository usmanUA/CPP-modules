/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Colors.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 17:00:33 by uahmed            #+#    #+#             */
/*   Updated: 2024/06/22 17:00:58 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MACROS_HPP
#define MACROS_HPP

#include <string>

namespace Colors {
    const std::string BLACK = "\033[30m";
    const std::string RED = "\033[31m";
    const std::string GREEN = "\033[32m";
    const std::string YELLOW = "\033[33m";
    const std::string BLUE = "\033[34m";
    const std::string MAGENTA = "\033[35m";
    const std::string CYAN = "\033[36m";
    const std::string RESET = "\033[0m";
}

# define PROMPT_STR "Enter ADD, SEARCH (to add/search phonebook), or EXIT\n"
# define PROMPT (Colors::GREEN + std::string(PROMPT_STR) + Colors::RESET)
# define FIRST_NAME (Colors::YELLOW + std::string("First Name: ") + Colors::RESET)
# define LAST_NAME (Colors::YELLOW + std::string("Last Name: ") + Colors::RESET)
# define NickNAME (Colors::YELLOW + std::string("NickName: ") + Colors::RESET)
# define PHONE (Colors::YELLOW + std::string("Phone Number: ") + Colors::RESET)
# define SECRET (Colors::BLACK + std::string("Darkest Secret: ") + Colors::RESET)
# define EMPTY (Colors::RED + std::string("PhoneBook is empty\n") + Colors::RESET)
# define INDEX (Colors::YELLOW + std::string("Index: ") + Colors::RESET)
# define RANGE (Colors::RED + std::string("Out of range\n") + Colors::RESET)
# define NOT_FOUND (Colors::RED + std::string("Not found\n") + Colors::RESET)
# define DIGITS_ONLY (Colors::RED + std::string("This field can only contain numbers") + Colors::RESET)
# define PRINTABLE (Colors::RED + std::string("This field can only contain printable characters") + Colors::RESET)
# define ALPHA (Colors::RED + std::string("This field can only contain letters") + Colors::RESET)

#endif

