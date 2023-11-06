#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

void NhapMatrix(float[][500], int&, int&);
void XuatMatrix(float[][500], int, int);
int ktDonDuong(float[][500], int, int);
int ktDonAm(float[][500], int, int);
void XoaDaDau(float[][500], int, int);
void XoaCot(float[][500], int, int&, int);


int main()
{
	float a[500][500];
	int i, j;
	NhapMatrix(a, i, j);
	cout << "\n--------------------------------\n";
	XuatMatrix(a, i, j);
	cout << "--------------------------------\n";
	cout << "\n--------------------------------\n";
	XoaDaDau(a, i, j);
	cout << "--------------------------------\n";
	return 0;
}

void XoaDaDau(float a[][500], int ii, int jj)
{
	for (int j = 0; j < jj; j++)
		if (ktDonDuong(a, ii, j) == 1 && ktDonAm(a, ii, j) == 1)
		{
			XoaCot(a, ii, jj, j);
			j = 0;
		}
	for (int i = 0; i < ii; i++)
	{
		for (int j = 0; j < jj; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

int ktDonDuong(float a[][500], int ii, int jj)
{
	int flag = 0;
	for (int i = 0; i < ii; i++)
	{
		if (a[i][jj] > 0)
			flag = 1;
	}
	return flag;
}
int ktDonAm(float a[][500], int ii, int jj)
{
	int flag = 0;
	for (int i = 0; i < ii; i++)
	{
		if (a[i][jj] < 0)
			flag = 1;
	}
	return flag;
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

void XoaCot(float a[][500], int m, int& n, int c)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = c; j <= n - 2; j++)
			a[i][j] = a[i][j + 1];
	}
	n--;
}
