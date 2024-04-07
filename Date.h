#pragma once

#include <iostream>

class Date
{
private:
	unsigned int day : 5;
	unsigned int mouth : 4;
	unsigned int year : 23;

public:
	Date(int pDay, int pMouth, int pYear) : day(pDay), mouth(pMouth), year(pYear) {};
	Date(const Date& pDate) : day(pDate.day), mouth(pDate.mouth), year(pDate.year) {};

	int getDay() { return day; };
	int getMouth() { return mouth; };
	int getYear() { return year; };

	const Date& getNewer(const Date& other);

	void print() const;
};