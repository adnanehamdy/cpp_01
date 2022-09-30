/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filename.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdy <ahamdy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:31:24 by ahamdy            #+#    #+#             */
/*   Updated: 2022/09/30 15:28:57 by ahamdy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Filename_hpp
#define Filename_hpp

#include<iostream>
#include<fstream>
#include<string>

class Filename
{
	std::string s1;
	std::string s2;
	std::string filename;
	std::string replace_file;
	public:
		Filename() {};
		std::string getfilename() const ;
		void setfilename(std::string filename);
		std::string gets1() const;
		void sets1(std::string s1);
		std::string gets2() const;
		void	sets2(std::string s2);
		std::string getreplacefile() const ;
		void setreplacefile(std::string filename);
		std::string get_line_from_file(std::ifstream& sed);
		~Filename() {};
};

#endif