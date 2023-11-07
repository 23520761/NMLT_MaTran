#include <iostream>
#include <iomanip>
#define MAX 500

using namespace std;
void TaoMaTran(float[][MAX], int&, int&);
void XuatMaTran(float[][MAX], int, int);
float TongCot(float[][MAX], int, int, int);
void ThemDong(float[][MAX], int&, int);

	// Them mot dong vao sau dong cuoi cung sao cho moi ptu tren dong 
	// la tong tat ca cac ptu tren cot ma no thuoc ve
int main()
{
	int m;
	int n;
	float a[MAX][MAX];
	TaoMaTran(a, m, n);
	cout << "\nMa tran ban dau: " << endl;
	XuatMaTran(a, m, n);
	ThemDong(a, m, n);
	cout << "\nMa tran sau khi them: " << endl;
	XuatMaTran(a, m, n);


	return 0;
}

void TaoMaTran(float a[][MAX], int& m, int& n)
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

void XuatMaTran(float a[][MAX], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

float TongCot(float a[][MAX], int m, int n, int c)
{
	float s = 0;
	for (int i = 0; i < m; i++)
		s += a[i][c];
	return s;
}

void ThemDong(float a[][MAX], int& m, int n)
{
	for (int j = 0; j < n; j++)
	{
		for (int i = m; i >=  m + 1; i--) 
			a[i][j] = a[i - 1][j];
		a[m][j] = TongCot(a, m, n, j); // them vao dong cuoi cung
	}
	m++;
}
