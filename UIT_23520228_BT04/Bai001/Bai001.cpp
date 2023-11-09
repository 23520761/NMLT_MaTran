#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;

void TaoMatran(int[][500], int&, int&);
void Xuat(int[][500], int, int);
void Xuat(string, int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;

	TaoMatran(a, m, n);
	cout << "Ma tran ban dau: ";
	Xuat(a, m, n);
	Xuat("", a,  m, n);
	cout << "\nDa xuat ma tran ra tap tin data01.inp";
	return 0;
}
void TaoMaTran(int a[500][500], int& m, int& n)
{
	cout << "Nhap hang: ";
	cin >> m;
	cout << "Nhap cot:  ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = rand() % (200 + 1) - 100;
}
void Xuat(int a[500][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cout << fixed << setw(10)  << a[i][j];
	cout << endl;
}
void Xuat(string filename, int a[500][500], int m, int n)
{
	ofstream fo(filename);
	fo << m << setw(10) << n << endl;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			fo << setw(10) << a[i][j];
	fo << endl;
}