#include <iostream>
using namespace std;
int main()
{
	float lower, higher, funcL, funcH, DerL, DerH,root;
	int iterations;
	cout << "Enter lower interval:";
	cin >> lower;
	cout << "Enter higher interval:";
	cin >> higher;
	cout << "Number of iterations:";
	cin >> iterations;
	funcL = 5*pow(lower, 3) - 2*pow(lower, 2) + lower - 20;
	funcH = 5 * pow(higher, 3) - 2 * pow(higher, 2) + higher - 20;
	if (funcL * funcH < 0)
	{

		DerL = -15 * pow(lower, 2) + 4 * lower ;
		DerH = -15 * pow(higher, 2) + 4 * higher;
		//DerL= -5*lower - 2
		if (abs(DerL) < 1 && abs(DerH) < 1)
		{
			root = (lower + higher) / 2;
			for (int i = 0; i < iterations; i++)
			{
				root = (-5 * pow(root, 3)) + (2 * pow(root, 2)) + 20;
				cout << root << endl;
			}
		}
		else
			cout << "Iteration method cannot be applied";
	}
	else
		cout << "No";
	system("pause");
}