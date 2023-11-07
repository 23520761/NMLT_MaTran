#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(float[][500], int&, int&, float&);
void XuatMaTran(float[][500], int, int);
int DemTanSuat(float[][500], int, int, float);

int main()
{
	int m;
	int n;
	float x;
	float a[500][500];
	Nhap(a, m, n, x);
	XuatMaTran(a, m, n);
	cout << "Tan suat xuat hien cua gia tri x: " << DemTanSuat(a, m, n, x);
	return 0;
}

void Nhap(float a[][500], int& m, int& n, float& x)
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
	cout << "Nhap gia tri x: ";
	cin >> x;
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

int DemTanSuat(float a[][500], int m, int n, float x)
{
	int dem = 0;
	for (int i = 0; i <= m - 1; i++)
		for (int j = 0; j <= n - 1; j++)
			if (a[i][j] == x)
				dem++;
	return dem;
}