#include <iostream>
#include <iomanip>
#define MAX 500

using namespace std;
void TaoMaTran(float [][MAX], int&, int&);
void XuatMaTran(float [][MAX], int, int);
void HoanVi(float&, float&);
void XuatAmGiam(float[][MAX], int, int);

	// Xuat cac gia tri am trong ma tran so thuc giam dan
	// Ma tran ko thay doi sau khi xuat
int main()
{
	int m;
	int n;
	float a[MAX][MAX];
	TaoMaTran(a, m, n);
	cout << "\nMa tran ban dau: " << endl;
	XuatMaTran(a, m, n);
	XuatAmGiam(a, m, n);

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
}void HoanVi(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}

void XuatAmGiam(float a[][MAX], int m, int n)
{
	float b[MAX];
	int k;
	int i, j;
	k = 0;
	// gan cho mang phu: mang 1 chieu la cac phan tu am
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] < 0)
				b[k++] = a[i][j];
	// Sap xep cac phan tu giam dan
	for (i = 0; i <= k - 2; i++)
		for (j = i + 1; j <= k - 1; j++)
			if (b[i] < b[j])
				HoanVi(b[i], b[j]);
	// xuat ra cac gia tri am trong ma tran
	cout << "\nCac gia tri am giam dan trong ma tran: ";
	for (int i = 0; i < k; i++)
		cout << setw(10) << fixed << setprecision(3) << b[i];
}