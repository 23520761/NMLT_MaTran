#include<iostream>

using namespace std;
void Nhap(float[][500], int&, int&);
void XoaCot(float[][500], int, int&);
void Xuat(float[][500], int, int);

int main()
{
    float a[500][500];
    int m, n;
    Nhap(a, m, n);
    Xuat(a, m, n);
    XoaCot(a, m, n);
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

void XoaCot(float a[][500], int m, int& n)
{
    int c;
    cout << "Nhap cot can xoa";
    cin >> c;
    if (c >= n)
        cout << "Khong hop le !";
    else
    {
        for (int i = 0; i < m; i++)
            for (int j = c; j<n-1; j++)
                a[i][j] = a[i][j + 1];
    }
    n--;
}

void Xuat(float a[][500], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}