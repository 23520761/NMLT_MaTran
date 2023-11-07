#include <iostream>
#include <iomanip>
using namespace std;

void NhapMaTran(float [][500], int&, int&);
void XuatMaTran(float [][500], int, int);
float DuongDau(float[][500], int, int);

int main()
{
	int m;
	int n;
	float a[500][500];
	NhapMaTran(a, m, n);
	XuatMaTran(a, m, n);
	cout << "Gia tri duong dau tien trong ma tran: " << fixed << setprecision(2) << DuongDau(a, m, n);

	return 0;
}

void NhapMaTran(float a[][500], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	cout << "Nhap cac phan tu trong ma tran: " << endl;
	for (int i = 0; i <= m - 1; i++)
		for (int j = 0; j <= n - 1; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
}

void XuatMaTran(float a[][500], int m, int n)
{
	cout << "Ma tran co dang: " << endl;
	for (int i = 0; i <= m - 1; i++)
	{
		for (int j = 0; j <= n - 1; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

float DuongDau(float a[][500], int m, int n)
{
	for (int i = 0; i <= m - 1; i++)
		for (int j = 0; j <= n - 1; j++)
			if (a[i][j] > 0)
				return a[i][j];
	return -1;
}