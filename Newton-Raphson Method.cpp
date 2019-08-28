#include <iostream>
using namespace std;
long double func(long double num)
{
	return pow(num, 3) - (num) - 1;    //-1,5
}
long double funcDev(long double num)
{
	return 3*pow(num, 2) - 1;
}
int main()
{
	cout.precision(15);
	fixed;
	int iter=1;
	bool flag = true;
	long double a, b, root, temp;
	cout << "Enter lower interval:";
	cin >> a;
	cout << "Enter upper interval:";
	cin >> b;
	
	if (func(a)*func(b)<0)
		{
			root = (a + b) / 2;
			while ( flag==true )
			{
				temp = root;
				root = root - (func(root)/funcDev(root));
				if (static_cast<long int>(temp*10000000.0) == static_cast<long int>(root*10000000.0))
				{
					flag = false;

				}
				cout << "x" << iter << "  " << root << endl << endl;
				iter++;
			}
		}
		else
			cout << "cannot be done";
	
	system("pause");
}