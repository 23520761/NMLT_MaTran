#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(float[][500], int&, int&, int&);
void XuatMaTran(float[][500], int, int);
int DemAm(float[][500], int, int, int);

int main()
{
	int m;
	int n;
	int c;
	float a[500][500];
	Nhap(a, m, n, c);
	XuatMaTran(a, m, n);
	cout << "So luong gia tri am tren cot " << c << " la : " << DemAm(a, m, n, c);
	return 0;
}

void Nhap(float a[][500], int& m, int& n, int& c)
{
		cout << "Nhap so hang: ";
		cin >> m;
		cout << "Nhap so cot: ";
		cin >> n;
	cout << "Nhap cac phan tu trong ma tran: " << endl;
	for (int i = 0; i <= m - 1; i++)
		for (int j = 0; j <= n - 1; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	cout << "Nhap cot can tinh: ";
	cin >> c;
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

int DemAm(float a[][500], int m, int n, int c)
{
	int dem = 0;
	for (int i = 0; i <= m - 1; i++)
		if (a[i][c] < 0)
			dem++;
	return dem;
}