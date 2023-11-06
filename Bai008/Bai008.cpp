#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

void NhapMatrix(float[][500], int&, int&, string);
void XuatMatrix(float[][500], int, int);

int main()
{
	float a[500][500];
	int i, j;
	string fname;
	cout << "Nhap ten file: ";
	getline(cin, fname);
	NhapMatrix(a, i, j, fname);
	cout << "\n--------------------------------\n";
	XuatMatrix(a, i, j);
	cout << "--------------------------------\n";
	return 0;
}

void NhapMatrix(float a[][500], int& ii, int& jj, string filename)
{
	ifstream fi(filename);
	fi >> ii;
	fi >> jj;
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
