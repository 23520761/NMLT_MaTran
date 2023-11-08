#include<iostream>
#include<iomanip>

using namespace std;
void Nhap(float[][500], int&, int&);
int KiemTraCon(float[][500], int, int, int, int);
void DuongDau(float[][500], int, int, int&, int&);
void Xuat(float[][500], int, int);

int main()
{
    float a[500][500];
    int m, n;
    Nhap(a, m, n);
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

void DuongDau(float a[][500], int m, int n, int& d, int& c)
{
    for (int d = 0; d < m - 2; d++)
        for (int c = 0; c < n - 2; c++)
            if (KiemTraCon(a, m, n, d, c) == 1)
                return;
    d = c = -1;
}

int KiemTraCon(float a[][500], int m, int n, int d, int c)
{
    int flag = 1;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if ((a[d + i][c + j]) <= 0)
            {
                flag = 0;
                return flag;
            }
    return flag;
}

void Xuat(float a[][500], int m, int n)
{
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            DuongDau(a, m, n, i, j);
            cout << setw(8) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}