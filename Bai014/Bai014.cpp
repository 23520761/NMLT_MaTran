#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;
void Nhap(int[][500], int&, int&);
bool KiemTra(int);
void Xuat(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;
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
	if (m < 0)
		m = -m;
	while (m != 1)
	{
		if (m % 2 == 0)
			m = m / 2;
		else
			return false;
	}
	return true;
}

void Xuat(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
				if (KiemTra(a[i][j])==true)
					cout << "a[" << i << "]" << "[" << j << "]:" << a[i][j] << endl;
}