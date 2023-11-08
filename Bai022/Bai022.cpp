#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;
void Nhap(int[][500], int&, int&);
void Xuat(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;
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

void Xuat(int a[][500], int m, int n)
{
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(i==0||i==m-1||j==0||j==n-1)
				if(a[i][j]%2!=0)
					cout << "a[" << i << "]" << "[" << j << "]" << a[i][j] << endl;
}