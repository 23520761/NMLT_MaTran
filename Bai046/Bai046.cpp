#include<iostream>
#include<cmath>

using namespace std;
void Nhap(float[][500], int&, int&);
int Dem(float[][500], int, int);
void Xuat(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	return 0;
}

void Nhap(float a[][500], int& m, int& n)
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

int Dem(float a[][500], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > 0)
				dem++;
		}
	return dem;
}

void Xuat(float a[][500], int m, int n)
{
	int lc = Dem(a, m, n);
	float s = 1;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > 0)
				s = s * a[i][j];
		}
	cout << pow(s, 1/lc);
}	