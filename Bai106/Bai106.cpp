#include<iostream>

using namespace std;
void Nhap(int [][500], int& , int& );
int KiemTra(int [][500], int , int );

int main()
{
	int a[500][500],  m,  n;
	Nhap(a, m, n);
	cout << KiemTra(a, m, n);
	return 0;
}

void Nhap(int a[][500], int& m, int& n)
{
	cout << "nhap hang ";
	cin >> m;
	cout << "nhap cot ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "nhap a[" << i << "]" << "[" << j << "]";
			cin >> a[i][j];
		}
}

int KiemTra(int a[][500], int m, int n)
{
	int c;
	cout << "nhap cot can kiem tra ";
	cin >> c;
	if (c >= n)
		cout << "khong hop le ";
	int flag = 0;
	for (int i = 1; i < m; i++)
	{
		int k = i-1;
		int lc = a[k][c];
		if (lc > a[i][c])
			flag = 1;
		else
			return 0;
	}
	return flag;
}