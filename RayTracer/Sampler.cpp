#include "stdafx.h"
#include "Sampler.h"
#include <iostream>


Sampler::Sampler(Point lowLeft, int wPix, int hPix, SampleMode m)
{
	widthPixels = wPix;
	heightPixels = hPix;

	Point lr(-1 * lowLeft.X(), lowLeft.Y(), lowLeft.Z());
	Point ul(lowLeft.X(), -1 * lowLeft.Y(), lowLeft.Z());
	Point ur(-1 * lowLeft.X(), -1 * lowLeft.Y(), lowLeft.Z());

	lowerLeft = lowLeft;
	lowerRight = lr;
	upperLeft = ul;
	upperRight = ur;
	samplingMode = m;
}

bool Sampler::getSample(Sample* sample)
{
	return true;
}

void Sampler::print()
{
	std::cout << "LowerLeft: \n";
	lowerLeft.print();
	std::cout << "LowerRight: \n";
	lowerRight.print();
	std::cout << "UpperLeft: \n";
	upperLeft.print();
	std::cout << "upperRight: \n";
	upperRight.print();
}
