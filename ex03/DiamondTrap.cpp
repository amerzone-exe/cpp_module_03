/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 14:55:43 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/07 11:42:49 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

/*Default constructor*/
DiamondTrap::DiamondTrap() : ClapTrap(), _name("no_FragTrap_name")
{
	this->_hitpoint = FragTrap::_hitpoint;
	this->_energypoint = ScavTrap::_energypoint;
	this->_attackdamage = FragTrap::_attackdamage;
	std::cout << "DiamondTrap constructor called" << std::endl;
}

/*Initialization constructor*/
DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), _name(name)
{
	this->_hitpoint = FragTrap::_hitpoint;
	// std::cout << "hitpoint : "<< FragTrap::_hitpoint << std::endl;
	this->_energypoint = ScavTrap::_energypoint;
	// std::cout << "energypoint : "<< ScavTrap::_energypoint << std::endl;
	this->_attackdamage = FragTrap::_attackdamage;
	// std::cout << "attack damage : "<< FragTrap::_attackdamage << std::endl;
	std::cout << "DiamondTrap constructor called" << std::endl;
}

/*Copy constructor*/
DiamondTrap::DiamondTrap( DiamondTrap const & src)
{
	*this = src;
}

/*Assignation operator overload*/
DiamondTrap& DiamondTrap::operator=(DiamondTrap const & rhs)
{
	this->_name = rhs._name;
	this->_hitpoint = rhs._hitpoint;
	this->_energypoint = rhs._energypoint;
	this->_attackdamage = rhs._attackdamage;

	return *this;
}

/*Destructor*/
DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void	DiamondTrap::attack( const std::string& target )
{
	ScavTrap::attack( target );
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap name : " << this->_name << ", it's ClapTrap name :" << ClapTrap::_name << std::endl;
}
