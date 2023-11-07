#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
void XuatMaTran(int[][500], int, int);
int DemChan(int[][500], int, int);

int main()
{
	int m;
	int n;
	int a[500][500];
	Nhap(a, m, n);
	XuatMaTran(a, m, n);
	cout << "So luong gia tri chan trong ma tran: " << DemChan(a, m, n);
	return 0;
}

void Nhap(int a[][500], int& m, int& n)
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

void XuatMaTran(int a[][500], int m, int n)
{
	cout << "Ma tran co dang: " << endl;
	for (int i = 0; i <= m - 1; i++)
	{
		for (int j = 0; j <= n - 1; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

int DemChan(int a[][500], int m, int n)
{
	int dem = 0;
	for (int i = 0; i <= m - 1; i++)
		for (int j = 0; j <= n - 1; j++)
			if (a[i][j] % 2 == 0)
				dem += a[i][j];
	return dem;
}