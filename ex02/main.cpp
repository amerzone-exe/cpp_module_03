/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 18:38:41 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/06 14:45:25 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main( void )
{
	ClapTrap john("John");
	ScavTrap steven("Steven");
	FragTrap michael("Michael");
	std::cout << std::endl;

	john.attack("Charlie");
	john.takeDamage(5);
	john.beRepaired(5);
	john.takeDamage(10);
	john.attack("Charlie");
	john.beRepaired(5);
	std::cout << std::endl;

	steven.attack("Francois");
	steven.takeDamage(60);
	steven.takeDamage(20);
	steven.attack("Francois");
	steven.guardGate();
	std::cout << std::endl;

	michael.attack("Bertrand");
	michael.takeDamage(30);
	michael.takeDamage(200);
	michael.attack("Bertrand");
	michael.highFivesGuys();
	std::cout << std::endl;

	return 0;
}
