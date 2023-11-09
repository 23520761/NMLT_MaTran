#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int [][500], int&, int&);
int Tong(int[][500], int, int,int);

int main()
{
	int a[500][500];
	int m, n;
	Nhap(a, m, n);
	cout << "Tong = ";
	int cc;
	cout << "Dong can kiem tra: ";
	cin >> cc;
	cout << Tong(a, m, n, cc);
	return 0;
}
void Nhap(int a[][500], int& m, int& n)
{
	cout << "Nhap hang: ";
	cin >> m;
	cout << "Nhap cot: ";
	cin >> n;
	cout << "Nhap ma tran: ";
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
int Tong(int a[][500], int m, int n,int c)
{
	int s = 0;
	for (int j = 0; j < m; j++)
		if (a[c][j] % 2 == 0)
			s = s + a[c][j];
	return s;
}