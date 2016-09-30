#include "stdafx.h"
#include "Ray.h"

Ray::Ray(float min, float max, Vector pos, Vector dir)
{
	t_min = min;
	t_max = max;
	position = pos;
	direction = dir;
}
