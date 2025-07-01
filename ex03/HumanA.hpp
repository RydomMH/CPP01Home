/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiah <rmiah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 17:33:18 by rmiah             #+#    #+#             */
/*   Updated: 2025/07/01 17:33:25 by rmiah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>

class HumanA
{
  private:
	std::string name;
	Weapon &weapon;

  public:
	HumanA(const std::string &name, Weapon &weapon);
	void attack() const;
};

#endif
