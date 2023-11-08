#include<iostream>
#include<iomanip>

using namespace std;
void Nhap(int[][500], int&, int&);
bool KiemTra(int);
int KiemTraCot(int[][500], int, int, int);
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
	for (int i = 0; i <= m; i++)
		if (i * i == m)
			return true;
	return false;
}

int KiemTraCot(int a[][500], int m, int n, int c)
{
	int flag = 0;
	for (int i = 1; i < m; i++)
		if (KiemTra(a[i][c]) == true)
			flag = 1;
	return flag;
}

void Xuat(int a[][500], int m, int n)
{
	for (int j = 0; j < n; j++)
		if (KiemTraCot(a, m, n, j) == 1)
			cout << j << endl;
}
