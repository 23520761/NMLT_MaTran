#include <iostream>
#include <iomanip>
using namespace std;

void NhapMaTran(int[][500], int&, int&);
void XuatMaTran(int[][500], int, int);
bool KtHoanThien(int);
int TonTaiHoanThien(int[][500], int, int);

int main()
{
	int m;
	int n;
	int a[500][500];
	NhapMaTran(a, m, n);
	XuatMaTran(a, m, n);
	if (TonTaiHoanThien(a, m, n) == 1)
		cout << "YES";
	else
		cout << "NO";
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
	cout << "<Ma tran co dang: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

bool KtHoanThien(int k)
{
	int s = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0)
			s += i;
	return (s == k);
}

int TonTaiHoanThien(int a[][500], int m, int n)
{
	bool flag = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (KtHoanThien(a[i][j]) == 1)
				flag = 1;
	return flag;
}