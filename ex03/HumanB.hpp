/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiah <rmiah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 17:35:09 by rmiah             #+#    #+#             */
/*   Updated: 2025/07/01 17:35:18 by rmiah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>

class HumanB
{
  private:
	std::string name;
	Weapon *weapon;

  public:
	HumanB(const std::string &name);
	void setWeapon(Weapon &weapon);
	void attack() const;
};

#endif
