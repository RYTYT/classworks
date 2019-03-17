#include "pch.h"
#include "Book.h"
#include <iostream>

Book::Book()
{
	name = "None";
	writer = "None";
	pages = 1;
	editYear = 0000;
}

Book::Book(std::string name, std::string writer, int pages, int editYear) 
{
	this->name = name;
	this->writer = writer;
	this->pages = pages;
	this->editYear = editYear;
}

Book::~Book()
{

}
