#pragma once
#include <string>
#include <iostream>

class Book
{
public:
	Book(std::string title, std::string author);
	void printBook();
private:
	std::string title;
	std::string author;
};