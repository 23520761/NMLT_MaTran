#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(int[][500], int&, int&, int&);
void XuatMaTran(int[][500], int, int);
int TichCot(int[][500], int, int, int);

int main()
{
	int m;
	int n;
	int a[500][500];
	int c;
	Nhap(a, m, n, c);
	XuatMaTran(a, m, n);
	cout << "Tich cac so chan tren cot " << c << ": " << TichCot(a, m, n, c);
	return 0;
}

void Nhap(int a[][500], int& m, int& n, int& c)
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

void XuatMaTran(int a[][500], int m, int n)
{
	cout << "Ma tran co dang: " << endl;
	for (int i = 0; i <= m - 1; i++)
	{
		for (int j = 0; j <= n - 1; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

int TichCot(int a[][500], int m, int n, int c)
{
	int t = 1;
	for (int i = 0; i <= m - 1; i++)
		if (a[i][c] % 2 == 0)
			t *= a[i][c];
	return t;
}