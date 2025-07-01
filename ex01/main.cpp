/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiah <rmiah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 16:16:16 by rmiah             #+#    #+#             */
/*   Updated: 2025/07/01 17:12:45 by rmiah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main() {
	int hordeSize = 5;
	Zombie* horde = zombieHorde(hordeSize, "HordeZombie");

	if (!horde) {
		std::cerr << "Error creating zombie horde!" << std::endl;
		return 1;
	}

	for (int i = 0; i < hordeSize; i++) {
		horde[i].announce();
	}

	delete[] horde;
	return 0;
}
