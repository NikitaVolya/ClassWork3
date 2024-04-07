#include <iostream>
#include "Point.h"
#include "Date.h"

using namespace std;

int main()
{
	Point a(5, 2);
	Point b = a;

	cout << b.getX() << " | " << b.getY() << endl;



	Date naisance(13, 3, 2006);
	Date old = naisance;


	old.print();

	Date now(7, 4, 2024);
	now.print();

	now.getNewer(old).print();
}