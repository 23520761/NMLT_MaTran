#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
void Xuat(int[][500], int, int);
bool KtHoanThien(int);
int DemHoanThien(int[][500], int, int, int);

int main()
{
	int a[500][500];
	int m, n;
	Nhap(a, m, n);
	int dd;
	cout << "Ma tran: " << endl;
	Xuat(a, m, n);
	cout << "Dong can kiem tra: ";
	cin >> dd;
	if (DemHoanThien(a,m,n,dd))
		cout <<"\nDong"<<dd<<"Khong co so hoan thien"<<endl;
	cout << "Dem: ";
	cout << DemHoanThien(a, m, n, dd);
	return 0;
}
void Nhap(int a[][500], int& m, int& n)
{
	cout << "Nhap hang: ";
	cin >> m;
	cout << "Nhap cot: ";
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
			cout << fixed << setw(10) << a[i][j];
		cout << endl;
	}
}
bool KtHoanThien(int k)
{
	int s = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0)
			s = s + i;
	if (s == k)
		return true;
	return false;
}
int DemHoanThien(int a[][500], int m, int n, int d)
{
	int dem = 0;
	for (int j = 0; j < n; j++)
		if (KtHoanThien(a[d][j]))
			dem++;
	return dem;
}