#include <iostream>
#include <iomanip>
#define MAX 100

using namespace std;
void TaoMaTran(float[][MAX], int&, int&);
void XuatMaTran(float[][MAX], int, int);
void HoanVi(float&, float&);
void SapXepXoanOcTang(float[][MAX], int, int);

	// Sap xep cac gtri phan tu trong ma tran tang dan theo hinh xoan oc
int main()
{
	int m;
	int n;
	float a[MAX][MAX];
	TaoMaTran(a, m, n);
	cout << "\nMa tran ban dau: " << endl;
	XuatMaTran(a, m, n);
	SapXepXoanOcTang(a, m, n);
	cout << "\nMa tran sap xep theo hinh xoan oc tang dan: " << endl;
	XuatMaTran(a, m, n);

	return 0;
}

void TaoMaTran(float a[][MAX], int& m, int& n)
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

void XuatMaTran(float a[][MAX], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

void HoanVi(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}

void SapXepXoanOcTang(float a[][MAX], int m, int n)
{
	float b[MAX];
	int k;
	k = 0;
	// su dung mang phu de luu cac gia tri cua tung dia chi o nho
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			b[k++] = a[i][j];
	// Sap xep cac gia tri theo thu tu tang dan trong mang phu
	for (int j = 0; j <= k - 2; j++)
		if (b[j] > b[j + 1])
			HoanVi(b[j], b[j + 1]);
	// cho index cua ma tran b tro ve vi tri dau tien
	k = 0;
	// dinh nghia lai vi tri
	int HangDau = 0;
	int HangCuoi = m - 1;
	int CotDau = 0;
	int CotCuoi = n - 1;
	// bien dem: xac dinh cac phan tu trong mang phu duoc xep vao vi tri cua ma tran xoay oc
	int dem = 1;
	while (dem <= m * n)
	{
		// B1: Xay dung hang tren cung (0 -> n - 1), vtri: m = 0
		for (int i = CotDau; i <= CotCuoi; i++)
		{
			a[HangDau][i] = b[k++];
			dem++;
		}
		// B2: Xay dung cot ben phai ( 1 -> m - 1) vtri: n - 1
		for (int i = HangDau + 1; i <= HangCuoi; i++)
		{
			a[i][CotCuoi] = b[k++];
			dem++;
		}
		// B3: Xay dung hang cuoi (n - 2 -> 0) vtri: m - 1
		for (int i = CotCuoi - 1; i >= CotDau; i--)
		{
			a[HangCuoi][i] = b[k++];
			dem++;
		} 
		// B4: Xay cot ben trai (m - 2 -> m = 1) vtri: n = 0
		for (int i = HangCuoi - 1; i > HangDau; i--)
		{
			a[i][CotDau] = b[k++];
			dem++;
		}
		// Sau khi chay xong vong ben ngoai => tang giam kich thuoc
		CotDau++;
		CotCuoi--;
		HangCuoi--;
		HangDau++;
	}
}