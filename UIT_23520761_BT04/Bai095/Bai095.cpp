#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void TaoMaTran(int[][500], int&, int&);
void XuatMaTran(int[][500], int, int);
int DemChuSo(int);
int DemCot(int[][500], int, int, int);
int DemLonNhat(int[][500], int, int);
void LietKe(int[][500], int, int);

int main()
{
	int m;
	int n;
	int a[500][500];
	TaoMaTran(a, m, n);
	XuatMaTran(a, m, n);
	cout << "\nChu so nhieu nhat trong mot cot: " << DemLonNhat(a, m, n);
	LietKe(a, m, n);
	return 0;
}

void TaoMaTran(int a[][500], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	cout << "Nhap cac phan tu trong ma tran: " << endl;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
}

void XuatMaTran(int a[][500], int m, int n)
{
	cout << "\nMa tran ban dau co dang: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

int DemChuSo(int n)
{
	int dem = 0;
	int t = abs(n);
	while (t != 0)
	{
		int dv = t % 10;
		dem++;
		t /= 10;
	}
	return dem;
}

int DemCot(int a[][500], int m, int n, int c)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		dem += DemChuSo(a[i][c]);
	}
	return dem;
}

int DemLonNhat(int a[][500], int m, int n)
{
	int lc = DemCot(a, m, n, 0);
	for (int j = 0; j < n; j++)
		if (DemCot(a, m, n, j) > lc)
			lc = DemCot(a, m, n, j);
	return lc;
}

void LietKe(int a[][500], int m, int n)
{
	cout << "\nCac cot co nhieu chu so nhat trong ma tran: ";
	int lc = DemLonNhat(a, m, n);
	for (int j = 0; j < n; j++)
		if (DemCot(a, m, n, j) == lc)
			cout << setw(8) << j;
}