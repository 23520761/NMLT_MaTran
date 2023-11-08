#include<iostream>
#include<iomanip>

using namespace std;
void Nhap(float[][500], int&, int&);
float Dong(float[][500], int, int, int, int);
float Cot(float[][500], int, int, int, int, int);
float Cheo1(float[][500], int, int, int, int);
float Cheo2(float[][500], int, int, int, int);
bool Kiemtra(float[][500], int, int, int, int);
int Dem(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	Nhap(a, m, n);
	cout << Dem(a, m, n);
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

float Dong(float a[][500], int m, int n, int d)
{
	float lc = a[d][0];
	for (int j = 0; j < n; j++)
		if (lc < a[d][j])
			lc = a[d][j];
	return lc;
}

float Cot(float a[][500], int m, int n, int c)
{
	float lc = a[0][c];
	for (int i = 0; i < m; i++)
		if (lc < a[i][c])
			lc = a[i][c];
	return lc;
}

float Cheo1(float a[][500], int m, int n, int d, int c)
{
	float lc = a[d][c];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (d - c == i - j)
				if (lc < a[i][j])
					lc = a[i][j];
	return lc;
}

float Cheo2(float a[][500], int m, int n, int d, int c)
{
	float lc = a[d][c];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (d + c == i + j)
				if (lc < a[i][j])
					lc = a[i][j];
	return lc;
}

bool Kiemtra(float a[][500], int m, int n, int d, int c)
{
	float lnd = Dong(a, m, n,  d);
	float lnc = Cot( a,  m,  n,  c);
	float lnc1 = Cheo1(a, m, n, d, c);
	float lnc2 = Cheo2(a, m, n, d, c);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] == lnd && a[i][j] == lnc && a[i][j] == lnc1 && a[i][j] == lnc2)
				return true;
	return false;
}

int Dem(float a[][500], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (Kiemtra(a, m, n, i, j) == true)
				dem++;
	return dem;
}