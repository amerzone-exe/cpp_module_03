/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 09:00:29 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/06 14:03:04 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

/*Default constructor*/
FragTrap::FragTrap()
{
}

/*Initialization constructor*/
FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	this->_hitpoint = 100;
	this->_energypoint = 100;
	this->_attackdamage = 30;
	std::cout << "FragTrap constructor called" << std::endl;
}

/*Copy constructor*/
FragTrap::FragTrap( FragTrap const & src)
{
	*this = src;
}

/*Assignation operator overload*/
FragTrap& FragTrap::operator=(FragTrap const & rhs)
{
	this->_name = rhs._name;
	this->_hitpoint = rhs._hitpoint;
	this->_energypoint = rhs._energypoint;
	this->_attackdamage = rhs._attackdamage;

	return *this;
}

/*Destructor*/
FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap destructor called" << std::endl;
}

/*Attack the `target` passed in parameters.
If there not enought energy & hit points do nothing*/
void	FragTrap::attack( const std::string& target )
{
	if (this->_energypoint == 0)
	{
		std::cout << "FragTrap " << this->_name << " has no energy points left, he can't attack !" << std::endl;
		return ;
	}
	if (this->_hitpoint == 0)
	{
		std::cout << "FragTrap " << this->_name << " is dead, he can't attack !" << std::endl;
		return ;
	}

	this->_energypoint -= 1;
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing "
	<< this->_attackdamage << " points of damage !" << std::endl;
}

/*Make FragTrap asking for an high fives*/
void	FragTrap::highFivesGuys( void )
{
	if (this->_energypoint == 0)
	{
		std::cout << "FragTrap " << this->_name << " has no energy points left, he can't ask for an high fives !" << std::endl;
		return ;
	}
	if (this->_hitpoint == 0)
	{
		std::cout << "FragTrap " << this->_name << " is dead, he can't ask for an high fives !" << std::endl;
		return ;
	}
	std::cout << "Hey ! High fives guys ?! C'mon !" << std::endl;
}
