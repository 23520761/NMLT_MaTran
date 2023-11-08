#include<iostream>

using namespace std;
void Nhap(int[][500], int&, int&);
bool KiemTra(int);
int Dem(int[][500], int, int);
int LonNhat(int[][500], int, int);
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

bool KiemTra(int m)
{
	int s = 0;
	for (int i = 1; i < m; i++)
		if (m % i == 0)
			s = s + i;
	if (s == m)
		return true;
	return false;
}

int Dem(int a[][500], int m, int n,int i)
{
	int dem = 0;
	for (int j = 0; j < n; j++)
		if (KiemTra(a[i][j]) == true)
			dem++;
	return dem;
}

int LonNhat(int a[][500], int m, int n)
{
	int lc = Dem(a, m, n, 0);
	for (int i = 0; i < m; i++)
		if (lc < Dem(a, m, n, i))
			lc = Dem(a, m, n, i);
	return lc;
}

void Xuat(int a[][500], int m, int n)
{
	int lc = LonNhat(a,m,n);
	for (int i = 0; i < m; i++)
		if (lc == Dem(a, m, n, i))
			cout << i << " ";
}




