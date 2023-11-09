#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
void Xuat(int[][500], int, int);
void LietKe(int[][500], int, int,int);
bool HoanThien(int);
bool HoanThienDau(int[][500],int,int,int);

int main()
{
	int a[500][500];
	int m, n;
	cout << "Nhap ma tran: ";
	Nhap(a, m, n);
	int dd;
	cout << "Dong can kiem tra: ";
	cin >> dd;
	if (HoanThienDau(a, m, n, dd))
		cout << "\nDong" << dd << "Khong co so hoan thien" << endl;
	cout << "Liet ke: ";
	LietKe(a, m, n, dd);
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
bool HoanThien(int k)
{
	int s = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0)
			s = s + i;
	if (s == k)
		return true;
	return false;
}
bool HoanThienDau(int a[][500], int m, int n, int d)
{
	for (int j = 0; j < n; j++)
		if (HoanThien(a[d][j]))
			return false;
	return true;
}
void LietKe(int a[][500], int m, int n, int d)
{
	cout << "cac chu so hoan thien tren dong" << d <<":";
	for (int j = 0; j < n; j++)
			if (HoanThien(a[d][j]))
	cout << setw(10) << a[d][j];
}
