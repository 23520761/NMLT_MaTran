#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void Nhap(double[][500], int&, int&);
void Xuat(double[][500], int, int);

int main()
{
    double a[500][500];
    int n;
    int k;
    Nhap(a, n, k);
    Xuat(a, n, k);
    return 0;
}

void Nhap(double a[][500], int& n, int& k)
{
    cin >> n;
    cin >> k;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < k; j++)
        {
            cout << "Nhap a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
}

void Xuat(double a[][500], int n, int k)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < k; j++)
        {
            cout << "a[" << i << "][" << j << "]: " << a[i][j] << endl;
        }
}
