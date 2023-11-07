#include <iostream>
using namespace std;

void Nhap(int[][500], int&, int&);
bool KtNguyenTo(int);
int TongNguyenTo(int[][500], int, int);

int main()
{
	int m;
	int n;
	int a[500][500];
	Nhap(a, m, n);
	cout << "Tong cac so nguyen to trong mang: " << TongNguyenTo(a, m, n);
	return 0;
}

void Nhap(int a[][500], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	cout << "Nhap cac phan tu trong ma tran: " << endl;
	for (int i = 0; i <= m - 1; i++)
		for (int j = 0; j <= n - 1; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
}

bool KtNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}

int TongNguyenTo(int a[][500], int m, int n)
{
	int s = 0;
	for (int i = 0; i <= m - 1; i++)
		for (int j = 0; j <= n - 1; j++)
			if (KtNguyenTo(a[i][j]))
				s += a[i][j];
	return s;
}