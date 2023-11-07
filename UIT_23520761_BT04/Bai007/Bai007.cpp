#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void Nhap(string, int[][500], int&, int&);
void Xuat(string, int[][500], int, int);

int main()
{
	int m;
	int n;
	int a[500][500];
	Nhap("data01", a, m, n);
	Xuat("data01", a, m, n);
	return 0;
}

void Nhap(string data01, int a[][500], int& m, int& n)
{
	ifstream fi(data01);
	fi >> m;
	fi >> n;
	for (int i = 0; i <= m - 1; i++)
		for (int j = 0; j <= n - 1; j++)
			cin >> a[i][j];
}

void Xuat(string data01, int a[][500], int m, int n)
{
	ofstream fo(data01);
	fo << setw(8) << m;
	fo << setw(8) << n;
	fo << endl;
	for (int i = 0; i <= m - 1; i++)
	{
		for (int j = 0; j <= n - 1; j++)
			fo << setw(8) << a[i][j];
		cout << endl;
	}
}
