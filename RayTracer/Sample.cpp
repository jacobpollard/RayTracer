#include "stdafx.h"
#include "Sample.h"
#include <iostream>

Sample::Sample(float xi, float yi)
{
	x = xi;
	y = yi;
}

float Sample::X() const
{
	return x;
}

float Sample::Y() const
{
	return y;
}

void Sample::print()
{
	std::cout << "X: " << x << "\n" << "Y: " << y << "\n";
}
