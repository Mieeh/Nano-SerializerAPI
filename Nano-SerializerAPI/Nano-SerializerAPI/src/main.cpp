#include<iostream>
#include"../include/SerializerAPI.h"

#include<string>

int main()
{
	OpenOutputFile("what.txt", OpenMode::TRUNCATE);
	WriteToFile("hell", true);
	WriteToFile("hello",true);
	InsertBlankLine(); InsertBlankLine();
	WriteToFile("I'm pretty far down right?");
	CloseOutputFile();

	OpenInputFile("what.txt");
	std::string temp;
	GetAllFileContent(temp);
	std::cout << temp << std::endl;
	CloseInputFile();

	//std::ifstream _ifstream;
	//_ifstream.open("what.txt");
	//
	//std::string _fileContent = "";
	//std::string _line;
	//while (std::getline(_ifstream, _line)) {
	//	_fileContent += _line + "\n";
	//}
	//
	//std::cout << _fileContent << std::endl;

	system("pause>null");
	return 0;
}