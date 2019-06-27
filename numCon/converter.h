#pragma once
#include <string>
#include <sstream>
#include <cmath>

class numConvert
{
	
public:
	numConvert()
	{
		std::string number;
	}
	~numConvert();

	//Binary to Decimal Conversion function
	int binary2decimal(std::string number);

	//Decimal to Binary Conversion function
	long decimal2binary(std::string);

	//Decimal to Octal Conversion function
	int decimal2octal(std::string number);

	//Binary to octal conversion function
	int binary2octal(std::string number);

	//Octal to binary conversion function
	long octal2binary(std::string number);

	//Octal to decimal conversion function
	int octal2decimal(std::string number);
};
