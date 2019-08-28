#include<iostream>
using namespace std;
void rowFunc(float** mat, int colSize, int fRow, float temp2, int sRow, float temp1)
{
	for (int i = 0; i < colSize; i++)
	{
		mat[fRow][i] = (temp1*mat[fRow][i] - temp2*mat[sRow][i]);
	}
}
int main()
{
	int n = 0;
	float **arr;
	int row, col;
	cout << "Size of square matrix: ";
	cin >> n;
	arr = new float *[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new float[n + 1];
	}
	for (int i = 0; i < n; i++)
	{
		cout << "Numbers of Row # " << i + 1 << endl;
		for (int j = 0; j < n + 1; j++)
		{
			cin >> arr[i][j];
		}
	}

	col = n + 1;
	row = n;
	float temp;
	for (int i = 0; i < row; i++)
	{
		temp = arr[i][i];
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = arr[i][j] / temp;
		}
	}
	rowFunc(arr, col, 1, arr[1][0], 0, arr[0][0]);
	rowFunc(arr, col, 2, arr[2][0], 0, arr[0][0]);
	rowFunc(arr, col, 2, arr[2][1], 1, arr[1][1]);
	rowFunc(arr, col, 0, arr[0][1], 1, arr[1][1]);
	rowFunc(arr, col, 0, arr[0][2], 2, arr[2][2]);
	rowFunc(arr, col, 1, arr[1][2], 2, arr[2][2]);
	for (int i = 0; i < row; i++)
	{
		temp = arr[i][i];
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = arr[i][j] / temp;
		}
		cout << endl;
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "\t" << arr[i][j];
		}
		cout << endl << endl;
	}
	cout << "x= " << arr[0][3] << endl;
	cout << "y= " << arr[1][3] << endl;
	cout << "z= " << arr[2][3] << endl;
	
	system("Pause");
	return 0;
}