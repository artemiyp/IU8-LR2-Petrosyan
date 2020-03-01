#include "Vector.h"

Vector::Vector()
{
	n = 0;
	mas = NULL;
}

Vector::Vector(int _n, int* _mas)
{
	n = _n;
	mas = new int[n];
	for (int i = 0; i < n; i++)
		mas[i] = _mas[i];
}

Vector::Vector(const Vector& v)
{
	n = v.n;
	mas = new int[n];
	for (int i = 0; i < n; i++)
		mas[i] = v.mas[i];
}

const int Vector::operator[](int i)
{
	return mas[i];
}

const Vector Vector::operator=(Vector v)
{
	return Vector(v);
}

const Vector Vector::operator^(Vector v)
{
	int* buf = new int[n];
	for (int i = 0; i < n; i++)
		buf[i] = mas[i] & v.mas[i];
	return Vector(n, buf);
}

