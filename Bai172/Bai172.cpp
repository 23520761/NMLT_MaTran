#include<iostream>
#include<cmath>
#include<iomanip>
#define MIN -999
using namespace std;

void NhapMatrix(float[][500], int&, int&);
void XuatMatrix(float[][500], int, int);
float ktCon(float[][500], int, int, int, int);
float TongCon(float[][500], int, int);

int main()
{
	float a[500][500];
	int i, j;
	NhapMatrix(a, i, j);
	cout << "\n--------------------------------\n";
	XuatMatrix(a, i, j);
	cout << "--------------------------------\n";
	cout << "\n--------------------------------\n";
	cout << "Ma tran co tong lon nhat la: ";
	cout << TongCon(a, i, j);
	cout << "\n--------------------------------\n";
	return 0;
}

float ktCon(float a[][500], int m, int n, int vtd, int vtc)
{
	float S = 0;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			S = S + a[vtd + i][vtc + j];
	return S;
}

float TongCon(float a[][500], int m, int n)
{
	float lc = MIN;
	for (int vtd = 0; vtd <= m - 3; vtd++)
		for (int vtc = 0; vtc <= n - 3; vtc++) {
			float current = ktCon(a, m, n, vtd, vtc);
			if (current > lc)
				lc = current;
		}
	return lc;
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
