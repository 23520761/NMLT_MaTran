#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);
int DemCucTieu(float[][500], int, int);
int KtCucTieu(float[][500], int, int, int,int);

int main()
{
	float a[500][500];
	int m, n;
	cout << "Ma tran: " << endl;
	Nhap(a, m, n);

	cout << "Ma tran ban dau: \n";
	Xuat(a, m, n);

	cout << "So luong phan tu cuc tieu: " << DemCucTieu(a, m, n);
	return 0;
}
void Nhap(float a[][500], int& m, int& n)
{
	cout << "Nhap hang: ";
	cin >> m;
	cout << "Nhap cot: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = rand() / ((float)(RAND_MAX / 200)) - 100;
}
void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cout << fixed << setw(10) << setprecision(3) << a[i][j];
}
int DemCucTieu(float a[][500], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (KtCucTieu(a, m, n, i,j))
				dem++;
	return dem;
}
int KtCucTieu(float a[][500], int m, int n, int dd, int cc)
{
	int di[8] = { -1,-1,-1,0,+1,+1,+1,0 };
	int dj[8] = { -1,0,+1,+1,+1,0,-1,-1 };
	int flag = 1;
	for (int k = 0; k < 8; k++)
		if (dd + di[k] >= 0 && dd + di[k] < n && cc + dj[k] >= 0 && cc + dj[k] < m)
			if (a[dd + di[k]][cc + dj[k]] > a[dd][cc])
				flag = 0;
	return flag;
}