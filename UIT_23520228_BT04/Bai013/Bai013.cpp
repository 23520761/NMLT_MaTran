#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
void Xuat(int[][500], int, int);
void LietKe(int[][500], int, int);
bool Kttoanchan(int);

int main()
{
	int a[500][500];
	int m, n;
	Nhap(a, m, n);
	cout << "\nMa tran la: " << endl;
	Xuat(a, m, n);
	cout << "\nSo chan la: " << endl;
	LietKe(a, m, n);
	return 0;
}
void Nhap(int a[][500], int& m, int& n)
{
	cout << "So hang: ";
	cin >> m;
	cout << "So cot: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
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
bool Kttoanchan(int k)
{
	bool flag = true;
	while (k != 0)
	{
		int dv = k % 10;;
		if (dv % 2 != 0)
			flag = false;
		k = k / 10;
	}
	return flag;
}
void LietKe(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if(Kttoanchan(a[i][j]))
				cout << setw(8) << a[i][j];
}