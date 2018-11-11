#include <iostream>
#include <fstream>
#include <string>

void	replace(std::string file_n, std::string s1, std::string s2)
{
	std::string new_file;
	std::string buf;

	new_file = file_n + ".replace";
	std::ifstream   readFile(file_n);
	if (readFile.fail())
	{
		std::cout << "Error opening file" << std::endl;
		exit(1);
	}
	std::ofstream outFile(new_file);
	if (outFile.fail())
	{
		std::cout << "Error creating file" << std::endl;
		exit(1);
	}
	if (s1 == s2)
	{
		while (std::getline(readFile, buf))
		{
			outFile << buf;
			outFile << std::endl;
		}
		exit(1);
	}
	while (std::getline(readFile, buf))
	{
		while (buf.find(s1) != std::string::npos) {
			buf.replace(buf.find(s1), s1.length(), s2);
		}
		outFile << buf;
		outFile << std::endl;
	}
	if (buf == "") {
		outFile << std::endl;
	}
	readFile.close();
	outFile.close();
}

int		main(int argc, char **argv)
{
	std::string file_n;
	std::string s1;
	std::string s2;

	if (argc == 4)
	{
		file_n = argv[1];
		s1 = argv[2];
		s2 = argv[3];
		replace(file_n, s1, s2);
	}
	else
		std::cout << "Error usage: Filename, s1, s2" << std::endl;
	return (0);
}
