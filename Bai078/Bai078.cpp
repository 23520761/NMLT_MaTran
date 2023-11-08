#include<iostream>

using namespace std;
void Nhap(int[][500], int&, int&);
void Xuat(int[][500], int, int);

int main()
{
	int a[500][500], m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
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

void Xuat(int a[][500], int m, int n)
{
	int j;
	cout << "chon cot de kiem tra ";
	cin >> j;
	int lc = a[0][j];
	if (j > n - 1)
		cout << "khong hop le";
	for (int i = 0; i < n; i++)
	{
		if (lc > a[i][j])
			lc = a[i][j];
	}
	cout << lc;
}