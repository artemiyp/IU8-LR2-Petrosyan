#pragma once
#include <iostream>
using namespace std;

class Vector
{
public:
	int n;
	int* mas;
	Vector();
	Vector(int, int*);
	Vector(const Vector&);
	~Vector()
	{
		n = 0;
		delete(mas);
	}
	const int operator[](int);
	const Vector operator=(Vector);
	const Vector operator^(Vector);
	friend ostream& operator<<(ostream& out, const Vector v)
	{
		for (int i = 0; i < v.n; i++)
			out << v.mas[i] << " ";
		out << endl;
		return out;
	}
	friend istream& operator>>(istream& in, Vector& v)
	{
		cout << "Number of elements: ";
		int n;
		in >> v.n;
		v.mas = new int[v.n];
		cout << "Elements: ";
		for (int i = 0; i < v.n; i++)
			in >> v.mas[i];
		return in;
	}
};

