#include <iostream>
#include <cmath>
using namespace std;

void Nhap(int[][500], int&, int&, int&);
bool KtDoiXung(int);
int TongDong(int[][500], int, int, int);

int main()
{
	int m;
	int n;
	int a[500][500];
	int d;
	Nhap(a, m, n, d);
	cout << "Tong cac so doi tren dong " << d << " : " << TongDong(a, m, n, d);
	return 0;
}

void Nhap(int a[][500], int& m, int& n, int& d)
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
	cout << "Nhap dong can tinh: ";
	cin >> d;
}

bool KtDoiXung(int k)
{
	int dn = 0;
	k = abs(k);
	for (int t = k; t != 0; t /= 10)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
	}
	if (dn == k)
		return true;
	return false;
}

int TongDong(int a[][500], int m, int n, int d)
{
	int s = 0;
	for (int j = 0; j <= n - 1; j++)
		if (KtDoiXung(a[d][j]))
			s += a[d][j];
	return s;
}