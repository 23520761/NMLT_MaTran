#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);

float TongCot(float[][500], int, int, int);
float TongCotNhoNhat(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	Nhap(a, m, n);
	cout << "Ma tran la: " << endl;
	Xuat(a, m, n);
	cout << "Tong cot nho nhat: " << TongCotNhoNhat(a, m, n);
	return 0;
}
void Nhap(float a[][500], int& m, int& n)
{
	cout << "Hang: ";
	cin >> m;
	cout << "Cot: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = rand() / (float) ((RAND_MAX / 200) - 100);
}
void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(10) << setprecision(2) << a[i][j];
		cout << endl;
	}
}
float TongCot(float a[][500], int m, int n,int c)
{
	float sum = 0;
	for (int i = 0; i < m; i++)
		sum += a[i][c];
	return sum;
}
float TongCotNhoNhat(float a[][500], int m, int n)
{
	float min = TongCot(a, m, n, 0);
	for (int j = 0; j < n; j++)
		if (min < TongCot(a, m, n, j))
			min = TongCot(a, m, n, j);
	return min;
}