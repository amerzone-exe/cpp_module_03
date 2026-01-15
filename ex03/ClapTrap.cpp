/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:12:04 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/15 13:05:44 by jpiquet          ###   ########.fr       */
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
	std::cout << "ClapTrap initialization's name constructor called with the name " << name << std::endl;
}

/*Copy constructor*/
ClapTrap::ClapTrap( ClapTrap const & src) : _name( src._name ), _hitPoint( src._hitPoint ), 
											_energyPoint( src._energyPoint ), _attackDamage ( src._attackDamage )
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

/*Assignation operator overload*/
ClapTrap& ClapTrap::operator=( ClapTrap const & rightSide )
{
	if (this != &rightSide)
	{
		this->_name = rightSide._name;
		this->_hitPoint = rightSide._hitPoint;
		this->_energyPoint = rightSide._energyPoint;
		this->_attackDamage = rightSide._attackDamage;
	}
	return *this;
}

/*Destructor*/
ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

/*Attack the `target` passed in parameters.
If there not enought energy & hit points do nothing*/
void	ClapTrap::attack( const std::string & target )
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
