#include "stdafx.h"
#include "Sample.h"

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
