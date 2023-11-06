#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void NhapMatrix(float[][500], int&, int&);
void XuatMatrix(float[][500], int, int);
int ktCucDai(float[][500], int, int, int, int);
int ktCucTieu(float[][500], int, int, int, int);
float TongCucTri(float[][500], int, int);

int main()
{
	float a[500][500];
	int i, j;
	NhapMatrix(a, i, j);
	cout << "\n--------------------------------\n";
	XuatMatrix(a, i, j);
	cout << "--------------------------------\n";
	cout << "\n--------------------------------\n";
	cout << TongCucTri(a, i, j);
	cout << "\n--------------------------------\n";
	return 0;
}

int ktCucDai(float a[][500], int m, int n, int x, int y) {
	float currentElement = a[x][y];
	for (int i = x - 1; i <= x + 1; i++) {
		for (int j = y - 1; j <= y + 1; j++) {
			if (i >= 0 && i < m && j >= 0 && j < n && !(i == x && j == y)) {
				if (a[i][j] >= currentElement) {
					return 0;
				}
			}
		}
	}
	return 1;
}

int ktCucTieu(float a[][500], int m, int n, int x, int y) {
	float currentElement = a[x][y];
	bool isCucTieu = 1;
	for (int i = x - 1; i <= x + 1 && isCucTieu; i++) {
		for (int j = y - 1; j <= y + 1; j++) {
			if (i >= 0 && i < m && j >= 0 && j < n && (i != x || j != y) && a[i][j] <= currentElement) {
				isCucTieu = 0;
				break;
			}
		}
	}
	return isCucTieu;
}

float TongCucDai(float a[][500], int m, int n) {
	float sum = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (ktCucDai(a, m, n, i, j)) {
				sum += a[i][j];
			}
		}
	}
	return sum;
}

float TongCucTieu(float a[][500], int m, int n) {
	float sum = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (ktCucTieu(a, m, n, i, j)) {
				sum += a[i][j];
			}
		}
	}
	return sum;
}

float TongCucTri(float a[][500], int m, int n) {
	cout << " Tong cuc tri la: ";
	return TongCucDai(a, m, n) + TongCucTieu(a, m, n);
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
