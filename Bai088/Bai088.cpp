#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;

void NhapMatrix(float[][500], int&, int&);
void XuatMatrix(float[][500], int, int);
int Slonnhat(float[][500], int, int);


int main()
{
	float a[500][500];
	int i, j;
	NhapMatrix(a, i, j);
	cout << "\n--------------------------------\n";
	XuatMatrix(a, i, j);
	cout << "--------------------------------\n";
	cout << "\n--------------------------------\n";
	cout << Slonnhat(a, i, j);
	cout << "\n--------------------------------\n";
	return 0;
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

int Slonnhat(float a[][500], int ii, int jj)
{
	int S = 0;
	int lc = S;
	for (int d = 0; d < ii; d++)
	{
		for (int i = 0; i < jj; i++)
		{
			S = S + a[d][i];
		}
		if (lc < S)
			lc = S;
	}
	cout << "Tong cua hang co tong lon nhat la: ";
	return lc;
}

