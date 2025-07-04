/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiah <rmiah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 19:34:52 by rmiah             #+#    #+#             */
/*   Updated: 2025/07/04 19:34:55 by rmiah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"
#include <fstream>
#include <iostream>

bool Sed::process(const std::string &filename, const std::string &s1,
	const std::string &s2)
{
	size_t	pos;

	if (s1.empty())
	{
		std::cerr << "Error: s1 cannot be empty." << std::endl;
		return (false);
	}
	std::ifstream infile(filename.c_str());
	if (!infile)
	{
		std::cerr << "Error: Cannot open input file." << std::endl;
		return (false);
	}
	std::ofstream outfile((filename + ".replace").c_str());
	if (!outfile)
	{
		std::cerr << "Error: Cannot create output file." << std::endl;
		return (false);
	}
	std::string line;
	while (std::getline(infile, line))
	{
		pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
			pos += s2.length();
		}
		outfile << line << std::endl;
	}
	infile.close();
	outfile.close();
	return (true);
}
