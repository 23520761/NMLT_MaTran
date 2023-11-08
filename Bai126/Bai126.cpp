#include<iostream>
#include<iomanip>

using namespace std;
void Nhap(float[][500], int&, int&);
void HoanVi(float&, float&, int);
void SapXep(float[][500], int, int,int);
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

void HoanVi(float& a, float& b, int d)
{
	float temp = a;
	if (d % 2 == 0)
	{
		if (a > b)
		{
			a = b;
			b = temp;
		}
	}
	else
	{
		if (a < b)
		{
			a = b;
			b = temp;
		}
	}
}

void SapXep(float a[][500], int m, int n, int d)
{
	for (int i = 0; i < n-1; i++)
		for (int j = i + 1; j < n; j++)
			HoanVi(a[d][i], a[d][j],d);
}

void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			SapXep(a, m, n, i);
			cout << setw(8) << a[i][j] << " ";
		}
		cout << endl;
	}
}

