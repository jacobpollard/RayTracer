#ifndef SAMPLE_H
#define SAMPLE_H

class Sample
{
public:
	Sample() {};
	Sample(float xi, float yi);
	float X() const;
	float Y() const;
private:
	float x, y;
};
#endif