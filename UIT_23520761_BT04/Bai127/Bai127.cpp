#include <iostream>
#include <iomanip>
#define MAX 500

using namespace std;
void TaoMaTran(float[][MAX], int&, int&);
void XuatMaTran(float[][MAX], int, int);
void HoanVi(float&, float&);
void SapXepCotTang(float[][MAX], int, int, int);
void SapXepCotGiam(float[][MAX], int, int, int);
void SapXep(float[][MAX], int, int);

int main()
{
	int m;
	int n;
	float a[MAX][MAX];
	TaoMaTran(a, m, n);
	cout << "\nMa tran ban dau: " << endl;
	XuatMaTran(a, m, n);
	SapXep(a, m, n);
	cout << "\nMa tran sau khi sap xep: " << endl;
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

void HoanVi(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}

void SapXepCotTang(float a[][MAX], int m, int n, int c)
{
	for (int i = 0; i <= m - 2; i++)
		for (int j = i + 1; j <= m - 1; j++)
			if (a[i][c] > a[j][c])
				HoanVi(a[i][c], a[j][c]);
}

void SapXepCotGiam(float a[][MAX], int m, int n, int c)
{
	for (int i = 0; i <= m - 2; i++)
		for (int j = i + 1; j <= m - 1; j++)
			if (a[i][c] < a[j][c])
				HoanVi(a[i][c], a[j][c]);
}

void SapXep(float a[][MAX], int m, int n)
{
	// sap xep cot => xet mang 1 chieu j
	// for (int i = 0; i < m; i++)
		for (int j = 0; j <= n - 1; j++)
		{
			if (j % 2 == 0)
				SapXepCotGiam(a, m, n, j);
			else
				SapXepCotTang(a, m, n, j);
		}
}	