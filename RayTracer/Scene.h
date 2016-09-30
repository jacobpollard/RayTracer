#ifndef SCENE_H
#define SCENE_H

#include "Point.h"

class Scene
{
public:
	Scene() {};
	Scene(Point eyePos, Point LowL, int imgHPix, int imgWPix);
private:
	Point eyePosition;
	Point lowerLeftCoordinate;
	int imgHeightInPixels;
	int imgWidthInPixels;
};
#endif // !SCENE_H