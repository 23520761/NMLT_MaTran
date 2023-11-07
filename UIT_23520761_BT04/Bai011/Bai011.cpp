#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
bool KtChinhPhuong(int);
void LietKe(int[][500], int, int);

int main()
{
	int m;
	int n;
	int a[500][500];
	Nhap(a, m, n);
	LietKe(a, m, n);
	return 0;
}

void Nhap(int a[][500], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	cout << "Nhap cac phan tu trong ma tran: " << endl;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
}

bool KtChinhPhuong(int k)
{
	bool flag = false;
	for (int i = 0; i <= k; i++)
		if (i * i == k)
			flag = true;
	return flag;
}

void LietKe(int a[][500], int m, int n)
{
	cout << "Cac so chinh phuong trong ma tran: ";
	for (int i = 0; i <= m - 1; i++)
		for (int j = 0; j <= n - 1; j++)
			if (KtChinhPhuong(a[i][j]))
				cout << setw(8) << a[i][j];
}