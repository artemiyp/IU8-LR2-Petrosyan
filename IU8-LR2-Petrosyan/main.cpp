#include <fstream>
#include "Vector.h"

int main()
{
	ifstream in("input.txt");
	ofstream out("output.txt");
	int n;
	in >> n;
	int* buf = new int[n];
	cout << "n = " << n << endl;
	for (int i = 0; i < n; i++)
		in >> buf[i];
	Vector v1(n, buf);
	out << "V1: " << v1 << endl;
	Vector v2;
	cin >> v2;
	out << "V2: " << v2 << endl;
	Vector v3(v2);
	out << "V3: " << v3 << endl;
	Vector v4 = v1 ^ v2;
	out << "V4 = V1 ^ V2: " << v4 << endl;
	return 0;
}
