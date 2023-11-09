#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float a[][100], int&, int&);
void Xuat(float a[][100], int, int);

float LonNhat(float a[][100], int, int);

int main()
{
	float a[100][100];
	int m, n;

	cout << "Ma tran ban dau:\n";
	Nhap(a, m, n);

	cout << "Ma tran: \n";
	Xuat(a, m, n);

	cout << "So lon nhat la: " << LonNhat(a, m, n);
	return 0;
}
void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap hang: ";
	cin >> m;
	cout << "Nhap cot: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = rand() / ((float)RAND_MAX / 200) - 100;
}
void Xuat(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(10)<<setprecision(3) << a[i][j];
		cout << endl;
	}
}
float LonNhat(float a[][100], int m, int n)
{
	float max = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] > max)
				a[i][j] = max;
	return max;
}