#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
void Xuat(int[][500], int, int);
bool KtChan(int);
int DemToanChan(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;
	Nhap(a, m, n);
	cout << "Ma tran: "<<endl;
	Xuat(a, m, n);
	cout << "Dem duoc: ";
	cout << DemToanChan(a, m, n);
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
			cin >> a[i][j];
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
bool KtChan(int k)
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
int DemToanChan(int a[][500], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (KtChan(a[i][j]))
				dem++;
	return dem;
}