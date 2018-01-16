#include<iostream>
#include"../include/SerializerAPI.h"

#include<string>

int main()
{
	//OpenOutputFile("D:\\what.txt", OpenMode::INPUT);
	//WriteToFile("hellfkefjko");
	//CloseOutputFile();

	std::ifstream _ifstream;
	_ifstream.open("D:\\what.txt");

	std::string _fileContent = "";
	std::string _line;
	while (std::getline(_ifstream, _line)) {
		_fileContent += _line + "\n";
	}

	std::cout << _fileContent << std::endl;

	system("pause>null");
	return 0;
}