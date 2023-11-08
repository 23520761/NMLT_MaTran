#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;
void Nhap(int[][500], int&, int&);
void Xuat(int[][500], int, int);

int main()
{
	int a[500][500];
	int n;
	int k;
	Nhap(a, n, k);
	Xuat(a, n, k);
	return 0;
}

void Nhap(int a[][500], int& n, int& k)
{
	cin >> n;
	cin >> k;
	for (int i = 1; i < n; i++)
		for (int j = 1; j < k; j++)
		{
			cout << "nhap a[" << i << "]" << "[" << j << "]";
			cin >> a[i][j];
		}
}

void Xuat(int a[][500], int n, int k)
{
	for (int i = 1; i < n; i++)
		for (int j = 1; j < k; j++)
		{
			cout << "a[" << i << "]" << "[" << j << "]";
			cout << a[i][j]<<endl;
		}
}