#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

void TaoMaTranZicZacNgang(float[][500], int, int);
void NhapMatrix(float[][500], int&, int&);
void XuatMatrix(float[][500], int, int);

int main()
{
	float a[500][500];
	int i, j;
	NhapMatrix(a, i, j);
	cout << "\n--------------------------------\n";
	XuatMatrix(a, i, j);
	cout << "--------------------------------\n";
	cout << "\n--------------------------------\n";
	TaoMaTranZicZacNgang(a, i, j);
	XuatMatrix(a, i, j);
	cout << "--------------------------------\n";
	return 0;
}

void TaoMaTranZicZacNgang(float a[][500], int dong, int cot)
{
	int dem = 1;
	for (int i = 0; i < dong; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < cot; j++)
			{
				a[i][j] = dem++;
			}
		}
		else
		{
			for (int j = cot - 1; j >= 0; j--)
			{
				a[i][j] = dem++;
			}
		}
	}
}

void NhapMatrix(float a[][500], int& ii, int& jj)
{
	cout << "--------------------------------\n";
	cout << "Nhap so dong: ";
	cin >> ii;
	cout << "--------------------------------\n";
	cout << "Nhap so cot: ";
	cin >> jj;
	cout << "--------------------------------\n\n";
	cout << "--------------------------------\n";
	for (int i = 0; i < ii; i++)
	{
		cout << "Dong " << i + 1 << " : " << endl;
		for (int j = 0; j < jj; j++)
		{
			cin >> a[i][j];
		}
	}
	cout << "--------------------------------\n";
}

void XuatMatrix(float a[][500], int ii, int jj)
{
	cout << "Ma tran la: " << endl;
	for (int i = 0; i < ii; i++)
	{
		for (int j = 0; j < jj; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}