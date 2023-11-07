#include <iostream>
#include <iomanip>
#define MAX 500

using namespace std;

void TaoMaTran(float [][MAX], int&, int&, int&);
void XuatMaTran(float [][MAX], int, int);
void HoanVi(float&, float&);
void SapXepDongGiam(float [][MAX], int, int, int);


int main()
{
	int m;
	int n;
	float a[MAX][MAX];
	int d;
	TaoMaTran(a, m, n, d);
	XuatMaTran(a, m, n);
	SapXepDongGiam(a, m, n, d);

	return 0;
}

void TaoMaTran(float a[][MAX], int& m, int& n, int& d)
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
	cout << "\nNhap dong can sap xep: ";
	cin >> d;
}

void XuatMaTran(float a[][MAX], int m, int n)
{
	cout << "\nMa tran ban dau: " << endl;
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

void SapXepDongGiam(float a[][MAX], int m, int n, int d)
{
	for (int i = 0; i <= m - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[d][i] < a[d][j])
				HoanVi(a[d][i], a[d][j]);
	cout << "\nMa tran sau khi sap xep: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}