#include<iostream>
#include<iomanip>

using namespace std;
void Nhap(float[][500], int&, int&);
float GiaTriNhoNhat(float[][500], int, int, int);
void ThemCot(float[][500], int, int&);
void Xuat(float[][500], int, int);

int main()
{
    float a[500][500];
    int m, n;
    Nhap(a, m, n);
    Xuat(a, m, n);
    ThemCot(a, m, n);
    Xuat(a, m, n);
	return 0;
}

void Nhap(float a[][500], int& m, int& n)
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

float GiaTriNhoNhat(float a[][500], int m, int n, int d)
{
    float lc = a[d][0];
    for (int j = 0; j < n; j++)
        if (a[d][j] < lc)
            lc = a[d][j];
    return lc;
}

void ThemCot(float a[][500], int m, int& n)
{
    for (int i = 0; i < m; i++)
        {
        a[i][n] = GiaTriNhoNhat(a, m, n, i);
        }
    n++;
}

void Xuat(float a[][500], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << setw(8) <<  a[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}

