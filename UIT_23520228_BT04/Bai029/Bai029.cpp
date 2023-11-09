#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
bool Ktdang3m(int);
int Tong(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;
	Nhap(a, m, n);
	cout << "\nTong= ";
	cout << Tong(a, m, n);
	return 0;
}
void Nhap(int a[][500], int& m, int& n)
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
bool Ktdang3m(int k)
{
	bool flag = false;
	while (k > 1)
	{
		int du = k % 3;
		if (du != 0)
			flag = true;
		k = k / 3;
	}
	return flag;
}
int Tong(int a[][500], int m, int n)
{
	int s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (Ktdang3m(a[i][j]))
				s = s + a[i][j];
	return s;
}