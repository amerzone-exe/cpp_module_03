/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 14:55:43 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/15 16:16:42 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

/*Default constructor*/
DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap(), _name("no_DiamondTrap_name")
{
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 30;
	std::cout << "DiamondTrap constructor called" << std::endl;
}

/*Initialization constructor*/
/*In virtual */
DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), ScavTrap( name ), FragTrap( name ), _name( name )
{
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 30;
	std::cout << "DiamondTrap initialization's constructor called with the name " << this->_name << std::endl;
}

/*Copy constructor*/
DiamondTrap::DiamondTrap( DiamondTrap const & src) : ScavTrap(src), FragTrap(src)
{
	std::cout << "Diamond copy constructor called" << std::endl;
}

/*Assignation operator overload*/
DiamondTrap& DiamondTrap::operator=( DiamondTrap const & rightSide )
{
	if (this != &rightSide)
	{
		ScavTrap::operator=( rightSide );
		this->_name = rightSide._name;
	}
	return *this;
}

/*Destructor*/
DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap destructor called with the name : " << this->_name << std::endl;
}

void	DiamondTrap::attack( const std::string& target )
{
	// ScavTrap::attack( target );
	std::cout << _name << " jette du CACA BOUDIN sur " <<  target << std::endl;
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap name : " << this->_name << ", it's ClapTrap name :" << ClapTrap::_name << std::endl;
}

unsigned int	DiamondTrap::getHitPoint( void ) const
{
	return this->_hitPoint;
}

unsigned int	DiamondTrap::getEnergyPoint( void ) const
{
	return this->_energyPoint;
}

unsigned int	DiamondTrap::getAttackDamage( void ) const
{
	return this->_attackDamage;
}
