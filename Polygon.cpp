#include "stdafx.h"
#include <iostream>
#include <vector>
#include "Polygon.h"

using namespace std;

//Konstruktør
Polygon::Polygon(vector<Point> p) 
{
	for (unsigned int i = 0; i < p.size(); i++) {
		poly.push_back(p[i]);
	}
}

//Konstruktor uten parametere
Polygon::Polygon() 
{
}

//Destructor
Polygon::~Polygon() 
{
}

//size of polygonVector
int Polygon::getSizeOfVector() 
{
	return poly.size();
} 

std::ostream &operator<<(std::ostream &stream, Polygon p) //cout << polygon;
{
	for (int i = 0; i < p.getSizeOfVector(); i++) { 
		stream << p.poly.at(i) << " ";
	}
	return stream;
}

Polygon operator+(Polygon p, Polygon q) //Polygon = Polygon + Polygon
{
	vector<Point> point; // Legg til alle punkter fra Polygon 1 
	for (int i = 0; i < p.getSizeOfVector(); i++) {
		point.push_back(p.poly.at(i));
	} //Legg til alle punkter fra Polygon 2
	for (int i = 0; i < q.getSizeOfVector(); i++) {
		point.push_back(q.poly.at(i));
	}
	Polygon s(point); //Lag polygon s med alle punktene fra de 2 andre
	return s;
}

Polygon operator+(Polygon q, Point p) // Polygon = Polygon + Punkt 
{
	vector<Point> point;
	for (int i = 0; i < q.getSizeOfVector(); i++) {
		point.push_back(q.poly.at(i));
	}
	point.push_back(p);
	Polygon r(point);

	return r;
}

Polygon operator+(Line l, Line m) //Polygon = Linje + Linje 
{
	vector<Point> vecP;
	vecP.push_back(l.getP1());
	vecP.push_back(l.getP2());
	vecP.push_back(m.getP1());
	vecP.push_back(m.getP2());

	Polygon p(vecP);
	return p;
}

Polygon operator+(Line l, Point p)  //Polygon = Linje + Punkt 
{
	vector<Point> vecP;
	vecP.push_back(l.getP1());
	vecP.push_back(l.getP2());
	vecP.push_back(p);

	Polygon poly(vecP);
	return poly;
}

Polygon operator+(Point p, Line m)  //Polygon = Punkt + Linje 
{
	vector<Point> vecP;
	vecP.push_back(p);
	vecP.push_back(m.getP1());
	vecP.push_back(m.getP2());

	Polygon poly(vecP);
	return poly;
}

Polygon operator+(Polygon q, Line l) //Polygon = Polygon + Linje 
{
	vector<Point> point;
	for (int i = 0; i < q.getSizeOfVector(); i++) {
		point.push_back(q.poly.at(i));
	}
	point.push_back(l.getP1());
	point.push_back(l.getP2());
	
	Polygon r(point);

	return r;
}

//Polygon Polygon::operator=(Polygon p) //Polygon = Polygon
//{
//	for (int i = 0; i < p.getSizeOfVector(); i++) {
//		poly.at(i) = p.poly.at(i);
//	}
//	return *this;
//}