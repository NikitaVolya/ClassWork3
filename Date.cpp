#include "Date.h"


const Date& Date::getNewer(const Date& other)
{
    if (year < other.year)
        return other;

    if (other.year < year)
        return *this;

    if (mouth < other.mouth)
        return other;

    if (other.mouth < mouth)
        return *this;
    
    if (day < other.day)
        return other;

    if (other.day < day)
        return *this;

    return *this;
}

void Date::print() const
{
    std::cout << day << " | " << mouth << " | " << year << std::endl;
}
