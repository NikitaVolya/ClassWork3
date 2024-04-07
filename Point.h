#pragma once


class Point
{
private:
	int x;
	int y;
public:
	Point() : x(0), y(0) {};
	Point(int pX, int pY) : x(pX), y(pY) {};
	Point(const Point& pPoint) : x(pPoint.x), y(pPoint.y) {};

	int getX() { return x; };
	int getY() { return y; }
};

