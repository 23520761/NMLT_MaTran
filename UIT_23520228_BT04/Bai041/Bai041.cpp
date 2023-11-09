#include<iostream>
using namespace std;

void Nhap(int[][500], int&, int&);
void Xuat(int[][500], int, int);
bool KtChinhPhuong(int);
int TongCot(int[][500], int, int, int);

int main()
{
	int a[500][500];
	int m, n;
	Nhap(a, m, n);
	int cc;
	cout << "Dong kiem tra: ";
	cin >> cc;
	cout << TongCot(a, m, n, cc);
	return 0;
}
void Nhap(int a[][500], int& m, int& n)
{
	cout << "Nhap hang: ";
	cin >> m;
	cout << "Nhap cot: ";
	cin >> n;
	cout << "Nhap ma tran: ";
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = rand() % (200 + 1) - 100;
}
void Xuat(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cout << a[i][j];
}
bool KtChinhPhuong(int k)
{
	bool flag = false;
	int i = 0;
	while (i <= k)
	{
		if (i * i == k)
			flag = true;
		i = i + 1;
	}
	return flag;
}
int TongCot(int a[][500], int m, int n, int c)
{
	int s = 0;
	for (int i = 0; i < m; i++)
		if (KtChinhPhuong(a[i][c]))
			s = s + a[i][c];
}