/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:12:04 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/07 11:22:52 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

/*Default constructor*/
ClapTrap::ClapTrap( void ) : _name( "noname" ), _hitpoint( 10 ), _energypoint( 10 ), _attackdamage ( 0 )
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

/*Initialization constructor*/
ClapTrap::ClapTrap( std::string name ) : _name( name ), _hitpoint( 10 ), _energypoint( 10 ), _attackdamage ( 0 )
{
	std::cout << "ClapTrap initialization's name constructor called" << std::endl;
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
	this->_hitpoint = rhs._hitpoint;
	this->_energypoint = rhs._energypoint;
	this->_attackdamage = rhs._attackdamage;

	return *this;
}

/*Destructor*/
ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

/*Attack the `target` passed in parameters.
If there not enought energy & hit points do nothing*/
void	ClapTrap::attack( const std::string& target )
{
	if (this->_energypoint == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy points left, he can't attack !" << std::endl;
		return ;
	}
	if (this->_hitpoint == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead, he can't attack !" << std::endl;
		return ;
	}

	this->_energypoint -= 1;
	std::cout << "ClapTrap "
	<< this->_name << " attacks " << target << ", causing "
	<< this->_attackdamage << " points of damage !" << std::endl;
}

/*Damage ClapTrap by subtract `amount` passed by parameter to hit points
If there not enought energy & hit points do nothing*/
void	ClapTrap::takeDamage( unsigned int amount )
{
	if (amount > this->_hitpoint)
	{
		this->_hitpoint = 0;
	}
	else
		this->_hitpoint -= amount;

	std::cout << this->_name << " took "
	<< amount << " damage, his hit points are now "
	<< this->_hitpoint << " !" << std::endl;
}

/*Repair ClapTrap by adding `amount` to hit points
If there not enought energy & hit points do nothing*/
void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_energypoint == 0)
	{
		std::cout << _name << " has no energy points left, he can't be repaired !" << std::endl;
		return ;
	}
	if (this->_hitpoint == 0)
	{
		std::cout << _name << " is dead, he can't be repaired !" << std::endl;
		return ;
	}

	this->_energypoint -= 1;
	this->_hitpoint += amount;
	std::cout << this->_name << " has been repaired with " << amount << " points !" << std::endl;
}
