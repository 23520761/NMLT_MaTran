#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);

float LonNhatDong(float[][500], int, int,int);

int main()
{
	float a[500][500];
	int m, n, dd;
	cout << "Nhap ma tran: ";
	Nhap(a, m, n);
	cout << "Ma tran: ";
	Xuat(a, m, n);
	cout << "Nhap dong can kiem tra: ";
	cin >> dd;
	cout << "So lon nhat la: " << LonNhatDong(a, m, n,dd);
	return 0;
}
void Nhap(float a[][500], int& m, int& n)
{
	cout << "Nhap hang: ";
	cin >> m;
	cout << "Nhap cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cout << fixed << setw(10) << setprecision(2) << a[i][j];
}
float LonNhatDong(float a[][500], int m, int n, int d)
{
	float max = a[0][0];
	for (int j = 1; j < n; j++)
		if (a[d][j] > max)
			max = a[d][j];
	return max;
}
