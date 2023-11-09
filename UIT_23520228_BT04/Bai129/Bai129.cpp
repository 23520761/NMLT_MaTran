#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);
void SapTang(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	cout << "Ma tran: \n";
	Nhap(a, m, n);

	cout << "Ma tran ban dau:\n";
	Xuat(a, m, n);

	SapTang(a, m, n);
	cout << "Ma tran luc sau: " << endl;
	Xuat(a, m, n);
	return 0;
}

void Nhap(float a[][500], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = -100 + rand() / ((float)RAND_MAX / 200);
}
void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << fixed << setw(10) << setprecision(2) << a[i][j];
		cout << endl;
	}
}
void SapTang(float a[][500], int m, int n)
{
	float b[500];
	int k;
	int i, j;
	
	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			b[k++] = a[i][j];

	for (i=0;i<=k-2;i++)
		for(j=i+1;j<=k-1;j++)
			if (b[i] > b[j])
			{
				float temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			a[i][j] = b[k++];
}