#ifndef POINT_H
#define POINT_H

class Point
{
public:
	Point() {};
	Point(float x, float y, float z);
	float X() const;
	float Y() const;
	float Z() const;
	void print() const;

	~Point() {};

private:
	float p[3];
};

#endif // !POINT_H