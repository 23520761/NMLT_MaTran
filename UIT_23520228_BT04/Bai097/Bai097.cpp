#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);

float LonNhatDong(float[][500], int, int, int);
float NhoNhatDong(float[][500], int, int, int);
float LonNhatCot(float[][500], int, int, int);
float NhoNhatCot(float[][500], int, int, int);
int ktYenNgua(float[][500], int, int, int, int);
int DemYenNgua(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	cout << "Ma tran: \n";
	Nhap(a, m, n);

	cout << "Ma tran ban dau: \n";
	Xuat(a, m, n);

	cout << "Dem duoc: " << DemYenNgua(a, m, n);
	return 0;
}
void Nhap(int a[][500], int& m, int& n)
{
	cout << "Cot: ";
	cin >> m;
	cout << "Hang: ";
	cin >> n;
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			a[i][j] = rand() % (200 + 1) - 100;
}
void Xuat(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << fixed << setw(10) << setprecision(2) << a[i][j];
	}
}
float LonNhatDong(float a[][500], int m, int n, int d)
{
	float max = a[d][0];
	for (int j = 0; j < n; j++)
		if (a[d][j] > max)
			max = a[d][j];
	return max;
}
float NhoNhatDong(float a[][500], int m, int n, int d)
{
	float min = a[d][0];
	for (int j = 0; j < n; j++)
		if (a[d][j] < min)
			min = a[d][j];
	return min;
}
float LonNhatCot(float a[][500], int m, int n, int c)
{
	float max = a[0][c];
	for (int i = 0; i < m; i++)
		if (a[i][c] > max)
			max = a[i][c];
	return max;
}
float NhoNhatCot(float a[][500], int m, int n, int c)
{
	float min = a[0][c];
	for (int i = 0; i < m; i++)
		if (a[i][c] < min)
			min = a[i][c];
	return min;
}
int ktYenNgua(float a[][500], int m, int n, int c, int d)
{
	float lnd = LonNhatDong(a, m, n, d);
	float nnc = NhoNhatCot(a, m, n, c);
	float lnc = LonNhatCot(a, m, n, c);
	float nnd = NhoNhatDong(a, m, n, d);
	if ((a[d][c] == lnd && a[d][c] == nnc) || (a[d][c] == lnc && a[d][c] == nnd))
		return 1;
	return 0;
}
int DemYenNgua(float a[][500], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktYenNgua(a, m, n, i, j) == 1)
				dem++;
	return dem;
}