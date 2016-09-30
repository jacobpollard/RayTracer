#include "stdafx.h"
#include "Scene.h"

Scene::Scene(Point eyePos, Point LowL, int imgHPix, int imgWPix)
{
	eyePosition = eyePos;
	lowerLeftCoordinate = LowL;
	imgHeightInPixels = imgHPix;
	imgWidthInPixels = imgWPix;
}
