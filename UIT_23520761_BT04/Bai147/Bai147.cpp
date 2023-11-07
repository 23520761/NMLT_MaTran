#include <iostream>
#include <iomanip>
#define MAX 500

using namespace std;
void TaoMaTran(float[][MAX], int&, int&, int&);
void XuatMaTran(float[][MAX], int, int);
void ThemDong(float[][MAX], int&, int, int);

	// Them 1 dong toan gia tri +1 tai vi tri dong d
int main()
{
	int m;
	int n;
	float a[MAX][MAX];
	int d;
	TaoMaTran(a, m, n, d);
	cout << "\nMa tran ban dau: " << endl;
	XuatMaTran(a, m, n);
	ThemDong(a, m, n, d);
	cout << "\nMa tran sau khi them dong: " << d << endl;
	XuatMaTran(a, m, n);
	return 0;
}

void TaoMaTran(float a[][MAX], int& m, int& n, int& d)
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
	cout << "\nNhap dong can them: ";
	cin >> d;
}

void XuatMaTran(float a[][MAX], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

void ThemDong(float a[][MAX], int& m, int n, int d)
{
	for (int j = 0; j < n; j++)
	{
		for (int i = m; i >= d + 1; i--) // duyet tu ngoai cung toi dong ke tiep cua dong can xet
			a[i][j] = a[i - 1][j];
		a[d][j] = 1;
	}
	m++;
}