/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 09:00:29 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/07 11:25:32 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

/*Default constructor*/
ScavTrap::ScavTrap() : ClapTrap(), _gateKeep(false)
{
	this->_hitpoint = 100;
	this->_energypoint = 50;
	this->_attackdamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

/*Initialization constructor*/
ScavTrap::ScavTrap( std::string name ) : ClapTrap(name), _gateKeep(false)
{
	this->_hitpoint = 100;
	this->_energypoint = 50;
	this->_attackdamage = 20;
	std::cout << "ScavTrap initialization's name constructor called" << std::endl;
}

/*Copy constructor*/
ScavTrap::ScavTrap( ScavTrap const & src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
}

/*Assignation operator overload*/
ScavTrap& ScavTrap::operator=(ScavTrap const & rhs)
{
	this->_name = rhs._name;
	this->_hitpoint = rhs._hitpoint;
	this->_energypoint = rhs._energypoint;
	this->_attackdamage = rhs._attackdamage;

	return *this;
}

/*Destructor*/
ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

/*Attack the `target` passed in parameters.
If there not enought energy & hit points do nothing*/
void	ScavTrap::attack( const std::string& target )
{
	if (this->_energypoint == 0)
	{
		std::cout << "ScavTrap " << this->_name << " has no energy points left, he can't attack !" << std::endl;
		return ;
	}
	if (this->_hitpoint == 0)
	{
		std::cout << "ScavTrap " << this->_name << " is dead, he can't attack !" << std::endl;
		return ;
	}

	this->_energypoint -= 1;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing "
	<< this->_attackdamage << " points of damage !" << std::endl;
}

/*Pass the private attribute `_gateKeep` to true & print message*/
void	ScavTrap::guardGate( void )
{
	if (this->_energypoint == 0)
	{
		std::cout << "ScavTrap " << this->_name << " has no energy points left, he can't guard gate !" << std::endl;
		return ;
	}
	if (this->_hitpoint == 0)
	{
		std::cout << "ScavTrap " << this->_name << " is dead, he can't guard gate !" << std::endl;
		return ;
	}

	if (this->_gateKeep == true)
		std::cout << "ScavTrap is already in Gate keeper mode" << std::endl;
	else
	{
		this->_gateKeep = true;
		std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
	}
}
