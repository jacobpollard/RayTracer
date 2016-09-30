#ifndef RAY_H
#define RAY_H

#include "Vector.h"


class Ray
{
public:
	Ray() {};
	Ray(float min, float max, Vector pos, Vector dir);
private:
	float t_min;
	float t_max;
	Vector position;
	Vector direction;
};
#endif // !RAY_H