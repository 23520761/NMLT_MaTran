#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

void NhapMatrix(float[][500], int&, int&);
void XuatMatrix(float[][500], int, int);
void SecondLargest(float[][500], int, int);

int main()
{
	float a[500][500];
	int i, j;
	NhapMatrix(a, i, j);
	cout << "\n--------------------------------\n";
	XuatMatrix(a, i, j);
	cout << "--------------------------------\n";
	cout << "\n--------------------------------\n";
	cout << "Gia tri lon thu nhi la: ";
	SecondLargest(a, i, j);
	cout << "--------------------------------\n";
	return 0;
}

void SecondLargest(float a[][500], int ii, int jj)
{
	float c[500];
	int k = 0;
	for (int i = 0; i < ii; i++)
		for (int j = 0; j < jj; j++)
			c[k++] = a[i][j];
	float lc = c[0];
	float lcsec = 0;
	for (int i = 0; i < k; i++)
	{
		if (lc < c[i])
			lc = c[i];
	}
	for (int i = 0; i < k; i++)
	{
		if (lcsec < c[i] && c[i] != lc)
			lcsec = c[i];
	}
	cout << lcsec << endl;
}

void NhapMatrix(float a[][500], int& ii, int& jj)
{
	cout << "--------------------------------\n";
	cout << "Nhap so dong: ";
	cin >> ii;
	cout << "--------------------------------\n";
	cout << "Nhap so cot: ";
	cin >> jj;
	cout << "--------------------------------\n\n";
	cout << "--------------------------------\n";
	for (int i = 0; i < ii; i++)
	{
		cout << "Dong " << i + 1 << " : " << endl;
		for (int j = 0; j < jj; j++)
		{
			cin >> a[i][j];
		}
	}
	cout << "--------------------------------\n";
}

void XuatMatrix(float a[][500], int ii, int jj)
{
	cout << "Ma tran la: " << endl;
	for (int i = 0; i < ii; i++)
	{
		for (int j = 0; j < jj; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}
