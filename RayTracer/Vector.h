#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
public:
	Vector() {};
	Vector(float x, float y, float z);
	float X() const;
	float Y() const;
	float Z() const;
	void print() const;

	const Vector operator+(const Vector &v2) const;
	const Vector operator-(const Vector &v2) const;
	const Vector operator*(const float t) const;
	const Vector operator/(const float t) const;

	Vector & operator+=(const Vector &v2);
	Vector & operator-=(const Vector &v2);
	Vector & operator*=(const float t);
	Vector & operator/=(const float t);

	~Vector() {};

private:
	float v[3];
};

#endif // !VECTOR_H