#include<iostream>
using namespace std;

void Nhap(float[][500], int&, int&);
void HoanVi(float&, float&);
void SapXep(float[][500], int, int);
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

void HoanVi(float& a, float& b)
{
    float temp = a;
    a = b;
    b = temp;
}

void SapXep(float a[][500], int m, int n)
{
    float b[500];
    int k = 0;
    for (int j = 1; j < n - 1; j++)
        if (a[0][j] > 0)
            b[k++] = a[0][j];
    for (int j = 1; j < n - 1; j++)
        if (a[m - 1][j] > 0)
            b[k++] = a[m - 1][j];
    for (int i = 0; i < m; i++)
        if (a[i][0] > 0)
            b[k++] = a[i][0];
    for (int i = 0; i < m; i++)
        if (a[i][n - 1] > 0)
            b[k++] = a[i][n - 1];

    // S?p x?p m?ng b t?ng d?n
    for (int i = 0; i < k - 1; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (b[i] > b[j])
                HoanVi(b[i], b[j]);
        }
    }

    k = 0;
    for (int j = 1; j < n - 1; j++)
        if (a[0][j] > 0)
            a[0][j] = b[k++];
    for (int j = 1; j < n - 1; j++)
        if (a[m - 1][j] > 0)
            a[m - 1][j] = b[k++];
    for (int i = 0; i < m; i++)
        if (a[i][0] > 0)
            a[i][0] = b[k++];
    for (int i = 0; i < m; i++)
        if (a[i][n - 1] > 0)
            a[i][n - 1] = b[k++];
}

void Xuat(float a[][500], int m, int n)
{
    SapXep(a, m, n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
