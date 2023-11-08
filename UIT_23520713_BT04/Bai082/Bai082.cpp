#include<iostream>

using namespace std;
void Nhap(int[][500], int&, int&);
int Kiemtra(int [][500],int m,int n);
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

int Kiemtra(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] % 2 == 0)
				return a[i][j];
		}
}
void Xuat(int a[][500], int m, int n)
{
	int lc = Kiemtra(a, m, n);
	for ( int i = 0; i < m; i++)
		for ( int j = 0; j < n; j++)
		{
			if (lc < a[i][j] && a[i][j] % 2 == 0)
				lc = a[i][j];
		}
	cout << lc;
}
