#pragma once
#include <string>

//Convert to lowercase
std::string ToLower(std::string string)
{
	std::string output;
	for (char& c : string)
	{
		auto k = tolower(c);
		output.push_back(k);
	}

	return output;
}

std::string ToUpper(std::string string)
{
	std::string output;
	for (char& c : string)
	{
		auto k = toupper(c);
		output.push_back(k);
	}

	return output;
}