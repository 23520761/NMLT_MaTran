#include<iostream>
#include<iomanip>

using namespace std;
void Nhap(float[][500], int&, int&);
void HoanVi(float&, float&);
void DuongTang(float[][500], int, int);
void Xuat(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	return 0;
}

void Nhap(float a[][500], int& m, int& n)
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

void HoanVi(float& a, float& b)
{
	float temp = a;
	if (a > b)
	{
		a = b;
		b = temp;
	}
}

void DuongTang(float a[][500], int m, int n)
{
	float b[500];
	int k, i, j;
	k = 0;
	for (i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] > 0)
			b[k++] = a[i][j];
	for (i = 0; i < k - 1; i++)
		for (j = i + 1; j < k; j++)
			if (b[i] > b[j])
				HoanVi(b[i], b[j]);
	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] > 0)
				a[i][j] = b[k++];
}

void Xuat(float a[][500], int m, int n)
{
	DuongTang(a, m, n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j]<<" ";
		cout << endl;
	}
}