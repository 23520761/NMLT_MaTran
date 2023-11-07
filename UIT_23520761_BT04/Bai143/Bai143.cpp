#include <iostream>
#include <iomanip>
#define MAX 500

using namespace std;
void TaoMaTran(int[][MAX], int&, int&);
void XuatMaTran(int[][MAX], int, int);
bool KtNguyenTo(int);
bool KtChinhPhuong(int);
int KtDong(int[][MAX], int, int, int);
void XoaDong(int[][MAX], int&, int, int);
void XoaDong(int[][MAX], int&, int);

	// Xoa cac dong co it nhat 1 so nto va 1 so CPhuong trong ma tran
int main()
{
	int m;
	int n;
	int a[MAX][MAX];
	TaoMaTran(a, m, n);
	cout << "\nMa tran ban dau: " << endl;
	XuatMaTran(a, m, n);
	cout << "\nMa tran sau khi xoa dong co it nhat mot so nguyen to va mot so chinh phuong: " << endl;
	XoaDong(a, m, n);
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

bool KtNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	return (dem == 2);
}

bool KtChinhPhuong(int k)
{
	int flag = false;
	for (int i = 1; i <= k; i++)
		if (i * i == k)
			flag = true;
	return flag;
}

int KtDong(int a[][MAX], int m, int n, int d)
{
	int flag1 = 0;
	int flag2 = 0;
	for (int j = 0; j < n; j++)
	{
		if (KtNguyenTo(a[d][j]))
			flag1 = 1;
		if (KtChinhPhuong(a[d][j]))
			flag2 = 1;
	}
	return flag1 * flag2;
}

void XoaDong(int a[][MAX], int& m, int n, int d)
{
	for (int j = 0; j < n; j++)
	{
		for (int i = d; i <= m - 2; i++)
			a[i][j] = a[i + 1][j];
	}
	m--;
}

void XoaDong(int a[][MAX], int& m, int n)
{
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < m; i++)
			if (KtDong(a, m, n, i) == 1)
				a[i][j] = a[i + 1][j];
	}
	m--;
}