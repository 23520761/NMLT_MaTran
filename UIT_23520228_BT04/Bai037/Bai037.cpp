#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float [][500], int&, int&);
float Tong(float [][500], int, int, int);

int main()
{
	float a[500][500];
	int m, n;
	Nhap(a, m, n);
	int cc;
	cout << "Dong kiem tra: ";
	cin >> cc;
	cout << Tong(a, m, n, cc);
	return 0;
}
void Nhap(float a[][500], int& m, int& n)
{
	cout << "Nhap hang: ";
	cin >> m;
	cout << "Nhap cot: ";
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
			cout << fixed << setw(10) << setprecision(10) << a[i][j];
		cout << endl;
	}
}
float Tong(float a[][500], int m, int n,int c)
{
	float s = 0;
	for (int j = 0; j < n; j++)
		if (a[c][j] > 0)
			s = s + a[c][j];
	return s;

}