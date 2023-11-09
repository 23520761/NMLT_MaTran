#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);

float LonNhatCot(float[][500], int, int, int);
void ThemDong(float[][500], int&, int);

int main()
{
	float a[500][500];
	int m, n, d;
	cout << "Ma tran: " << endl;
	Nhap(a, m, n);

	cout << "Ma tran ban dau: " << endl;
	Xuat(a, m, n);

	cout << "Ma tran luc sau: " << endl;
	ThemDong(a, m, n);
	Xuat(a, m, n);
	return 0;
}
void Nhap(float a[][500], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = -100 + rand() / ((float)RAND_MAX / 200);
}
void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << fixed << setw(10) << setprecision(2) << a[i][j];
		cout << endl;
	}
}
float LonNhatCot(float a[][500], int m, int n)
{
	float max = a[0][n];
	for (int i = 0; i < m; i++)
		if (a[i][n] > max)
			max = a[i][n];
	return max;
}
void ThemDong(float a[][500], int& m, int n)
{
	for (int j = 0; j < n; j++)
		a[m][j] = LonNhatCot(a, m, j);
	m++;
		
}