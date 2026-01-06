/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 18:38:41 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/06 13:16:51 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main( void )
{
	ClapTrap john("John");
	ScavTrap steven("Steven");
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
	steven.takeDamage(10);
	steven.attack("Charlie");
	steven.guardGate();
	std::cout << std::endl;

	return 0;
}
