#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);

void DaoCot(float[][500], int, int, int);
void ChieuGuongNgang(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	cout << "Ma tran: " << endl;
	Nhap(a, m, n);

	cout << "Ma tran ban dau: " << endl;
	Xuat(a, m, n);

	ChieuGuongNgang(a, m, n);
	cout << "Ma tran luc sau: " << endl;
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
void DaoCot(float a[][500], int m, int n, int c)
{
	int dd = 0;
	int cc = m - 1;
	while (dd < cc)
	{
		float temp = a[dd][c];
		a[dd][c] = a[cc][c];
		a[cc][c] = temp;
		dd++;
		cc--;
	}
}
void ChieuGuongNgang(float a[][500], int m, int n)
{
	for (int j = 0; j < n; j++)
		DaoCot(a, m, n, j);
}