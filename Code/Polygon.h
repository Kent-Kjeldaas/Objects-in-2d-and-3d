#pragma once
#include <vector>
#include <iostream>
#include "Point.h"
#include "Line.h"

using namespace std;

class Polygon
{
public:
	Polygon(vector<Point> p); //Konstruktør
	Polygon();
	~Polygon(); 

	friend std::ostream &operator<<(std::ostream &stream, Polygon p); //Cout << Polygon;

	int getSizeOfVector(); 

	vector<Point> poly;
};
Polygon operator+(Polygon, Polygon); //Polygon = Polygon + Polygon;
Polygon operator+(Polygon q, Point p); //Polygon = Polygon + Punkt;
Polygon operator+(Line l, Line m); // Polygon = Linje + Linje;
Polygon operator+(Line l, Point p); //Polygon = Linje + Punkt;
Polygon operator+(Point p, Line l); //Polygon = Punkt + Linje;
Polygon operator+(Polygon q, Line l);

//Polygon operator=(Polygon p);