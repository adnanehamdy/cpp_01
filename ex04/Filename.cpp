/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filename.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdy <ahamdy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:30:51 by ahamdy            #+#    #+#             */
/*   Updated: 2022/09/30 17:04:50 by ahamdy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Filename.hpp"

std::string Filename::getfilename() const
{
	return (filename);
}

std::string Filename::gets1() const
{
	return (s1);
}

std::string Filename::gets2() const
{
	return (s2);
}

void Filename::setfilename(std::string filename)
{
	this->filename = filename;
}

void Filename::sets1(std::string s1)
{
	this->s1 = s1;
}

void Filename::sets2(std::string s2)
{
	this->s2 = s2;
}

void Filename::setreplacefile(std::string filename)
{
	replace_file = filename + ".replace";
}

std::string Filename::getreplacefile() const
{
	return (replace_file);
}

std::string Filename::get_line_from_file(std::ifstream& infile)
{
	std::string line;

	if(!std::getline(infile, line))
		std::exit(-1);
	return (line);
}
