#include<iostream>
using namespace std;
void main()
{
	float x1 = 0, x2 = 0, x3 = 0, x4 = 0;	
	int a1, b1, c1,d1, q1;
	int a2, b2, c2,d2, q2;
	int a3, b3, c3,d3, q3;
	int a4, b4, c4,d4, q4;
	float a, b, c, d;
	a1 = 10;
	b1 = -1;
	c1 = 2;
	d1 = 0;
	q1 = 6;
	a2 = -1;
	b2 = 11;
	c2 = -1;
	d2 = 3;
	q2 = 25;
	a3 = 2;
	b3 = -1;
	c3 = 10;
	d3 = -1;
	q3 = -11;
	a4 = 0;
	b4 = 3;
	c4 = -1;
	d4 = 8;
	q4 = 15;
	for (int i = 1; i <= 9; i++)
	{
		a = (q1 - (b1*x2) - (c1*x3)) / a1;
		x1 = a;
		b = (q2 - (a2*x1) - (c2*x3) - (d2*x4)) / b2;
		x2 = b;
		c = (q3 - (a3*x1) - (b3*x2) - (d3*x4)) / c3;
		x3 = c;
		d = (q4 - (a4*x1) - (b4*x2) - (c4*x3)) / d4;
		x4 = d;
		cout << "It:" << i << " X1" << " = " << a << endl;
		cout << "It:" << i << " X2" << " = " << b << endl;
		cout << "It:" << i << " X3" << " = " << c << endl;
		cout << "It:" << i << " X4" << " = " << d << endl;

	}
	system("pause");
}