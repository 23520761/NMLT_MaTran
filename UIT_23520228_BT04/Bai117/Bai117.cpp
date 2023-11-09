#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);

void XayDung(float[][500],int,int,float[][500],int&,int&);

int main()
{
	float a[500][500];
	float b[500][500];
	int m, n,k,l;
	cout << "Nhap ma tran: \n";
	Nhap(a, m, n);
	cout << "Ma tran ban dau: \n";
	Xuat(a, m, n);
	XayDung(a, m, n, b, k, l);
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
			cout << fixed << setw(10) << a[i][j];
		cout << endl;
	}
}
void XayDung(float a[][500], int m, int n, float b[][500], int& k, int& l)
{
	k = m;
	l = n;
	for (int i = 0; i < k; i++)
		for (int j = 0; j < l; j++)
			b[i][j] = abs(a[i][j]);
}