#include<iostream>
#include<iomanip>

using namespace std;
void Nhap(float[][500], int&, int&);
void DichCot(float[][500], int, int,int);
void DichSangPhai(float[][500], int, int);
void Xuat(float[][500], int, int);

int main()
{
    float a[500][500];
    int m, n;
    Nhap(a, m, n);
    Xuat(a, m, n);
    DichSangPhai(a, m, n);
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

void DichCot(float a[][500], int m, int n, int d)
{
    float temp = a[d][n - 1];
    for (int j = n - 1; j >= 1; j--)
        a[d][j] = a[d][j - 1];
    a[d][0] = temp;
}

void DichSangPhai(float a[][500], int m, int n)
{
    for (int i = 0; i < m; i++)
            DichCot(a, m, n, i);
}

void Xuat(float a[][500], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << setw(8) << a[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}