#include <iostream>
#include <iomanip>
using namespace std;

void NhapMaTran(int[][500], int&, int&);
void XuatMaTran(int[][500], int, int);
bool KtChinhPhuong(int);
int DemChinhPhuongBien(int[][500], int, int);

int main()
{
	int m;
	int n;
	int a[500][500];
	NhapMaTran(a, m, n);
	XuatMaTran(a, m, n);
	cout << "So luong so chinh phuong tren bien ma tran: " << DemChinhPhuongBien(a, m, n);
	return 0;
}

void NhapMaTran(int a[][500], int& m, int& n)
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

bool KtChinhPhuong(int k)
{
	bool flag = false;
	for (int i = 0; i <= k; i++)
		if (i * i == k)
			flag = true;
	return flag;
}

int DemChinhPhuongBien(int a[][500], int m, int n)
{
	int dem = 0;
	for (int i = 0; i <= m - 1; i++)
		for (int j = 0; j <= n - 1; j++)
			if (i == 0 || i == (m - 1) || j == 0 || j == (n - 1))
				if (KtChinhPhuong(a[i][j]))
					dem++;
	return dem;
}