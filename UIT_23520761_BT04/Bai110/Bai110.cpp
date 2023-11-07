#include <iostream>
#include <iomanip>
using namespace std;

void NhapMaTran(int[][500], int&, int&);
void XuatMaTran(int[][500], int, int);
bool KtNguyenTo(int);
int KtDong(int[][500], int, int, int);
void LietKe(int[][500], int, int);

int main()
{
	int m;
	int n;
	int a[500][500];
	int d;
	NhapMaTran(a, m, n);
	XuatMaTran(a, m, n);
	LietKe(a, m, n);
	return 0;
}

void NhapMaTran(int a[][500], int& m, int& n)
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

void XuatMaTran(int a[][500], int m, int n)
{
	cout << "Ma tran co dang: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

bool KtNguyenTo(int k)
{
	int  dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}

int KtDong(int a[][500], int m, int n, int d)
{
	int flag = 0;
	for (int j = 0; j < n; j++)
		if (KtNguyenTo(a[d][j]) == 1)
			flag = 1;
	return flag;
}

void LietKe(int a[][500], int m, int n)
{
	cout << "Cac dong co so nguyen to trong ma tran: ";
	for (int i = 0; i < m; i++)
		if (KtDong(a, m, n, i) == 1)
			cout << setw(8) << i;
}