#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<ctime>

using namespace std;
void Tao(float[][10], int&, int&);
void Xuat(float[][10], int, int);


int main()
{
	float a[10][10];
	int n;
	int k;
	Tao(a, n, k);
	Xuat( a, n, k);
	return 0;
}

void Tao(float a[][10], int& n, int& k)
{
	cout << "nhap hang ";
	cin >> n;
	cout << "nhap cot ";
	cin >> k;
	srand(time(NULL));
	for (int i = 1; i < n + 1; i++)
		for (int j = 1; j < k + 1; j++)
			a[i][j] = rand() / (RAND_MAX / 200.0) - 100.0;
}

void Xuat(float a[][10], int n, int k)
{
	for (int i = 1; i < n + 1; i++)
		for (int j = 1; j < k + 1; j++)
			cout<<"a["<<i<<"]"<<"["<<j<<"]"<<a[i][j]<<endl;
}


