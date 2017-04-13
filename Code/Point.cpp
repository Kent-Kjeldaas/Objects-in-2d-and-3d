#include "stdafx.h"
#include <iostream>

#include "Point.h"

using namespace std;

Point::Point(int x, int y, int z) //Constructor
{
	xKord = x;
	yKord = y;
	zKord = z;
}

std::ostream &operator<<(std::ostream &stream, Point p) { //cout << point;
	stream << "(" << p.getX() << ", " << p.getY() << ", " << p.getZ() << ")";
	return stream;
}

Point::Point()
{
}

Point::~Point()
{
}

int Point::getX()
{
	return xKord;
}

int Point::getY()
{
	return yKord;
}

int Point::getZ()
{
	return zKord;
}
