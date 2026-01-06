/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 14:55:43 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/06 16:29:39 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

/*Default constructor*/
DiamondTrap::DiamondTrap()
{
}

/*Initialization constructor*/
DiamondTrap::DiamondTrap( std::string name ) : _name(name)
{
	this->ClapTrap::_name = name + "_clap_name";
	this->_hitpoint = FragTrap::_hitpoint;
	this->_energypoint = ScavTrap::_energypoint;
	this->_attackdamage = FragTrap::_attackdamage;
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

void	DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap name : " << this->_name << ", it's ClapTrap name :" << this->ClapTrap::_name << std::endl;
}
