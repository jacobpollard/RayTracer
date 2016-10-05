// RayTracer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Vector.h"
#include "Sampler.h"


int main()
{
	Point ll(-2.0, -1.0, -1.0);
	Sampler::SampleMode sampMode = Sampler::SIMPLE;
	Sampler sampler(ll, 200, 100, sampMode);
	Sample mainSample;

	while (sampler.getSample(&mainSample))
	{
		mainSample.print();
	}

	//Vector v(2.3, 2.4, 4.5);
	//Vector t(2, 2, 4);
	//Vector th = v + t;
	//th.print();

    return 0;
}

