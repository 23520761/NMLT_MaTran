#include<iostream>
#include<iomanip>

using namespace std;
void Nhap(int[][500], int&, int&);
void HoanVi(int&, int&);
void ChanGiam(int[][500], int, int);
void Xuat(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	return 0;
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

void HoanVi(int& a, int& b)
{
	int temp = a;
	if (a < b)
	{
		a = b;
		b = temp;
	}
}

void ChanGiam(int a[][500], int m, int n)
{
	int b[500];
	int k, i, j;
	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] % 2 == 0)
				b[k++] = a[i][j];
	for (i = 0; i < k - 1; i++)
		for (j = i + 1; j < k; j++)
			HoanVi(b[i], b[j]);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] % 2 == 0)
				a[i][j] = b[k++];
}

void Xuat(int a[][500], int m, int n)
{
	ChanGiam(a, m, n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}