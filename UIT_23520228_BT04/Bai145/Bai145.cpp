#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
void Xuat(int[][500], int, int);

int ktDong(int[][500], int, int, int);
void XoaDong(int[][500], int&, int, int);
void XoaDong(int[][500], int&, int);

int main()
{
	int a[500][500];
	int m, n,d;
	cout << "Ma tran: \n";
	Nhap(a, m, n);

	cout << "Ma tran ban dau:\n";
	Xuat(a, m, n);

	cout << "Ma tran sau khi xoa dong co toan chan: \n";
	XoaDong(a, m, n);
	Xuat(a, m, n);
	return 0;
}
void Nhap(int a[][500], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = -100 + rand() / (RAND_MAX / 200);
}
void Xuat(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << fixed << setw(10) << a[i][j];
		cout << endl;
	}
}
int ktDong(int a[][500], int m, int n, int d)
{
	int dem = 0;
	for (int j = 0; j < n; j++)
		if (a[d][j] % 2 == 0)
			dem++;
	int flag = 0;
	for (int i=0;i<m;i++)
		if (dem == n)
			flag = 1;
	return flag;
}
void XoaDong(int a[][500], int& m, int n, int d)
{
	for (int j = 0; j < n; j++)
		for (int i = d; i <= n - 2; i++)
			a[i][j] = a[i + 1][j];
	m--;
}
void XoaDong(int a[][500], int& m, int n)
{
	for (int j = 0; j < n; j++)
		for (int i = 0; i <= n - 2; i++)
			if (ktDong(a, m, n, i) == 1)
				XoaDong(a, m, n, i);
}