#include<iostream>
#include<iomanip>

using namespace std;
void Nhap(int[][500], int&, int&);
string KiemTra(int[][500], int, int);

int main()
{
	int a[500][500], m, n;
	Nhap(a, m, n);
	cout << KiemTra(a, m, n);
	return 0;
}

void Nhap(int a[][500], int& m, int& n)
{
	cout << "nhap hang ";
	cin >> m;
	cout << "nhap cot ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "nhap a[" << i << "]" << "[" << j << "]";
			cin >> a[i][j];
		}
}

string KiemTra(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] % 2 != 0)
				return "co ton tai";
	return "khong ton tai";
}
