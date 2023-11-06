#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void NhapMatrix(float[][500], int&, int&);
void XuatMatrix(float[][500], int, int);
bool kt3m(int);
void LietKe(float[][500], int, int);

int main()
{
	float a[500][500];
	int i, j;
	NhapMatrix(a, i, j);
	cout << "\n--------------------------------\n";
	XuatMatrix(a, i, j);
	cout << "--------------------------------\n";
	cout << "\n--------------------------------\n";
	LietKe(a, i, j);
	cout << "\n--------------------------------\n";
	return 0;
}

void LietKe(float a[][500], int m, int n)
{
	int check;
	cout << "Nhap dong ban muon kt: ";
	cin >> check;
	int b[500];
	int k;
	int i, j;
	k = 0;
	for (j = 0; j < n; j++)
		if (kt3m(a[check - 1][j]) == 1)
			b[k++] = a[check - 1][j];
	for (i = 0; i < k; i++)
		cout << setw(8) << b[i] << " ,";
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

bool kt3m(int num)
{
	if (num <= 0) {
		return false;
	}

	while (num > 1) {
		if (num % 3 != 0) {
			return false;
		}
		num /= 3;
	}

	return num == 1;
}
