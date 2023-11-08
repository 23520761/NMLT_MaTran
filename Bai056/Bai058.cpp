#include<iostream>
#include<cmath>

using namespace std;
void Nhap(int[][500], int&, int&);
int Dem(int[][500], int, int);
bool KiemTra(int m);

int main()
{
	int a[500][500];
	int m, n;
	Nhap(a, m, n);
	cout<<Dem(a, m, n);
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

int Dem(int a[][500], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (KiemTra(a[i][j])==true)
				dem++;
		}
	return dem;
}

bool KiemTra(int m)
{
	while (m !=1&&m!=0)
	{
		if (m % 2 != 0)
			return false;
		m = m / 2;
	}
	return true;
}