#include <iostream>
#include <iomanip>
using namespace std;

void NhapMaTran(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
float TongCot(float[][500], int, int, int);
float TongNhoNhat(float[][500], int, int);
void LietKe(float[][500], int, int);

int main()
{
	int m;
	int n;
	float a[500][500];
	int c;
	LietKe(a, m, n);
	return 0;
}

void NhapMaTran(float a[][500], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	cout << "Nhap cac phan tu trong ma tran: " << endl;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
}

void XuatMaTran(float a[][500], int m, int n)
{
	cout << "Ma tran co dang: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

float TongCot(float a[][500], int m, int n, int c)
{
	float s = 0;
	for (int i = 0; i < m; i++)
		s = s + a[i][c];
	return s;
}

float TongNhoNhat(float a[][500], int m, int n)
{
	float lc = TongCot(a, m, n,0);
	for (int j = 0; j < n; j++)
		if (TongCot(a, m, n, j) < lc)
			lc = TongCot(a, m, n, j);
	return lc;
}

void LietKe(float a[][500], int m, int n)
{
	float lc = TongNhoNhat(a, m, n);
	cout << "Cac cot co tong nho nhat: ";
	for (int j = 0; j < n; j++)
		if (TongCot(a, m, n, j) == lc)
			cout << setw(8) << j;
}
