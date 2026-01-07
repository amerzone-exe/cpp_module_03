/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 14:56:26 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/07 18:54:55 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	_name;
	public:
		DiamondTrap( void );
		DiamondTrap( std::string name );
		DiamondTrap( DiamondTrap const & src);
		DiamondTrap& operator=(DiamondTrap const & rhs);
		~DiamondTrap( void );

		void	attack( const std::string& target );
		void	whoAmI( void );

		unsigned int		getHitPoint( void );
		unsigned int		getEnergyPoint( void );
		unsigned int		getAttackDamage( void );
};

#endif