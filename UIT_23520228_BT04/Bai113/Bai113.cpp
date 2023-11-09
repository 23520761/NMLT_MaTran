#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
void Xuat(int[][500], int, int);

int KtDong(int[][500], int, int, int);
void LietKe(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;
	cout << "Nhap ma tran: \n";
	Nhap(a, m, n);
	cout << "Ma tran ban dau: \n";
	Xuat(a, m, n);
	cout << "Cac dong co gia tri chan la: ";
	LietKe(a, m, n);
	return 0;
}
void Nhap(int a[][500], int& m, int& n)
{
	cout << "Cot: ";
	cin >> m;
	cout << "Hang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = rand() % (200 + 1) - 100;
}
void Xuat(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << fixed << setw(10)<< a[i][j];
	}
}
int KtDong(int a[][500], int m, int n, int d)
{
	int dem = 0;
	for (int j = 0; j < n; j++)
		if (a[d][j] % 2 == 0)
			dem++;
	return dem;
}
void LietKe(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		if (KtDong(a,m,n,i)==n)
			cout << setw(8) << i;
}