#include "stdafx.h"
#include "Vector.h"
#include <iostream>

Vector::Vector(float x, float y, float z) {
	v[0] = x;
	v[1] = y;
	v[2] = z;
}

float Vector::X() const {
	return v[0];
}

float Vector::Y() const {
	return v[1];
}

float Vector::Z() const {
	return v[2];
}

void Vector::print() const {
	std::cout << "X: " << v[0] << "\n"
			  << "Y: " << v[1] << "\n"
			  << "Z: " << v[2] << "\n";
}

const Vector Vector::operator+(const Vector & v2) const
{
	Vector result = *this; //Make copy of myself
	result += v2;
	return result;
}

const Vector Vector::operator-(const Vector & v2) const
{
	Vector result = *this; //Make copy of myself
	result -= v2;
	return result;
}

const Vector Vector::operator*(const float t) const
{
	Vector result = *this; //Make copy of myself
	result *= t;
	return result;
}

const Vector Vector::operator/(const float t) const
{
	Vector result = *this; //Make copy of myself
	result /= t;
	return result;
}

Vector & Vector::operator+=(const Vector & v2)
{
	v[0] += v2.v[0];
	v[1] += v2.v[1];
	v[2] += v2.v[2];
	return *this;
}

Vector & Vector::operator-=(const Vector & v2)
{
	v[0] -= v2.v[0];
	v[1] -= v2.v[1];
	v[2] -= v2.v[2];
	return *this;
}

Vector & Vector::operator*=(const float t)
{
	v[0] *= t;
	v[1] *= t;
	v[2] *= t;
	return *this;
}

Vector & Vector::operator/=(const float t)
{
	v[0] /= t;
	v[1] /= t;
	v[2] /= t;
	return *this;
}
