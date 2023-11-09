#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);

void SapCotGiam(float[][500], int, int, int);

int main()
{
	float a[500][500];
	int m, n, c;
	cout << "Ma tran: \n";
	Nhap(a, m, n);

	cout << "Ma tran ban dau:\n";
	Xuat(a, m, n);
	cout << "Hang can sap: ";
	cin >> c;
	SapCotGiam(a,m,n,c);
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
void SapCotGiam(float a[][500], int m, int n, int c)
{
	for (int i = 0; i <= m - 2; i++)
		for (int j = i + 1; j <= m - 1; j++)
			if (a[i][c] < a[j][c])
				swap(a[i][c], a[j][c]);
}