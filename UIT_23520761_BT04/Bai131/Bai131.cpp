#include <iostream>
#include <iomanip>
#define MAX 500

using namespace std;
void TaoMaTran(int[][MAX], int&, int&);
void XuatMaTran(int[][MAX], int, int);
void HoanVi(int&, int&);
void ChanGiam1(int[][MAX], int, int); // Cach su dung mang phu
void ChanGiam2(int[][MAX], int, int); // Cach khong su dung mang phu

	// Sap xep cac phan tu chan trong ma tran so nguyen giam dan theo hang va cot
	// bang 2 phuong phap: dung mang phu va khong dung mang phu
int main()
{
	int m;
	int n;
	int a[MAX][MAX];
	TaoMaTran(a, m, n);
	cout << "\nMa tran ban dau: " << endl;
	XuatMaTran(a, m, n);
	ChanGiam1(a, m, n);
	cout << "\nMa tran sau khi sap xep cac phan tu chan giam dan theo cot va hang: " << endl;
	XuatMaTran(a, m, n);

	return 0;
}

void TaoMaTran(int a[][MAX], int& m, int& n)
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

void XuatMaTran(int a[][MAX], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

void HoanVi(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
	// Cach Mang phu
void ChanGiam1(int a[][MAX], int m, int n)
{
	int b[MAX];
	int k;
	int i, j;
	k = 0;
	// do ma tran ra mang phu b
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] % 2 == 0)
				b[k++] = a[i][j];
	// sap xep cac phan tu giam dan trong mang phu
	for (i = 0; i <= k - 2; i++)
		for (j = i + 1; j <= k - 1; j++)
			if (b[i] < b[j])
				HoanVi(b[i], b[j]);
	k = 0;
	// do mang phu 1 chieu b ra ma tran
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] % 2 == 0)
				a[i][j] = b[k++];
}

	// Cach ko su dung mang phu
void ChanGiam2(int a[][MAX], int m, int n)
{
	for (int k = 0; k <= m * n - 2; k++)
		for (int l = 0; l <= m * n - 1; l++)
			if (a[k / n][k % n] < a[l / n][l % 2])
				HoanVi(a[k / n][k % n], a[l / n][l % n]);
}