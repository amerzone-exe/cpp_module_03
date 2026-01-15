/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 09:00:29 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/15 10:54:39 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

/*Default constructor*/
FragTrap::FragTrap() : ClapTrap()
{
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

/*Initialization constructor*/
FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap initialization's name constructor called" << std::endl;
}

/*Copy constructor*/
FragTrap::FragTrap( FragTrap const & src) : ClapTrap( src )
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

/*Assignation operator overload*/
FragTrap& FragTrap::operator=(FragTrap const & rightSide)
{
	if (this != &rightSide)
	{
		ClapTrap::operator=(rightSide);
	}
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
	if (this->_energyPoint == 0)
	{
		std::cout << "FragTrap " << this->_name << " has no energy points left, he can't attack !" << std::endl;
		return ;
	}
	if (this->_hitPoint == 0)
	{
		std::cout << "FragTrap " << this->_name << " is dead, he can't attack !" << std::endl;
		return ;
	}

	this->_energyPoint -= 1;
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing "
	<< this->_attackDamage << " points of damage !" << std::endl;
}

/*Make FragTrap asking for an high fives*/
void	FragTrap::highFivesGuys( void ) const
{
	if (this->_energyPoint == 0)
	{
		std::cout << "FragTrap " << this->_name << " has no energy points left, he can't ask for an high fives !" << std::endl;
		return ;
	}
	if (this->_hitPoint == 0)
	{
		std::cout << "FragTrap " << this->_name << " is dead, he can't ask for an high fives !" << std::endl;
		return ;
	}
	std::cout << "Hey ! High fives guys ?! C'mon !" << std::endl;
}
