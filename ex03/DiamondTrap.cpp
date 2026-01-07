/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 14:55:43 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/07 18:59:38 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

/*Default constructor*/
DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap(), _name("no_DiamondTrap_name")
{
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 30;
	std::cout << "DiamondTrap constructor called" << std::endl;
}

/*Initialization constructor*/
DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name) //ScavTrap(name), FragTrap(name), ClapTrap(name + "_clap_name"), _name(name)
{
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 30;
	// // // std::cout << "hitpoint : "<< FragTrap::_hitpoint << std::endl;
	// this->_hitPoint = 4242;//FragTrap::_hitpoint;
	// this->_energyPoint = 4242;//ScavTrap::_energypoint;
	// this->_attackDamage = 4242;//FragTrap::_attackDamage;
	// // // std::cout << "energypoint : "<< ScavTrap::_energypoint << std::endl;
	// // // std::cout << "attack damage : "<< FragTrap::_attackDamage << std::endl;
	// std::cout << std::endl;
	// std::cout << "FragTrap hit points: " << FragTrap::_hitPoint << std::endl;
	// std::cout << "FragTrap energy points: " << FragTrap::_energyPoint << std::endl;
	// std::cout << "FragTrap attack points: " << FragTrap::_attackDamage << std::endl;
	// std::cout << std::endl;
	
	// std::cout << "ScavTrap hit points: " << ScavTrap::_hitPoint << std::endl;
	// std::cout << "ScavTrap energy points: " << ScavTrap::_energyPoint << std::endl;
	// std::cout << "ScavTrap attack points: " << ScavTrap::_attackDamage << std::endl;
	// std::cout << std::endl;

	std::cout << "DiamondTrap initialization's constructor called with the name " << this->_name << std::endl;
}

/*Copy constructor*/
DiamondTrap::DiamondTrap( DiamondTrap const & src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	*this = src;
	std::cout << "Diamond copy constructor called" << std::endl;
}

/*Assignation operator overload*/
DiamondTrap& DiamondTrap::operator=(DiamondTrap const & rhs)
{
	ClapTrap::operator=( rhs );
	ScavTrap::operator=( rhs );
	FragTrap::operator=( rhs );

	this->_name = rhs._name;

	return *this;
}

/*Destructor*/
DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap destructor called with the name : " << this->_name << std::endl;
}

void	DiamondTrap::attack( const std::string& target )
{
	ScavTrap::attack( target );
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap name : " << this->_name << ", it's ClapTrap name :" << ClapTrap::_name << std::endl;
}

unsigned int	DiamondTrap::getHitPoint( void )
{
	return this->_hitPoint;
}

unsigned int	DiamondTrap::getEnergyPoint( void )
{
	return this->_energyPoint;
}

unsigned int	DiamondTrap::getAttackDamage( void )
{
	return this->_attackDamage;
}

// void	DiamondTrap::printValues( void )
// {
// 	std::cout << std::endl;
// 	std::cout << "FragTrap hit points: " << this->FragTrap::_hitPoint << std::endl;
// 	std::cout << "FragTrap energy points: " << this->FragTrap::_energyPoint << std::endl;
// 	std::cout << "FragTrap attack points: " << this->FragTrap::_attackDamage << std::endl;
// 	std::cout << std::endl;
	
// 	std::cout << "ScavTrap hit points: " << this->ScavTrap::_hitPoint << std::endl;
// 	std::cout << "ScavTrap energy points: " << this->ScavTrap::_energyPoint << std::endl;
// 	std::cout << "ScavTrap attack points: " << this->ScavTrap::_attackDamage << std::endl;
// 	std::cout << std::endl;
// }