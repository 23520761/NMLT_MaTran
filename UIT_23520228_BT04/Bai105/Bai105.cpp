#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);
int KtraDongTang(float[][500], int, int, int);

int main()
{
	float a[500][500];
	int m, n,d;
	cout << "Nhap ma tran: \n";
	Nhap(a, m, n);
	cout << "Ma tran ban dau: \n";
	Xuat(a, m, n);
	cout << "Dong can kiem tra: ";
	cin >> d;
	if (KtraDongTang(a, m, n, d) == 0)
		cout << " Dong nay khong tang";
	cout << "Dong nay tang dan";
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
int KtraDongTang(float a[][500], int m, int n, int d)
{
	int flag = 1;
	for (int j = 0; j < n; j++)
		if(a[d][j]<=a[d][j-1])
			flag = 0;
	return flag;
}