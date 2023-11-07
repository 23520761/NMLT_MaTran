#include <iostream>
#include <iomanip>
#define MAX 500

using namespace std;
void TaoMaTran(float[][MAX], int&, int&);
void XuatMaTran(float[][MAX], int, int);
int KtCon(float[][MAX], int, int, int, int);
void ConCuoi(float[][MAX], int, int, int&, int&);
void XuatCon(float [][MAX], int, int);

	// Tim ma tran con co kich thuoc 3x3 toan am cuoi cung trong ma tran
int main()
{
	int m;
	int n;
	float a[MAX][MAX];
	int vtd = 0;
	int vtc = 0;
	TaoMaTran(a, m, n);
	cout << "\nMa tran ban dau: " << endl;
	XuatMaTran(a, m, n);
	ConCuoi(a, m, n, vtd, vtc);
	cout << "\nMa tran con toan am cuoi cung trong ma tran: " << endl;
	XuatCon(a, vtd, vtc);

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
int KtCon(float a[][MAX], int m, int n, int vtd, int vtc)
{
	int flag = 1;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if (a[vtd + i][vtc + j] >= 0)
				flag = 0;
	return flag;
}

void ConCuoi(float a[][MAX], int m, int n, int& vtd, int& vtc)
{
	for (vtd = m - 3; vtd >= 0; vtd--)
		for (vtc = n - 3; vtc >= 0; vtc--)
			if (KtCon(a, m, n, vtd, vtc) == 1)
				return;
	vtd = vtc = -1;
}

void XuatCon(float a[][MAX], int vtd, int vtc)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << setw(8) << a[vtd + i][vtc + j];
		cout << endl;
	}
}