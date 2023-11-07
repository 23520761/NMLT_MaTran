#include <iostream>
#include <iomanip>
#define MAX 500

using namespace std;
void TaoMaTran(float[][MAX], int&, int&);
void XuatMaTran(float[][MAX], int, int);
int KtGiam(float[][MAX], int, int);
	// kiem tra cac gtri trong ma tran co giam dan theo cot va dong hay khong
int main()
{
	int m;
	int n;
	float a[MAX][MAX];
	TaoMaTran(a, m, n);
	cout << "\nMa tran ban dau: " << endl;
	XuatMaTran(a, m, n);
	if (KtGiam(a, m, n) == 1)
		cout << "\nCac gia tri trong ma tran giam dan theo hang va cot.";
	else
		cout << "\nCac gia tri trong ma tran khong giam dan theo hang va cot.";

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

int KtGiam(float a[][MAX], int m, int n)
{
	float b[MAX]; // tao mang 1 chieu logic
	int l = m * n - 1;
	int k;
	k = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			b[k++] = a[i][j];
	float max = b[0];
	for (int j = 0; j <= l; j++)
		if (b[j] < b[j + 1]) // Kt do bien thien cua day
			return 0; // day sai => ha co
	return 1; // dung
}