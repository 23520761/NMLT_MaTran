#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
float TongDuong(float[][500], int, int);
int DemDuong(float[][500], int, int);
float TbcDuong(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	Nhap(a, m, n);
	cout << "Tong= ";
	cout << TbcDuong(a, m, n);
	return 0;
}
void Nhap(float a[][500], int& m, int& n)
{
	cout << "Nhap hang: ";
	cin >> m;
	cout << "Nhap cot: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = rand() / (RAND_MAX / 200.0) - 100.0;
}
void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(10) << setprecision(3) << a[i][j];
		cout << endl;
	}
}
float TongDuong(float a[][500], int m, int n)
{
	float s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] > 0)
				s += a[i][j];
	return s;
}
int DemDuong(float a[][500], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] > 0)
				dem++;
	return dem;
}
float TbcDuong(float a[][500], int m, int n)
{
	if (TongDuong(a, m, n) == 0)
		return 0;
	return  TongDuong(a, m, n) / DemDuong(a, m, n);
}

