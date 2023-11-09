#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);

float AmDau(float[][500], int, int);
float AmLonNhat(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	Nhap(a, m, n);
	cout << "Ma tran sau: " << endl;
	Xuat(a, m, n);
	cout << "So am lon nhat: " << AmLonNhat(a, m, n);
	return 0;
}
void Nhap(float a[][500], int& m, int& n)
{
	cout << "Nhap hang: ";
	cin >> m;
	cout << "Nhap cot: ";
	cin >> n;
	cout << "Nhap ma tran: " << endl;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << fixed << setw(10) << setprecision(3) << a[i][j];
		cout << endl;
	}
}
float AmDau(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] < 0)
				return a[i][j];
}
float AmLonNhat(float a[][500], int m, int n)
{
	int max = AmDau(a, m, n);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j]<0 && a[i][j] > max)
				max = a[i][j];
	return max;
}