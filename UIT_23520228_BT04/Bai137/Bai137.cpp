#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);
void HoanVi(float&, float&);

void BienTang(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	cout << "Ma tran: \n";
	Nhap(a, m, n);

	cout << "Ma tran ban dau:\n";
	Xuat(a, m, n);

	BienTang(a, m, n);
	cout << "Ma tran luc sau: " << endl;
	Xuat(a, m, n);
	return 0;
}
void Nhap(float a[][500], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = -100 + rand() / ((float)RAND_MAX / 200);
}
void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << fixed << setw(10) << setprecision(2) << a[i][j];
		cout << endl;
	}
}
void HoanVi(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}
void BienTang(float a[][500], int m, int n)
{
	float b[500];
	int k;
	int i, j;
	k = 0;
	for (j = 0; j <= n - 2; j++)
		 b[k++] = a[0][j];
	for (i = 0; i <= m - 2; i++)
		 b[k++] = a[i][n - 1];
	for (j = n - 1; j >= 1; j--)
		b[k++] = a[m - 1][j];
	for (i = m - 1; i >= 1; i--)
		 b[k++] = a[i][0];
	for (i = 0; i <= k - 2; i++)
		for (j = i + 1; j <= k - 1; j++)
			if (b[i] > b[j])
				HoanVi(b[i], b[j]);

	k = 0;
	for (j = 0; j <= n - 2; j++)
		 a[0][j] = b[k++];
	for (i = 0; i <= m - 2; i++)
		 a[i][n - 1] = b[k++];
	for (j = n - 1; j >= 1; j--)
		 a[m - 1][j] = b[k++];
	for (i = m - 1; i >= 1; i--)
		 a[i][0] = b[k++];
}