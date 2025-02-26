#include "file.hpp"
#include <fstream>
#include <iostream>

int findStringPos (std::string line, std::string s1, int start)
{
	int first = line.find(s1, start);
	return (first);
}

void fillSecondFile (std::string line, std::string s1, std::string s2, std::string secondfile)
{
	std::ofstream ofs(secondfile.c_str());
	int len = s1.length();
	int lineLen = line.length();
	int	start = 0;
	int	pos = findStringPos(line, s1, start);	
	std::cout << " pos = " << pos << "\n";
	std::cout << " start = " << start << "\n";	
	for (int i = start; i < pos; i++)
	{
		ofs << line[i];
		std::cout << " i = " << i << "\n";
		if (i + 1 == pos )
		{
			
			ofs << s2;
			start = pos + len;
			pos = findStringPos(line, s1, start);
			std::cout << " pos = " << pos << "\n";
			std::cout << " start = " << start << line[start] << "\n";
		}
		if (start < lineLen && i < lineLen && pos == -1)
		{
			while (start < lineLen)
			{
				ofs << line[start];
				start++;
			}
		}
	}
}

