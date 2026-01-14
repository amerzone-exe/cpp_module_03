/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 18:38:41 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/14 13:22:21 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main( void )
{
	ClapTrap john("John");

	std::cout << std::endl;

	john.attack("Charlie");
	john.takeDamage(5);
	john.beRepaired(5);
	john.takeDamage(10);
	john.attack("Charlie");
	john.beRepaired(5);

	std::cout << std::endl;

	ClapTrap copy("Bobby");
	ClapTrap bobby(copy);

	std::cout << std::endl;

	bobby.attack("Charlie");
	bobby.takeDamage(5);
	bobby.beRepaired(5);
	bobby.takeDamage(10);
	bobby.attack("Charlie");
	bobby.beRepaired(5);
	std::cout << std::endl;

	return 0;
}
