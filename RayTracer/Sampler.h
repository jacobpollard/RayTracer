#ifndef SAMPLER_H
#define SAMPLER_H

#include "Vector.h"
#include "Point.h"
#include "Sample.h"

class Sampler
{
public:
	enum SampleMode
	{
		SIMPLE, 
		AVERAGE,
		OTHER
	};
	Sampler(Point lowLeft, int wPix, int hPix, SampleMode m);
	bool getSample(Sample* sample);
	void print();
private:
	Point lowerLeft, lowerRight, upperLeft, upperRight;
	int widthPixels, heightPixels;
	SampleMode samplingMode;

};
#endif