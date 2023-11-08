#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void Nhap(string filename, int a[][500], int& m, int& n);
void Xuat(int a[][500], int m, int n);

int main()
{
    int a[500][500];
    int m, n;
    string filename;

    cout << "nhap ten tap tin : ";
    cin >> filename;

    Nhap(filename, a, m, n);
    Xuat(a, m, n);

    return 0;
}

void Nhap(string filename, int a[][500], int& m, int& n)
{
    ifstream fi(filename);

    if (!fi.is_open()) {
        cout << "Khong the mo tap tin " << endl;
        return;
    }

    fi >> m;
    fi >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            fi >> a[i][j];
        }
    }

    fi.close();
}

void Xuat(int a[][500], int m, int n)
{
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) 
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
