#include <iostream>
#include <iomanip>

using namespace std;
void NhapMaTran(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void XayDung(float[][100], int, int, int[][100], int&, int&);
int DemLanCan(float[][100], int, int, int, int);

int main()
{
	int m;
	int n;
	float a[100][100];
	int b[100][100];
	NhapMaTran(a, m, n);
	Xuat(a, m, n);
	XayDung(a, m, n, b, m, n);

	return 0;
}

void NhapMaTran(float a[][100], int& m, int& n)
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

void Xuat(float a[][100], int m, int n)
{
	cout << "\nMa tran A co dang: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

void XayDung(float a[][100], int m, int n, int b[][100], int& k, int& l)
{
	k = m; // gan cho dong cua ma tran B
	l = n; // gan cho cot cua ma tran B
	for (int i = 0; i < k; i++)
		for (int j = 0; j < l; j++)
			b[i][j] = DemLanCan(a, m, n, i, j);
	cout << "\nMa tran B co dang: " << endl;
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < l; j++)
			cout << setw(8) << b[i][j];
		cout << endl;
	}
}

int DemLanCan(float a[][100], int m, int n, int d, int c)
{
	int dem = 0;
	for (int di = -1; di <= 1; di++)
		for (int dj = -1; dj <= 1; dj++)
			// xet nhung phan tu lan can trong ma tran A
			if (!(di == 0 && dj == 0) && d + di >= 0 && di + d < m && dj + c >= 0 && dj + c < n && a[di + d][dj + c] > 0)
				dem++;
	return dem;
}