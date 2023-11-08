#include<iostream>
#include<iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
float Dong(float[][500], int, int, int);
float Cot(float[][500], int, int, int);
void XayDung(float[][500], int, int, int&, int&, float[][500]);
void Xuat(float[][500], int, int);

int main()
{
    float a[500][500], b[500][500];
    int m, n;
    Nhap(a, m, n);
    XayDung(a, m, n, m, n, b);  // Call XayDung to populate b
    Xuat(b, m, n);
    return 0;
}

void Nhap(float a[][500], int& m, int& n)
{
    cout << "nhap hang ";
    cin >> m;
    cout << "nhap cot ";
    cin >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            cout << "nhap a[" << i << "]" << "[" << j << "]";
            cin >> a[i][j];
        }
}

float Dong(float a[][500], int m, int n, int d)
{
    float lc = a[d][0];
    for (int j = 0; j < n; j++)
        if (lc < a[d][j])
            lc = a[d][j];
    return lc;
}

float Cot(float a[][500], int m, int n, int c)
{
    float lc = a[0][c];
    for (int i = 0; i < m; i++)
        if (lc < a[i][c])
            lc = a[i][c];
    return lc;
}

void XayDung(float a[][500], int m, int n, int& k, int& l, float b[][500])
{
    k = m;
    l = n;
    for (int i = 0; i < k; i++)
        for (int j = 0; j < l; j++)
        {
            float lnd = Dong(a, m, n, i);
            float lnc = Cot(a, m, n, j);
            if (lnd > lnc)
                b[i][j] = lnd;
            else
                b[i][j] = lnc;
        }
}

void Xuat(float b[][500], int k, int l)
{
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < l; j++) {
            cout << setw(8) << b[i][j];
        }
        cout << endl;
    }
}
