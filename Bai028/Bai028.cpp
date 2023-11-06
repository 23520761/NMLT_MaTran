#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void NhapMatrix(float[][500], int&, int&);
void XuatMatrix(float[][500], int, int);
bool SoChan(int);
bool SoToanChan(int);
void TinhTong(float[][500], int, int);

int main()
{
	float a[500][500];
	int i, j;
	NhapMatrix(a, i, j);
	cout << "\n--------------------------------\n";
	XuatMatrix(a, i, j);
	cout << "--------------------------------\n";
	cout << "\n--------------------------------\n";
	TinhTong(a, i, j);
	cout << "\n--------------------------------\n";
	return 0;
}

void TinhTong(float a[][500], int m, int n)
{
	float S = 0;
	int i, j;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (SoToanChan(a[i][j]))
				S = S + a[i][j];
	cout << "Tong cac so toan chan la: " << S;
}

void NhapMatrix(float a[][500], int& ii, int& jj)
{
	cout << "--------------------------------\n";
	cout << "Nhap so dong: ";
	cin >> ii;
	cout << "--------------------------------\n";
	cout << "Nhap so cot: ";
	cin >> jj;
	cout << "--------------------------------\n\n";
	cout << "--------------------------------\n";
	for (int i = 0; i < ii; i++)
	{
		cout << "Dong " << i + 1 << " : " << endl;
		for (int j = 0; j < jj; j++)
		{
			cin >> a[i][j];
		}
	}
	cout << "--------------------------------\n";
}

void XuatMatrix(float a[][500], int ii, int jj)
{
	cout << "Ma tran la: " << endl;
	for (int i = 0; i < ii; i++)
	{
		for (int j = 0; j < jj; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

bool SoChan(int num)
{
	return num % 2 == 0;

}

bool SoToanChan(int num)
{
	while (num > 0) {
		int digit = num % 10;
		if (!SoChan(digit)) {
			return false;
		}
		num /= 10;
	}
	return true;
}
