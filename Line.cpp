#include "stdafx.h"
#include <iostream>

#include "Line.h"

using namespace std;

//Konstruktør
Line::Line(Point p, Point q) 
{
	p1 = p;
	p2 = q;
}

//cout << line;
std::ostream &operator<<(std::ostream &stream, Line l) 
{
	stream << "(" << l.getP1() << ") (" << l.getP2() << ")";
	return stream;
}

Line operator+(Point p, Point q) //Linje = Punkt + Punkt
{
	Line l;
	l.setP1(p);
	l.setP2(q);
	return l;
}

Line::Line()
{
}

Line::~Line()
{
}

Point& Line::getP1()
{
	return p1;
}

void Line::setP1(Point p)
{
	p1 = p;
}

Point& Line::getP2()
{
	return p2;
}

void Line::setP2(Point p)
{
	p2 = p;
}