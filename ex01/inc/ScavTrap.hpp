/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 08:47:13 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/06 13:00:01 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		bool	_gateKeep;

	public:
		ScavTrap( void );
		ScavTrap( std::string name );
		ScavTrap( ScavTrap const & src);
		ScavTrap& operator=(ScavTrap const & rhs);
		~ScavTrap( void );

		void		attack( const std::string& target );
		void		guardGate( void );
};

#endif