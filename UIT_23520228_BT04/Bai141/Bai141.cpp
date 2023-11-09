#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);

void XoaDong(float[][500],int& ,int, int);

int main()
{
	float a[500][500];
	int m, n;
	cout << "Ma tran: \n";
	Nhap(a, m, n);

	cout << "Ma tran ban dau:\n";
	Xuat(a, m, n);

	int d;
	cout << "Dong can xoa: ";
	cin >> d;

	XoaDong(a, m, n, d);
	cout << "Sau khi xoa dong:" << d << ":\n";
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
void XoaDong(float a[][500], int& m, int n, int d)
{
	for (int j = 0; j < n; j++)
		for (int i = d; i <= m - 2; i++)
			a[i][j] = a[i + 1][j];
	m--;
}