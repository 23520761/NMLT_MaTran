#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void NhapMaTran(float[][500], int&, int&, float&, float&);
float Tong(float[][500], int, int, float, float);

int main()
{
	int m;
	int n;
	float a[500][500];
	float x, y;
	NhapMaTran(a, m, n, x, y);
	cout << "Tong cac gia tri nam trong doan [" << x << "," << y << "]= ";
	cout << fixed << setprecision(2) << Tong(a, m, n, x, y);

	return 0;
}

void NhapMaTran(float a[][500], int& m, int& n, float& x, float& y)
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
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
}

float Tong(float a[][500], int m, int n, float x, float y)
{
	float s = 0;
	for (int i = 0; i <= m - 1; i++)
		for (int j = 0; j <= n - 1; j++)
			if (a[i][j] >= x && a[i][j] <= y)
				s += a[i][j];
	return s;
}