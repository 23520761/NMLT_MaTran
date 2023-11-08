#include<iostream>

using namespace std;
void Nhap(int[][500], int&, int&);
int TinhTong(int[][500], int, int,int);
int TongLonNhat(int[][500], int, int);
void Dem(int [][500], int , int );

int main()
{
	int a[500][500], m, n;
	Nhap(a, m, n);
	Dem(a, m, n);
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

int TinhTong(int a[][500], int m, int n,int i)
{
	int s = 0;
	for (int j = 0; j < n; j++)
		s = s + a[i][j];
	return s;
}

int TongLonNhat(int a[][500], int m, int n)
{
	int i;
	int lc = TinhTong(a, m, n, 0);
	for (int i = 0; i < m; i++)
		if (lc < TinhTong(a, m, n, i))
			lc = TinhTong(a, m, n, i);
	return lc;

}

void Dem(int a[][500], int m, int n)
{
	int lc = TongLonNhat(a, m, n);
	for (int i = 0; i < m; i++)
		if (lc = TinhTong(a, m, n, i))
			cout << i<<" ";
}