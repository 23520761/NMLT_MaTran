#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][500], int&, int&, int&);
void LietKeGiaTriChanDong(int[][500], int, int, int);

int main()
{
	int m;
	int n;
	int a[500][500];
	int d;
	Nhap(a, m, n, d);
	LietKeGiaTriChanDong(a, m, n, d);
	return 0;
}

void Nhap(int a[][500], int& m, int& n, int& d)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	cout << "Nhap cac phan tu trong ma tran: " << endl;
	for (int i = 0; i <= m - 1; i++)
		for (int j = 0; j <= n - 1; j++)
		{
			cout << "a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}

	cout << "Nhap dong can kiem tra: ";
	cin >> d;
}

void LietKeGiaTriChanDong(int a[][500], int m, int n, int d)
{
	cout << "Cac gia tri chan tren dong " << d << ":";
	for (int i = 0; i <= n - 1; i++)
			if (a[d][i] % 2 == 0)
				cout << setw(8) << a[d][i];

}