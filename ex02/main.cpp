#include <string>
#include <cctype>
#include <iostream>

int main (void)
{
	std::string string = "HI THIS IS A BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "memory address of string    is : " << &string << std::endl;
	std::cout << "memory address of stringPTR is : " << stringPTR << std::endl;
	std::cout << "memory address of stringREF is : " << &stringREF << std::endl;

	std::cout << "value of string    is : " << string << std::endl;
	std::cout << "value of stringPTR is : " << *stringPTR << std::endl;
	std::cout << "value of stringREF is : " << stringREF << std::endl;
}
