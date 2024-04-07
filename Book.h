#pragma once

#include <iostream>


class Book
{
private:

	char* author;
	char* title;

	unsigned short year;
	unsigned short pageNumber;

	const char* getCharLine(char* value);
	void changeCharLine(const char* line, char*& value);
public:

	Book() : author(nullptr), title(nullptr), year(0), pageNumber(0) {};
	Book(const char* pAuthor, const char* pTitle, int pYear, int pPageNumber);
	Book(const Book& pBook);
	
	~Book();

	const char* getAuthor() { return getCharLine(author); };
	const char* getTitle() { return getCharLine(title); };
	short getYear() { return year; };
	short getPageNumber() { return pageNumber; };

	void setAuthor(const char* pName) { changeCharLine(pName, author); };
	void setTitle(const char* pTitle) { changeCharLine(pTitle, title); };
	void setYear(const int pYear);
	void setPageNumber(const int pPageNumber);

	void print();
};