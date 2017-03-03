// Objects in 2d and 3d.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include "Point.h"
#include "Line.h"
#include "Polygon.h"

using namespace std;

int main()
{
	Point p(2, 2, 1);
	Point p2(3, 3, 2);
	Point p3(1, 1, 0);
	Point p4(0, 0, 0);

	Line l, l1;
	l = p + p2;
	l1 = p3 + p4; // linje = punkt + punkt

	vector<Point> a;
	a.push_back(p3);
	a.push_back(p2);
	a.push_back(p);

	vector<Point> b;
	b.push_back(p4);
	b.push_back(p);
	b.push_back(p);

	Polygon polygon2(b);
	Polygon polygon(a);

	cout << "Punkt: " << p << endl; // skriv ut punkt (2, 2, 1)
	cout << "Linje: " << l << endl; // skriv ut linje (2, 2, 1) (3, 3, 2)
	cout << "Polygon: " << a << endl; // skriv ut polygon (1, 1, 0) (3, 3, 2) (2, 2, 1)
	cout << endl;
	polygon = l + l1; // polygon = linje + linje 

	Polygon p12 = polygon + polygon2;
	Polygon p14 = p12 + p; // polygon = polygon + punkt
	Polygon p13 = p12 + l1; // polygon = polygon + linje
	Polygon p15 = p12 + p13; // polygon = polygon + polygon
	cout << "Polygon = Linje + Linje: " << polygon << endl;
	cout << endl;
	cout << "Polygon = Polygon + Punkt: " << p14 << endl;
	cout << endl;
	cout << "Polygon = Polygon + Linje: " << p13 << endl;
	cout << endl;
	cout << "Polygon = Polygon + Polygon: " << p15 << endl;

	return 0;
}

