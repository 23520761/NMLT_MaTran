#include <iostream>
#include <iomanip>
using namespace std;

void NhapMaTran(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
int KtCucDai(float[][500], int, int, int, int); // Cach 1
void PhanTuCucDai(float[][500], int, int);
float TongCucDai(float[][500], int, int);
int KtCucTieu2(float a[][500], int, int, int, int); // Cach 2

int main()
{
	int m;
	int n;
	float a[500][500];
	NhapMaTran(a, m, n);
	XuatMaTran(a, m, n);
	PhanTuCucDai(a, m, n);
	cout << "Tong cac phan tu cuc dai: " << TongCucDai(a, m, n);
	return 0;
}

void NhapMaTran(float a[][500], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	cout << "Nhap cac phan tu trong ma tran" << endl;
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
// Ham kiem tra cuc tieu: Cach 1:
int KtCucDai(float a[][500], int m, int n, int d, int c)
{
	for (int i = -1; i <= 1; i++)
	{
		for (int j = -1; j <= 1; j++)
			if (!(i == 0 && j == 0) && (i + d >= 0 && i + d < m) && (j + c >= 0 && j + c < n))
				if (a[d + i][c + j] > a[d][c]) // neu thang xung quanh be hon => sai
					return 0; // => gia tri se tra ve 0
	}
	return 1;
}
// Ham kiem tra cuc tieu: Cach 2:
int KtCucDai2(float a[][500], int m, int n, int d, int c)
{
	// vi tri theo chieu kim dong ho cua cot va hang tai nhung phan tu xung quanh
	int di[8] = { -1, -1, -1, 0, +1, +1, +1, 0 };
	int dj[8] = { -1, 0, +1, +1, +1, 0, -1, -1 };
	int flag = 1;
	for (int k = 0; k < 8; k++)
		if (d + di[k] >= 0 && d + di[k] < m && c + dj[k] >= 0 && c + dj[k] < n && a[d + di[k]][c + dj[k]] < a[d][c])
			flag = 0;
	return flag;
}

void PhanTuCucDai(float a[][500], int m, int n)
{
	cout << "Cac phan tu cuc tieu: ";
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (KtCucDai(a, m, n, i, j) == 1)
				cout << setw(8) << a[i][j];
	cout << endl;
}

float TongCucDai(float a[][500], int m, int n)
{
	float Tong = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (KtCucDai(a, m, n, i, j) == 1)
				Tong += a[i][j];
	return Tong;
}