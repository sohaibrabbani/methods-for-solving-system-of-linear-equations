#include <iostream>
#include <cmath>
using namespace std;
double function(double temp)
{
	double eq;
	eq = 3 * temp + sin(temp) - exp(temp);
	return eq;
}
int main()
{
	int iter=11;
	double inv1,inv2,fx1,fx2,fx3, x,mid;
	cin >> inv1;
	cin >> inv2;
	
	
	for (int i = 0; i < 6;i++)
	{
		
		mid = (inv1 + inv2) / 2;
		if (function(inv1)*function(inv2) < 0)
		{
			inv2 = mid;
		}
		else
		{
			inv1 = mid;
		}
		/*if (fx1*fx2 < 0)
		{

		}
		mid = (inv1 + inv2) / 2;
		fx3 = function(mid);
		if (fx3 > 0 && fx2 < 0)
		{
			fx2 = mid;
			mid = (inv1 + inv2) / 2;

		}
		else if (fx3 > 0 && fx1 < 0)
		{
			fx2 = mid;
			mid = (inv1 + inv2) / 2;
		}
		else if (fx3 < 0 && fx1 > 0)
		{
			fx2 = mid;
			mid = (inv1 + inv2) / 2;
		}
		else if (fx3 < 0 && fx2 > 0)
		{

		}*/
	} 
	cout << function(mid);
	system("pause");
}

