#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
void Xuat(int[][500], int, int);
bool KtChinhPhuong(int);
int DemChinhPhuong(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;
	Nhap(a, m, n);
	cout << "Ma tran: "<<"\n";
	Xuat(a, m, n);
	return 0;
}
void Nhap(int a[][500], int& m, int& n)
{
	cout << "Hang: ";
	cin >> m;
	cout << "Cot: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = rand() / (RAND_MAX / 200) - 100;
}
void Xuat(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(10) << a[i][j];
		cout << endl;
	}
}
bool KtChinhPhuong(int k)
{
	bool flag = false;
	int i = 0;
	while (i <= k)
	{
		if (i * i == k)
			flag = true;
		i = i + 1;
	}
	return flag;
}
int DemChinhPhuong(int  a[][500], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (KtChinhPhuong(a[i][j]))
				dem++;
	return dem;
}