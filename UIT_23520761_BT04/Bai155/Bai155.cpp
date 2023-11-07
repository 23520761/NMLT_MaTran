#include <iostream>
#include <iomanip>
#define MAX 500

using namespace std;
void TaoMaTran(float[][MAX], int&, int&);
void XuatMaTran(float[][MAX], int, int);
void DichXuongCot(float[][MAX], int, int, int);
void DichXuong(float[][MAX], int, int);

	// Dich xoay vong cac hang trong ma tran
int main()
{
	int m;
	int n;
	float a[MAX][MAX];
	TaoMaTran(a, m, n);
	cout << "\nMa tran ban dau: " << endl;
	XuatMaTran(a, m, n);
	cout << "\nDich xuong xoay vong cac hang trong ma tran: " << endl;
	DichXuong(a, m, n);
	XuatMaTran(a, m, n);

	return 0;
}

void TaoMaTran(float a[][MAX], int& m, int& n)
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

void XuatMaTran(float a[][MAX], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

void DichXuongCot(float a[][MAX], int m, int n, int c)
{
	float temp = a[m - 1][c];
	for (int i = m - 1; i >= 1; i--)
		a[i][c] = a[i - 1][c];
	a[0][c] = temp;
}

void DichXuong(float a[][MAX], int m, int n)
{
	for (int j = 0; j < n; j++)
		DichXuongCot(a, m, n, j);
}