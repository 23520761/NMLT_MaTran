#include <iostream>
#include <iomanip>
using namespace std;

void NhapMaTran(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
int KtDong(float[][500], int, int, int);
void LietKe(float[][500], int, int);

int main()
{
	int m;
	int n;
	float a[500][500];
	int d;
	NhapMaTran(a, m, n);
	XuatMaTran(a, m, n);
	LietKe(a, m, n);
	return 0;
}

void NhapMaTran(float a[][500], int& m, int& n)
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

void XuatMaTran(float a[][500], int m, int n)
{
	cout << "Ma tran co dang: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

int KtDong(float a[][500], int m, int n, int d)
{
	int flag = 0;
	bool zero = false, positive = false, negative = false;
	for (int j = 0; j < n; j++)
	{
		if (a[d][j] == 0)
			zero = true;
		else if (a[d][j] > 0)
			positive = true;
		else if (a[d][j] < 0)
			negative = true;
	}
	if ((zero && positive && negative) == true)
		flag = 1;
	return flag;

}

void LietKe(float a[][500], int m, int n)
{
	cout << "Cac dong thoa man dieu kien: ";
	for (int i = 0; i < m; i++)
		if (KtDong(a, m, n, i) == 1)
			cout << setw(8) << i;
}