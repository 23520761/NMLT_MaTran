#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);

void DichTraiDong(float[][500], int, int, int);
void DichTrai(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n, d;
	cout << "Ma tran: \n";
	Nhap(a, m, n);

	cout << "Ma tran ban dau:\n";
	Xuat(a, m, n);

	DichTrai(a, m, n);
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
void DichTraiDong(float a[][500], int m, int n, int d)
{
	float temp = a[d][0];
	for (int j = 0; j <= n - 2; j++)
		a[d][j] = a[d][j + 1];
	a[d][n - 1] = temp;
}
void DichTrai(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		DichTraiDong(a, m, n, i);
}