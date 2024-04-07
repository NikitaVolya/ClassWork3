#include "Book.h"

const char* Book::getCharLine(char* value)
{
    if (value)
        return value;
    else
        return "None";
}

void Book::changeCharLine(const char* line, char*& value)
{
    if (!line)
    {
        if (value)
            delete[] value;

        value = nullptr;
        return;
    }

    if (value)
        delete[] value;

    int len = std::strlen(line) + 1;
    value = new char[len];

    for (int i = 0; i < len; i++)
        value[i] = line[i];
}

Book::Book(const char* pAuthor, const char* pTitle, int pYear, int pPageNumber)
{
    setAuthor(pAuthor);
    setTitle(pTitle);
    setYear(pYear);
    setPageNumber(pPageNumber);
}

Book::Book(const Book& pBook) : author(nullptr), title(nullptr), year(pBook.year), pageNumber(pBook.pageNumber)
{
    setAuthor(pBook.author);
    setTitle(pBook.title);
}

Book::~Book()
{
    if (author)
        delete[] author;
    if (title)
        delete[] title;
}

void Book::setYear(const int pYear)
{
    if (pYear <= 0)
    {
        std::cout << "[ class Book : setYear ] invalide number \n";
        return;
    }
    year = pYear;
}

void Book::setPageNumber(const int pPageNumber)
{
    if (pPageNumber <= 0)
    {
        std::cout << "[ class Book : setYear ] invalide number \n";
        return;
    }
    pageNumber = pPageNumber;
}

void Book::print()
{
    std::cout << getAuthor() << " | " << getTitle() << " | " << year << " | " << pageNumber << std::endl;
}
