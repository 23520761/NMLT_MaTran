#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(float[][500], int&, int&);
void XuatMaTran(float[][500], int, int);
int KtCucTieu(float[][500], int, int, int, int);
void PhanTuCucTieu(float[][500], int, int);
int DemCucTieu(float[][500], int, int);
int KtCucDai(float[][500], int, int, int, int);
void PhanTuCucDai(float[][500], int, int);
int DemCucDai(float[][500], int, int);
int DemCucTri(float[][500], int, int);

int main()
{
	int m;
	int n;
	float a[500][500];
	TaoMaTran(a, m, n);
	XuatMaTran(a, m, n);
	PhanTuCucTieu(a, m, n);
	cout << "\nSo phan tu cuc tieu: " << DemCucTieu(a, m, n);
	PhanTuCucDai(a, m, n);
	cout << "\nSo phan tu cuc tieu: " << DemCucDai(a, m, n);
	cout << "\nSo phan tu cuc tri: " << DemCucTri(a, m, n);
	return 0;
}

void TaoMaTran(float a[][500], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	cout << "Nhap cac phan tu trong ma tran: " << endl;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
}

void XuatMaTran(float a[][500], int m, int n)
{
	cout << "\nMa tran ban dau co dang: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

int KtCucTieu(float a[][500], int m, int n, int d, int c)
{
	for (int i = -1; i <= 1; i++)
		for (int j = -1; j <= 1; j++)
			if (!(i == 0 && j == 0) && (i + d >= 0 && i + d < m) && (j + c >= 0 && j + c < n)) // xet nhung ptu xung quanh
				if (a[d + i][c + j] < a[d][c]) // dk: neu nhưng ptu xung quanh < ptu cuc tieu => sai
					return 0;	// gia tri tra ve la 0
	return 1;
}

void PhanTuCucTieu(float a[][500], int m, int n)
{
	cout << "Cac phan tu cuc tieu trong ma tran: ";
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (KtCucTieu(a, m, n, i, j) == 1) // thoa dieu kien
				cout << setw(8) << a[i][j];
}

int DemCucTieu(float a[][500], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (KtCucTieu(a, m, n, i, j) == 1) // thoa dieu kien
				dem++;
	return dem;
}

int KtCucDai(float a[][500], int m, int n, int d, int c)
{
	for (int i = -1; i <= 1; i++)
		for (int j = -1; j <= 1; j++)
			if (!(i == 0 && j == 0) && (i + d >= 0 && i + d < m) && (j + c >= 0 && j + c < n)) // xet nhung ptu cuc dai xung quanh
				if (a[d + i][c + j] > a[d][c]) // dk: neu phan tu xong quanh > ptu cuc dai => sai
					return 0; // gia tri tra ve la 0
	return 1;
}

void PhanTuCucDai(float a[][500], int m, int n)
{
	cout << "\nCac phan tu cuc dai trong ma tran: ";
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (KtCucDai(a, m, n, i, j) == 1) // thoa dieu kien
				cout << setw(8) << a[i][j];
}

int DemCucDai(float a[][500], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (KtCucDai(a, m, n, i, j) == 1) // thoa dieu kien
				dem++;
	return dem;
}

int DemCucTri(float a[][500], int m, int n)
{
	int dem = 0;
	int CucTieu = DemCucTieu(a, m, n);
	int CucDai = DemCucDai(a, m, n);
	dem = CucTieu + CucDai;
	return dem;
}