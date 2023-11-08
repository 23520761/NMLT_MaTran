#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
void Xoay90(float[][500], int&, int&);
void Xoay180(float[][500], int&, int&);
void Xuat(float[][500], int, int);

int main()
{
    float a[500][500];
    int m, n;
    Nhap(a, m, n);
    Xuat(a, m, n);
    Xoay180(a, m, n);
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

void Xoay90(float a[][500], int& m, int& n)
{
    float b[500][500];
    int m1 = n;
    int n1 = m;
    for (int i = 0; i < m1; i++)
        for (int j = 0; j < n1; j++)
            b[i][j] = a[j][n - 1 - i];
    m = m1;
    n = n1;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = b[i][j];
}

void Xoay180(float a[][500], int& m, int& n)
{
    Xoay90(a, m, n);
    Xoay90(a, m, n);
}

void Xuat(float a[][500], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout<< a[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}
