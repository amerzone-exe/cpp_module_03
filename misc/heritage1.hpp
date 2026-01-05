/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heritage1.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 15:04:25 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/05 15:17:40 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HERITAGE1_HPP
#define HERITAGE1_HPP

#include <string>

class Animal 
{
	private:
		int	_numberOfLegs;
	
	public:
		Animal( void );
		Animal( Animal const & src );
		Animal & operator=( Animal const & rhs );
		~Animal (void);

		void	run( int distance );
};

class Cat : public Animal //signifie que le chat herite publiquement de l'animal
{
	public:
		Cat( void );
		Cat ( Cat const & src );
		Cat & operator=( Cat const & rhs );
		~Cat( void );

		void	scornSomeone( std::string const & traget );
};

#endif