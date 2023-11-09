#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int [][500], int&, int&);
void LietKe(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;
	Nhap(a, m, n);
	cout << "Liet ke: "<<endl;
	LietKe(a, m, n);
	return 0;
}
void Nhap(int a[][500], int& m, int& n)
{
	cout << "Nhap hang: ";
	cin >> m;
	cout << "Nhap cot: ";
	cin >> n;
	cout << "Nhap ma tran: "<< endl;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
void LietKe(int a[][500], int m, int n)
{
	for (int j = 0; j <= n - 2; j++)
		cout << setw(10) << a[0][j];
	for (int i = 0; i <= m - 2; i++)
		cout << setw(10) << a[i][n - 1];
	for (int j = n - 1; j >= 1; j--)
		cout << setw(10) << a[m - 1][j];
	for (int i = m - 1; i >= 1; i--)
		cout << setw(10) << a[i][0];
}