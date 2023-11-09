#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
void Xuat(int[][500], int, int);
void HoanVi(int&, int&);

void ChanTang(int[][500], int, int);
void LeGiam(int[][500], int, int);
void ChanTangLeGiam(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;
	cout << "Ma tran: \n";
	Nhap(a, m, n);

	cout << "Ma tran ban dau:\n";
	Xuat(a, m, n);
	ChanTangLeGiam(a, m, n);
	return 0;
}
void Nhap(int a[][500], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = -100 + rand() / (RAND_MAX / 200);
}
void Xuat(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << fixed << setw(10) << a[i][j];
		cout << endl;
	}
}
void ChanTang(int a[][500], int m, int n)
{
	int b[500];
	int k;
	int i, j;
	k = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] % 2 == 0)
				a[i][j] = b[k++];
}
void HoanVi(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
void LeGiam(int a[][500], int m, int n)
{
	int b[500];
	int k;
	int i, j;
	k = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] % 2 != 0)
				b[k++]=a[i][j];

	for (i = 0; i <= k - 2; i++)
		for (j = i + 1; j <= k - 1; j++)
			if (b[i] > b[j])
				HoanVi(b[i], b[j]);
	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] % 2 != 0)
				a[i][j] = b[k++];
}
void ChanTangLeGiam(int a[][500], int m, int n)
{
	ChanTang(a, m, n);
	LeGiam(a, m, n);
}