#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void TaoMaTran(int[][500], int&, int&);
void XuatMaTran(int[][500], int, int);
int ViTriLonNhat(int[], int);
int TimChuSo(int[][500], int, int);

int main()
{
	int m;
	int n;
	int a[500][500];
	TaoMaTran(a, m, n);
	XuatMaTran(a, m, n);
	cout << "\nChu so xuat hien nhieu nhat trong ma tran: " << TimChuSo(a, m, n);

	return 0;
}

void TaoMaTran(int a[][500], int& m, int& n)
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

void XuatMaTran(int a[][500], int m, int n)
{
	cout << "Ma tran ban dau co dang: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

int ViTriLonNhat(int a[], int k)
{
	int lc = 0;
	for (int i = 0; i < k; i++)
		if (a[i] > a[lc])
			lc = i;
	return lc;
}

int TimChuSo(int a[][500], int m, int n)
{
	// tao ra mang 1 chieu tu chu so 0 -> 9 gan cho tuong ung cac index tu 0 -> 9
	// Cho tat ca tan suat ban dau = 0
	int dem[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == 0)
				dem[0]++;
			int t = abs(a[i][j]);
			while (t != 0)
			{
				int dv = t % 10;
				dem[dv]++; // tang tan suat cua chu so tai index tuong ung	
				t /= 10;
			}
		}
	// sau khi tim ra tan suat cua tung index => goi ham ViTriLonNhat
	//  => gtri tra ve cua ham ViTriLonNhat se duoc gan cho gia tri tra ve cua ham tim chu soss
	return ViTriLonNhat(dem, 10); // 10: tuong ung voi 10 vi tri cua 1 chu so tu: 0 -> 9
}