#include<iostream>

using namespace std;
void Nhap(float[][500], int&, int&);
void HoanVi(float&, float&);
void Sapxep(float[][500], int, int, int);
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
	a = b;
	b = temp;
}

void Sapxep(float a[][500], int m, int n, int d)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if(a[d][i]>a[d][j])
				HoanVi(a[d][i], a[d][j]);
}

void Xuat(float a[][500], int m, int n)
{
	int i;
	cout << "nhap hang can sap xep ";
	cin >> i;
	if (i > m)
		cout << "khong hop le ";
	for (int j = 0; j < n; j++)
	{
		Sapxep(a, m, n, i);
		cout << a[i][j]<<" ";
	}
}