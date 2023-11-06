#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;

void NhapMatrix(float[][500], int&, int&);
void XuatMatrix(float[][500], int, int);
int DemSo(float[][500], int, int);
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
	cout << DemSo(a, i, j);
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

int DemSo(float a[][500], int ii, int jj)
{
	int k = 0;
	int forc = 1;
	float c[500];
	for (int i = 0; i < ii; i++)
		for (int j = 0; j < jj; j++)
			c[k++] = a[i][j];

	float checker[500];
	int dem = 0;
	for (int i = 0; i < k; i++)
	{
		bool flag = false;
		for (int j = 0; j < dem; j++)
			if (c[i] == checker[j])
			{
				flag = true;
				break;
			}
		if (!flag)
		{
			checker[dem] = c[i];
			dem++;
		}
	}
	cout << "So luong so la: ";
	return dem;
}
