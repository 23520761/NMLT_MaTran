#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(long[][100], int&, int&);
void Xuat(long[][100], int, int);

int main()
{
	long a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << "Ma tran ne: " << endl;
	Xuat(a, m, n);
	return 0;
}
void Nhap(long a[][100], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
void Xuat(long a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << fixed << setw(10) << a[i][j];
		cout << endl;
	}
}