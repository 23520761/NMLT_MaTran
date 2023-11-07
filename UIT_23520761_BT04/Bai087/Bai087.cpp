#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
int TanSuat(float[][500], int, int, float);
float TimGiaTri(float[][500], int, int);

int main()
{
	int m;
	int n;
	float a[500][500];
	TaoMaTran(a, m, n);
	XuatMaTran(a, m, n);
	cout << "\nGia tri xuat hien nhieu nhat: " << TimGiaTri(a, m, n);	
	return 0;
}

void TaoMaTran(float a[][500], int& m, int& n)
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
	cout << "\nMa tran ban dau co dang: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

int TanSuat(float a[][500], int m, int n, float x)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (x == a[i][j])
				dem++;
	return dem;				
}

float TimGiaTri(float a[][500], int m, int n)
{
	float GiaTriNhieuNhat = a[0][0];
	int lc = TanSuat(a, m, n, a[0][0]);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (TanSuat(a, m, n, a[i][j]) > lc)
			{
				lc = TanSuat(a, m, n, a[i][j]);
				GiaTriNhieuNhat = a[i][j];
			}
	return GiaTriNhieuNhat;
}