#include<iostream>
#include<iomanip>
using namespace std;

void NhapA(float[][500], int&, int&);
void XuatA(float[][500], int, int);
void NhapB(float[][500], int&, int&);
void XuatB(float[][500], int, int);

int ktCon(float[][500], int, int, float[][500], int, int);

int main()
{
	float a[500][500];
	float b[500][500];
	int m, n, k, l;

	cout << "Nhap ma tran A: \n";
	NhapA(a, m, n);

	cout << "Nhap ma tran B: \n";
	NhapB(b, k, l);

	cout << "Ma tran A ban dau: \n";
	XuatA(a, m, n);

	cout << "Ma tran B ban dau: \n";
	XuatB(b, k, l);
	
	if (ktCon(a, m, n, b, k, l) == 1)
		cout << "Ma tran A la ma tran con cua ma tran B";
	cout << "Ma tran A khong la ma tran con cua ma tran B";
	return 0;
}
void NhapA(float a[][500], int& m, int& n)
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
void NhapB(float b[][500], int& k, int& l)
{
	cout << "Nhap so dong: ";
	cin >> k;
	cout << "Nhap so cot: ";
	cin >> l;
	srand(time(NULL));
	for (int i = 0; i < k; i++)
		for (int j = 0; j < l; j++)
			b[i][j] = -100 + rand() / ((float)RAND_MAX / 200);
}
void XuatA(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << fixed << setw(10) << setprecision(2) << a[i][j];
		cout << endl;
	}
}
void XuatB(float b[][500], int k, int l)
{
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < l; j++)
			cout << fixed << setw(10) << setprecision(2) << b[i][j];
		cout << endl;
	}
}
int ktCon(float a[][500], int m, int n, float b[][500], int k, int l)
{
	if (m > k || n > l)
		return 0;
	int flag = 0;
	for (int d=0;d<=k-m;d++)
		for (int c = 0; c <= l - n; c++)
		{
			int co = 1;
			for (int i = 0; i < m; i++)
				for (int j = 0; j < n; j++)
					if (a[i][j] != b[d + i][c + j])
						co = 0;
			if (co == 1)
				flag = 1;
		}
	return flag;
}