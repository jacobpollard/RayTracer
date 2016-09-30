// RayTracer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Vector.h"


int main()
{
	Vector v(2.3, 2.4, 4.5);
	Vector t(2, 2, 4);
	Vector th = v + t;
	th.print();

    return 0;
}

