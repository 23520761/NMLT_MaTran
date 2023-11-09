#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
int Tich(int[][500], int, int);
bool KtLe(int k);


int main()
{
	int a[500][500];
	int m, n;
	Nhap(a, m, n);
	cout << "Tich= ";
	cout << Tich(a, m, n);
	return 0;
}
void Nhap(int a[][500], int& m, int& n)
{
	cout << "Nhap hang: ";
	cin >> m;
	cout << "Nhap cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
bool KtLe(int k)
{
	bool flag = true;
	while (k != 0)
	{
		int dv = k % 10;
		if (dv % 2 == 0)
			flag = false;
		k = k / 10;
	}
	return flag;
}
int Tich(int a[][500], int m, int n)
{
	int t = 1;
	for (int i = 0; i < m; i++)
	{
		if (a[i][0] % 2 == 0)
			for (int j = 0; j < n; j++)
				if (KtLe(a[i][j]))
					t = t * a[i][j];
	}
	return t;
}