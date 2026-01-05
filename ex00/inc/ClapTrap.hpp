/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:04:06 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/05 18:58:46 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
	private:
		std::string 	_name;
		unsigned int	_hitpoint;
		unsigned int	_energypoint;
		unsigned int	_attackdamage;

	public:
		ClapTrap( std::string name );
		ClapTrap( ClapTrap const & src );
		ClapTrap&	operator=( ClapTrap const & rhs );
		~ClapTrap( void );

		void		attack( const std::string& target );
		void		takeDamage( unsigned int amout );
		void		beRepaired( unsigned int amout );
};

#endif