/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 18:38:41 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/05 18:42:44 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main( void )
{
	ClapTrap john("John");
	
	john.attack("Charlie");
	std::cout << std::endl;
	
	john.takeDamage(5);
	std::cout << std::endl;
	
	john.beRepaired(5);
	std::cout << std::endl;
	
	john.takeDamage(10);
	std::cout << std::endl;

	john.attack("Charlie");
	std::cout << std::endl;

	john.beRepaired(5);
	std::cout << std::endl;

	return 0;
}