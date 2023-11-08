#include<iostream>

using namespace std;
void Nhap(int[][500], int&, int&);
int KiemTra(int[][500], int, int, int);
void XoaCot(int[][500], int, int&);
void Xuat(int[][500], int, int);

int main()
{
    int a[500][500];
    int m, n;
    Nhap(a, m, n);
    Xuat(a, m, n);
    XoaCot(a, m, n);
    Xuat(a, m, n);
	return 0;
}

void Nhap(int a[][500], int& m, int& n)
{
    cout << "Nhap so hang: ";
    cin >> m;
    cout << "Nhap so cot: ";
    cin >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            cout << "Nhap a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
}

int KiemTra(int a[][500], int m, int n, int c)
{
    for (int i = 0; i < n; i++)
        if (a[i][c] % 2 != 0)
            return 0;
    return 1;
}

void XoaCot(int a[][500], int m, int& n)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n-1; j++)
            if (KiemTra(a, m, n, j) == 1)
                a[i][j] = a[i][j + 1];
    n--;
}

void Xuat(int a[][500], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}