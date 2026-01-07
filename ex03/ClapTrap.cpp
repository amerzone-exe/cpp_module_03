/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:12:04 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/07 17:45:13 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

/*Default constructor*/
ClapTrap::ClapTrap( void ) : _name( "noname" ), _hitPoint( 10 ), _energyPoint( 10 ), _attackDamage ( 0 )
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

/*Initialization constructor*/
ClapTrap::ClapTrap( std::string name ) : _name( name ), _hitPoint( 10 ), _energyPoint( 10 ), _attackDamage ( 0 )
{
	std::cout << "ClapTrap initialization's constructor called with the name : " << name << std::endl;
}

/*Copy constructor*/
ClapTrap::ClapTrap( ClapTrap const & src)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
}

/*Assignation operator overload*/
ClapTrap& ClapTrap::operator=(ClapTrap const & rhs)
{
	this->_name = rhs._name;
	this->_hitPoint = rhs._hitPoint;
	this->_energyPoint = rhs._energyPoint;
	this->_attackDamage = rhs._attackDamage;

	return *this;
}

/*Destructor*/
ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap destructor called with the name : " << this->_name << std::endl;
}

/*Attack the `target` passed in parameters.
If there not enought energy & hit points do nothing*/
void	ClapTrap::attack( const std::string& target )
{
	if (this->_energyPoint == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy points left, he can't attack !" << std::endl;
		return ;
	}
	if (this->_hitPoint == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead, he can't attack !" << std::endl;
		return ;
	}

	this->_energyPoint -= 1;
	std::cout << "ClapTrap "
	<< this->_name << " attacks " << target << ", causing "
	<< this->_attackDamage << " points of damage !" << std::endl;
}

/*Damage ClapTrap by subtract `amount` passed by parameter to hit points
If there not enought energy & hit points do nothing*/
void	ClapTrap::takeDamage( unsigned int amount )
{
	if (amount > this->_hitPoint)
	{
		this->_hitPoint = 0;
	}
	else
		this->_hitPoint -= amount;

	std::cout << this->_name << " took "
	<< amount << " damage, his hit points are now "
	<< this->_hitPoint << " !" << std::endl;
}

/*Repair ClapTrap by adding `amount` to hit points
If there not enought energy & hit points do nothing*/
void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_energyPoint == 0)
	{
		std::cout << _name << " has no energy points left, he can't be repaired !" << std::endl;
		return ;
	}
	if (this->_hitPoint == 0)
	{
		std::cout << _name << " is dead, he can't be repaired !" << std::endl;
		return ;
	}

	this->_energyPoint -= 1;
	this->_hitPoint += amount;
	std::cout << this->_name << " has been repaired with " << amount << " points !" << std::endl;
}
