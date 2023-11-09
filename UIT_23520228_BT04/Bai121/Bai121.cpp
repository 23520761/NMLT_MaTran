#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);
void HoanVi(float&, float&);
void HoanViCot(float[][500], int, int, int, int);
int main()
{
	float a[500][500];
	int m, n;
	cout << "Ma tran: \n";
	Nhap(a,m,n);

	cout << "Ma tran ban dau:\n";
	Xuat(a,m,n);

	int c1;
	cout << "\nNhap cot 1: ";
	cin >> c1;
	
	int c2;
	cout << "\nNhap cot 2 ";
	cin >> c2;


	HoanViCot(a, m, n, c1, c2);
	cout << "\nMa tran luc sau: " << endl;
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
			cout << fixed << setw(10)<<setprecision(2) << a[i][j];
		cout << endl;
	}
}
void HoanVi(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}
void HoanViCot(float a[][500], int m, int n, int c1, int c2)
{
	for (int i = 0; i < m; i++)
		HoanVi(a[i][c1], a[i][c2]);
}
