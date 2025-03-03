#include "file.hpp"
#include <fstream>
#include <iostream>

void fillSecondFile (std::string line, std::string s1, std::string s2, std::string secondfile)
{
	std::ofstream ofs(secondfile.c_str());
	int len = s1.length();
	int start = 0;
	unsigned long pos = line.find(s1, start);
	while (pos != std::string::npos)
	{
		line.erase (pos, len);
		line.insert (pos, s2);
		start = pos + s2.length();
		pos = line.find(s1, start);
	}
	ofs << line;
}
