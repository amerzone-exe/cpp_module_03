/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 18:38:41 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/07 11:21:59 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main( void )
{
	ClapTrap john("John");
	ScavTrap steven("Steven");
	ScavTrap billy;
	std::cout << std::endl;

	john.attack("Charlie");
	john.takeDamage(5);
	john.beRepaired(5);
	john.takeDamage(10);
	john.attack("Charlie");
	john.beRepaired(5);
	std::cout << std::endl;

	steven.attack("Charlie");
	steven.takeDamage(5);
	steven.beRepaired(5);
	steven.takeDamage(10);
	steven.attack("Charlie");
	steven.guardGate();
	std::cout << std::endl;

	billy.attack("Steven");
	billy.takeDamage(5);
	std::cout << std::endl;

	std::cout << "Copying ScavTrap Steven into James" << std::endl;

	ScavTrap james(steven);
	james.attack("Charlie");
	james.takeDamage(5);
	james.beRepaired(5);
	james.takeDamage(10);
	james.attack("Charlie");
	james.guardGate();
	std::cout << std::endl;

	std::cout << "Assign Billy (noname) to Steven" << std::endl;

	steven = billy;
	steven.attack("Charlie");
	steven.takeDamage(5);
	steven.beRepaired(5);
	steven.takeDamage(10);
	steven.attack("Charlie");
	steven.guardGate();
	std::cout << std::endl;
	
	return 0;
}
