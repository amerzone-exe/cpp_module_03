/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 18:38:41 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/07 17:36:03 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main( void )
{
	ClapTrap john("John");
	ScavTrap steven("Steven");
	FragTrap michael("Michael");
	DiamondTrap bobby("Bobby");
	std::cout << std::endl;

	john.attack("ENEMY");
	john.takeDamage(5);
	john.beRepaired(5);
	john.takeDamage(10);
	john.attack("ENEMY");
	john.beRepaired(5);
	std::cout << std::endl;

	steven.attack("ENEMY");
	steven.takeDamage(60);
	steven.takeDamage(20);
	steven.attack("ENEMY");
	steven.guardGate();
	std::cout << std::endl;

	michael.attack("ENEMY");
	michael.takeDamage(30);
	michael.takeDamage(200);
	michael.attack("ENEMY");
	michael.highFivesGuys();
	std::cout << std::endl;

	std::cout << "Bobby hit points: " << bobby.getHitPoint() << std::endl;
	std::cout << "Bobby energy points: " << bobby.getEnergyPoint() << std::endl;
	std::cout << "Bobby attack damage: " << bobby.getAttackDamage() << std::endl;
	std::cout << std::endl;

	bobby.attack("ENEMY");
	bobby.takeDamage(40);
	bobby.takeDamage(20);
	bobby.attack("ENEMY");
	bobby.highFivesGuys();
	bobby.guardGate();
	bobby.whoAmI();
	std::cout << std::endl;

	return 0;
}
