/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiah <rmiah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 17:32:34 by rmiah             #+#    #+#             */
/*   Updated: 2025/07/01 17:33:01 by rmiah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type)
{
	this->type = type;
}

const std::string &Weapon::getType() const
{
	return (type);
}

void Weapon::setType(const std::string &newType)
{
	type = newType;
}
