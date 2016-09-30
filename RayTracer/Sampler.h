#ifndef SAMPLER_H
#define SAMPLER_H

#include "Vector.h"

class Sampler
{
public:
	enum SampleMode
	{
		SIMPLE, 
		AVERAGE,
		OTHER
	};
	Sampler(Vector ll, Vector lr, Vector ul, Vector ur, int wPix, int hPix, SampleMode m);
private:
	const Vector lowerLeft, lowerRight, upperLeft, upperRight;
	const int widthPixels, heightPixels;
	const SampleMode samplingMode;

};
#endif