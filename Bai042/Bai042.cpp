#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;
void Nhap(int[][500], int&, int&);
bool KiemTra(int);
void TinhTong(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;
	Nhap(a, m, n);
	TinhTong(a, m, n);
	return 0;
}

void Nhap(int a[][500], int& m, int& n)
{
	cout << "nhap hang ";
	cin >> m;
	cout << "nhap cot ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "nhap a[" << i << "]" << "[" << j << "]";
			cin >> a[i][j];
		}
}

bool KiemTra(int m)
{
	if (m < 0)
		return false;
	while (m != 1)
	{
		if (m % 2 != 0)
			return false;
		m = m / 2;
	}
	return true;
}

void TinhTong(int a[][500], int m, int n)
{
	int s = 0;
	int j;
	cout << "nhap cot can tinh tong ";
	cin >> j;
	if (j > m)
		cout << "khong hop le ";
	else
	{
		for (int i = 0; i < m; i++)
			if (KiemTra(a[i][j]) == true)
				s = s + a[i][j];
	}
	cout << s;
}