/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiah <rmiah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 19:34:42 by rmiah             #+#    #+#             */
/*   Updated: 2025/07/04 19:34:46 by rmiah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <string>

class Sed
{
  public:
	static bool process(const std::string &filename, const std::string &s1,
		const std::string &s2);
};

#endif
