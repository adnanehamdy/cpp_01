/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdy <ahamdy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:22:24 by ahamdy            #+#    #+#             */
/*   Updated: 2022/09/30 19:53:35 by ahamdy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Filename.hpp"

void initialize_attribute(Filename& sed, char **av)
{
	sed.setfilename(av[1]);
	sed.setreplacefile(av[1]);
	sed.sets1(av[2]);
	sed.sets2(av[3]);
}

void open_infile(std:: ifstream& infile ,std::string filename)
{
	infile.open(filename);
	if (!infile.is_open())
	{
		std::cout << "ERROR CAN'T OPEN INFILE" << std::endl;
		std::exit(-1);
	}
}

void open_outfile(std::ofstream& outfile, std::string filename)
{
	outfile.open(filename);
	if (!outfile.is_open())
	{
		std::cout << "ERROR CAN'T OPEN OUTFILE" << std::endl;
		std::exit(-1);
	}
}

int main(int ac, char **av)
{
	Filename sed;
	std::string line;
	size_t	pos = -1;
	std::ofstream outfile;
	std::ifstream infile;

	if (ac == 4)
	{
		initialize_attribute(sed, av);
		open_infile(infile, sed.getfilename());
		open_outfile(outfile, sed.getreplacefile());
		while (true)
		{
			line = sed.get_line_from_file(infile);
			pos = 0;
			while (true)
			{
				pos = line.find(sed.gets1(), pos);
				if (pos == std::string::npos)
				{
					outfile << line;
					// outfile.flush();
					if (!infile.eof())
						outfile << std::endl;
					break;
				}
				line.erase(pos, sed.gets1().length());
				line.insert(pos, sed.gets2());
				pos += sed.gets2().length();
			}
		}
	}
	else
		std::cout << "ERROR NUMBER OF ARGUMENTS INVALID" << std::endl;
}
