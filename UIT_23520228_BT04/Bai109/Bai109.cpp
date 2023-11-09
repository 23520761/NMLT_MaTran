#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);

int KtDong(float[][500], int, int, int);
void LietKe(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	cout << "Nhap ma tran: \n";
	Nhap(a, m, n);
	cout << "Ma tran ban dau: \n";
	Xuat(a, m, n);
	cout << "Cac dong co gia tri am la: ";
	LietKe(a, m, n);
	return 0;
}
void Nhap(float a[][500], int& m, int& n)
{
	cout << "Cot: ";
	cin >> m;
	cout << "Hang: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = rand() % (200 + 1) - 100;
}
void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << fixed << setw(10) << setprecision(2) << a[i][j];
	}
}
int KtDong(float a[][500], int m, int n, int d)
{
	int flag = 0;
	for (int j = 0; j < n; j++)
		if (a[d][j] < 0)
			flag = 1;
	return flag;
}
void LietKe(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		if (KtDong(a, m, n, i) == 1)
			cout << setw(8) << i;
}