#pragma once
#include <iostream>
class Book
{
private:
	std::string name;
	std::string writer;
	int pages;
	int editYear;
public:
	Book();
	Book(std::string name, std::string writer, int pages, int editYear);
	~Book();
};

