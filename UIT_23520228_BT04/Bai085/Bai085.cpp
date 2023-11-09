#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);

bool KtraChinhPhuong(int);
int ChinhPhuongDau(int[][100], int, int);
int ChinhPhuongLonNhat(int[][100], int, int);

int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << "Ma tran sau: " << endl;
	Xuat(a, m, n);
	cout << "So chinh phuong lon nhat: " << ChinhPhuongLonNhat(a, m, n);
	return 0;
}
void Nhap(int a[][100], int& m, int& n)
{
	cout << "Hang: ";
	cin >> m;
	cout << "Cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
void Xuat(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << fixed << setw(10) << a[i][j];
		cout << endl;
	}

}
bool KtraChinhPhuong(int k)
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
int ChinhPhuongDau(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (KtraChinhPhuong(a[i][j]))
				return a[i][j];
}

int ChinhPhuongLonNhat(int a[][100], int m, int n)
{
	max = ChinhPhuongDau(a, m, n);
	for (int i = 0; i < m; i++)
		for (int j; j < n; j++)
			if (a[i][j] > max)
				max = a[i][j];
	return max;
}