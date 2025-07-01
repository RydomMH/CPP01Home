/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiah <rmiah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 16:16:16 by rmiah             #+#    #+#             */
/*   Updated: 2025/07/01 16:54:42 by rmiah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	Zombie	*heapZombie;

	heapZombie = newZombie("Heapster");
	heapZombie->announce();
	delete heapZombie;
	randomChump("Stacky");
	return (0);
}
