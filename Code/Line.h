#pragma once

# include "Point.h"

class Line
{
public:
	Line(Point p1, Point p2);
	Line();
	~Line();

	Line::Point& getP1();
	void setP1(Point p);

	Line::Point& getP2();
	void setP2(Point p);

	//cout Linje
	friend std::ostream &operator<<(std::ostream &stream, Line l);

private:
	Point p1;
	Point p2;
};

Line operator+(Point p, Point q);