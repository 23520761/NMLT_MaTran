#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void NhapMaTran(int[][500], int&, int&, int&);
void LietKeMaTran(int[][500], int, int);
bool KtDoiXung(int);
void LietKe(int[][500], int, int, int);

int main()
{
	int m;
	int n;
	int a[500][500];
	int d;
	NhapMaTran(a, m, n, d);
	LietKeMaTran(a, m, n);
	LietKe(a, m, n, d);
	return 0;
}

void NhapMaTran(int a[][500], int& m, int& n, int& d)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
		cout << "Nhap cac phan tu trong mang: " << endl;
	for (int i = 0; i <= m - 1; i++)
		for (int j = 0; j <= n - 1; j++)
		{	 
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	cout << "Nhap cot can kiem tra: ";
	cin >> d;
}

void LietKeMaTran(int a[][500], int m, int n)
{
	cout << "\nMa tran co dang: " << endl;
	for (int i = 0; i <= m - 1; i++)
	{
		for (int j = 0; j <= n - 1; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

bool KtDoiXung(int k)
{
	k = abs(k);
	int dn = 0;
	for (int t = k; t != 0; t /= 10)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
	}
	if (dn == k)
		return true;
	return false;
}

void LietKe(int a[][500], int m, int n, int d)
{
	cout << "\nCac so doi xung tren cot " << d << ": ";
	for (int i = 0; i <= m - 1; i++)
		if (KtDoiXung(a[i][d]))
			cout << setw(8) << a[i][d];
}