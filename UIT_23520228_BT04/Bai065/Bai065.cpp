#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
void Xuat(int[][500], int, int);
bool KtCsChan(int);
int DemGiaTri(int[][500], int, int, int);

int main()
{
	int a[500][500];
	int m, n;
	Nhap(a, m, n);
	cout << "Ma tran: "<<endl;
	Xuat(a, m, n);
	int cc;
	cout << "Cot can kiem tra: ";
	cin >> cc;
	if (DemGiaTri(a, m, n, cc))
		cout << "\nCot" << cc << ":" << "Khong co gia tri"<<endl;
	cout << "Dem: ";
	cout << DemGiaTri(a, m, n, cc);
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
			cout<<fixed << setw(10) << a[i][j];
		cout << endl;
	}
}
bool KtCsChan(int k)
{
	int dv = k % 100;
	if (dv % 2 == 0)
		return true;
	return false;
}
int DemGiaTri(int a[][500], int m, int n, int c)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		if (KtCsChan(a[i][c]))
			dem++;
	return dem;
}