#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
float TongBien(float[][500], int, int);

int main()
{
	int m;
	int n;
	float a[500][500];
	Nhap(a, m, n);
	XuatMaTran(a, m, n);
	cout << "Tong cac gia tri nam tren bien: "  << fixed << setprecision(2) << TongBien(a, m, n);
	return 0;
}

void Nhap(float a[][500], int& m, int& n)
{
	do 
	{
		cout << "Nhap so hang: ";
		cin >> m;
		cout << "Nhap so cot: ";
		cin >> n;
	} while (m < 2 || n < 2);
	cout << "Nhap cac phan tu trong ma tran: " << endl;
	for (int i = 0; i <= m - 1; i++)
		for (int j = 0; j <= n - 1; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
}

void XuatMaTran(float a[][500], int m, int n)
{
	cout << "Ma tran co dang: " << endl;
	for (int i = 0; i <= m - 1; i++)
	{
		for (int j = 0; j <= n - 1; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

float TongBien(float a[][500], int m, int n)
{
	float s = 0;
	for (int i = 0; i <= m - 1; i++)
		for (int j = 0; j <= n - 1; j++)
			if (i == 0 || i == (m - 1) || j == 0 || j == (n - 1))
				s += a[i][j];
	return s;
}