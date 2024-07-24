#include <iostream>
using namespace std;

void Cau_1(int a[][100], int& m, int &n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] = rand() % (100 + 1);
		}
	}
}

void Xuat_Mang(int a[][100], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << "gia tri cua dong [" << i << "] cot [" << j << "] la: " << a[i][j] << endl;
		}
	}
}

int main() {
	int a[100][100];
	int n, m;
	cout << "Nhap so luong dong: ";
	cin >> m;
	cout << "Nhap so luong cot: ";
	cin >> n;

	Cau_1(a, m, n);
	Xuat_Mang(a, m, n);
	return 0;
}