#include "converter.h"

numConvert::~numConvert()
{
}

int numConvert::binary2decimal(std::string number)
{
	int base, decimal = 0, len = number.length();

	//Check for binary and conversion
	for(std::string::iterator it = number.begin(); it != number.end(); ++it)
	{
		if(*it == '1')
		{
			base = 1;
		}
		else if(*it == '0')
		{
			base = 0;
		}
		else
		{
			return 0;
		}

		len--;
		decimal += base * pow(2, len);
	}
	return decimal;
}

long numConvert::decimal2binary(std::string number)
{
	int decimal, reminder, expo = 1;
	long binary = 0;

	//Changing 'number' to integer
	std::stringstream decimal_number(number);
	decimal_number >> decimal;

	//Conversion to decimal
	while(decimal > 0)
	{
		reminder = decimal % 2;
		binary += reminder * expo;
		expo *= 10;
		decimal /= 2;
	}

	return binary;
}

int numConvert::decimal2octal(std::string number)
{
	int reminder, decimal, expo = 1, octal = 0;

	//Changing 'number' to integer
	std::stringstream decimal_number(number);
	decimal_number >> decimal;

	//Conversion to octal
	if(decimal > 7)
	{
		while (decimal > 7)
		{
			reminder = decimal % 8;
			octal += reminder * expo;
			expo *= 10;
			decimal /= 8;
		}
		octal += decimal * expo;
	}
	else
	{
		octal = decimal;
	}

	return octal;
}

int numConvert::binary2octal(std::string number)
{
	//Conversion to decimal
	int decimal = binary2decimal(number);

	//Converting 'decimal' into std::string
	std::ostringstream decimal_string;
	decimal_string << decimal;
	std::string number_string = decimal_string.str();

	//Converting to octal
	int octal = decimal2octal(number_string);

	return octal;
}

long numConvert::octal2binary(std::string number)
{
	//Conversiom to decimal
	int decimal = octal2decimal(number);

	//Converting 'decimal' to std::string
	std::ostringstream decimal_string;
	decimal_string << decimal;
	std::string number_string = decimal_string.str();

	//Conversion to binary
	long binary = decimal2binary(number_string);

	return binary;


}

int numConvert::octal2decimal(std::string number)
{
	int expo = 1, decimal = 0, octal, reminder;

	//Conversion to interger
	std::stringstream octal_number(number);
	octal_number >> octal;

	//Conversion to decimal
	while (octal > 0)
	{
		reminder = octal % 10;
		if(reminder > 7)
		{
			return 0;
		}
		decimal += reminder * expo;
		expo *= 8;
		octal /= 10;
	}
	return decimal;
}
