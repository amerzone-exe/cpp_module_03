/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 18:38:41 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/15 10:24:08 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main( void )
{
	// ClapTrap john("John");
	ScavTrap steven("Steven");
	FragTrap michael("Michael");
	std::cout << std::endl;

	// john.attack("Charlie");
	// john.takeDamage(5);
	// john.beRepaired(5);
	// john.takeDamage(10);
	// john.attack("Charlie");
	// john.beRepaired(5);
	// std::cout << std::endl;

	steven.attack("Francois");
	steven.takeDamage(60);
	steven.takeDamage(20);
	steven.attack("Francois");
	steven.guardGate();
	std::cout << std::endl;

	michael.attack("Bertrand");
	michael.takeDamage(30);
	michael.takeDamage(10);
	michael.attack("Bertrand");
	michael.highFivesGuys();

	std::cout << std::endl;

	std::cout << "FragTrap Michael copied in Bob" << std::endl;
	std::cout << "Print Bob actions :" << std::endl;
	FragTrap bob(michael);
	bob.attack("Bertrand");
	bob.takeDamage(30);
	bob.takeDamage(10);
	bob.attack("Bertrand");
	bob.highFivesGuys();

	std::cout << std::endl;

	return 0;
}
