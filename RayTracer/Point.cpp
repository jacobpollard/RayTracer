#include "stdafx.h"
#include "Point.h"
#include <iostream>

Point::Point(float x, float y, float z)
{
	p[0] = x;
	p[1] = y;
	p[2] = z;
}

float Point::X() const
{
	return p[0];
}

float Point::Y() const
{
	return p[1];
}

float Point::Z() const
{
	return p[2];
}

void Point::print() const
{
	std::cout << "X: " << p[0] << "\n"
			  << "Y: " << p[1] << "\n"
			  << "Z: " << p[2] << "\n";
}
