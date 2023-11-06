#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

void NhapMatrix(float[][500], int&, int&);
void XuatMatrix(float[][500], int, int);
void ChenCot(float[][500], int, int);
void ThemCot(float[][500], int, int&, int c);


int main()
{
	float a[500][500];
	int i, j;
	NhapMatrix(a, i, j);
	cout << "\n--------------------------------\n";
	XuatMatrix(a, i, j);
	cout << "--------------------------------\n";
	cout << "\n--------------------------------\n";
	ChenCot(a, i, j);
	cout << "--------------------------------\n";
	return 0;
}

void ChenCot(float a[][500], int ii, int jj)
{

	ThemCot(a, ii, jj, jj);
	for (int i = 0; i < ii; i++)
	{
		for (int j = 0; j < jj; j++)
			cout << setw(12) << a[i][j];
		cout << endl;
	}
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

void ThemCot(float a[][500], int m, int& n, int c)
{
	float Tich = 1;
	for (int i = 0; i < m; i++)
	{
		for (int j = n; j >= c + 1; j--)
			a[i][j] = a[i][j - 1];
		for (int j = 0; j < n; j++)
			Tich = Tich * a[i][j];
		a[i][c] = Tich;
		Tich = 1;
	}
	n++;
}
