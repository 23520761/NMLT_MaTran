#include<iostream>

using namespace std;
void Nhap(int[][500], int&, int&);
bool KiemTra(int);
int KiemTraDong(int[][500], int, int, int);
void Xuat(int[][500], int, int);

int main()
{
	int a[500][500], m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
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

bool KiemTra(int m)
{
	int dem = 0;
	for (int i = 1; i <= m; i++)
		if (m % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}

int KiemTraDong(int a[][500], int m, int n, int d)
{
	int flag=0;
	for (int j = 0; j < n; j++)
		if (KiemTra(a[d][j]) == true)
			flag = 1;
	return flag;
}

void Xuat(int a[][500], int m, int n)
{
	for(int i=0;i<m;i++)
			if (KiemTraDong(a,m,n,i) == 1)
			{
				cout << i << endl;
			}
}