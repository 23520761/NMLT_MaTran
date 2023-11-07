#include <iostream>
#include <iomanip>
using namespace std;

void NhapMaTran(float[][500], int&, int&, int&, int&);
int KtCucTieu(float[][500], int, int, int, int);
void LietKe(float[][500], int, int);

int main()
{
	int m;
	int n;
	float a[500][500];
	int d;
	int c;
	NhapMaTran(a, m, n, d, c);

	return 0;
}

void NhapMaTran(float a[][500], int& m, int& n, int& d, int& c)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap cot: ";
	cin >> n;
	cout << "Nhap cac phan tu trong ma tran: " << endl;
	for (int i = 0; i <= m - 1; i++)
		for (int j = 0; j <= n - 1; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
}

int KtCucTieu(float a[][500], int m, int n, int d, int c) 
{	
	// xét vị trí lân cận hợp lệ (-1 <= d || c <= 1)
	for (int i = -1; i <= 1; i++)
	{
		for (int j = -1; j <= 1; j++)
			if (!(i == 0 && j == 0) && (i + d >= 0 && i + d < m) && (j + c >= 0 && j + c < n))
				if (a[d + i][c + j] < a[d][c])
					return 0;
	}
	return 1;
}

void LietKe(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (KtCucTieu(a, m, n, i, j) == 1) 
				cout << setw(8) << a[i][j];
}