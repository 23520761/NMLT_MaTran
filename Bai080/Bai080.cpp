#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;

void NhapMatrix(float[][500], int&, int&);
void XuatMatrix(float[][500], int, int);
void SoDuong(float[][500], int, int);
bool ktNguyenTo(int);

int main()
{
	float a[500][500];
	int i, j;
	NhapMatrix(a, i, j);
	cout << "\n--------------------------------\n";
	XuatMatrix(a, i, j);
	cout << "--------------------------------\n";
	cout << "\n--------------------------------\n";
	cout << "Dong co chua gia tri lon nhat la: ";
	SoDuong(a, i, j);
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

void SoDuong(float a[][500], int ii, int jj)
{
	int dem = 0;
	float lc = a[0][0];
	for (int i = 0; i < ii; i++)
		for (int j = 0; j < jj; j++)
			if (lc < a[i][j])
				lc = a[i][j];
	for (int i = 0; i < ii; i++)
		for (int j = 0; j < jj; j++)
			if (lc == a[i][j])
				cout << i << " ";
}
