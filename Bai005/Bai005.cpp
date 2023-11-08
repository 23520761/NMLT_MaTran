#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;
void Nhap(long[][500], int&, int&);
void Xuat(long[][500], int, int);

int main()
{
	long a[500][500];
	int n;
	int k;
	Nhap(a, n, k);
	Xuat(a, n, k);
	return 0;
}

void Nhap(long a[][500], int& n, int& k)
{
	cin >> n;
	cin >> k;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= k; j++)
		{
			cout << "nhap a[" << i << "]" << "[" << j << "]";
			cin >> a[i][j];
		}
}

void Xuat(long a[][500], int n, int k)
{
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= k; j++)
		{
			cout << "a[" << i << "]" << "[" << j << "]";
			cout << a[i][j] << endl;
		}
}