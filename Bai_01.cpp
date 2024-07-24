#include <iostream>
using namespace std;

void Cau_1(int a[][100], int& m, int &n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] = rand() % (100 + 1);
		}
	}
}

void Cau_2(int a[][100], int& m, int& n) {
	for (int i = 0; i < m;i++) {
		int tongDong = 0;
		for (int j = 0; j < n; j++) {
			tongDong += a[i][j];
		}
		cout << "Tong dong [" << i + 1 << "] la: " << tongDong << endl;
	}
}

void Cau_3(int a[][100], int& m, int& n) {
	for (int j = 0; j < n; j++) {
		int BiggestInt = -1;
		for (int i = 0; i < m-1; i++) {
			if (a[i][j] < a[i + 1][j]) {
				BiggestInt = a[i + 1][j];
			}
			else {
				BiggestInt = a[0][j];
			}
		}
		//BiggestInt = a[0][j];
		cout << "Phan tu lon nhat tai cot thu [" << j << "] la: " << BiggestInt << endl;
	}
}

void Cau_4(int a[][100], int& m, int& n) {
	cout << "Xuat cac phan tu thuoc duong bien tren la: ";
	for (int j = 0; j < n; j++) {
		cout << a[0][j] << " ";
	}
	cout << endl;
	cout << "Xuat cac phan tu thuoc duong bien ben phai la: ";
	for (int i = 0; i < m; i++) {
		cout << a[i][n - 1] << " ";
	}
	cout << endl;
	cout << "Xuat cac phan tu thuoc duong bien ben trai la: ";
	for (int i = 0; i < m; i++) {
		cout << a[i][0] << " ";
	}
	cout << endl;
	cout << "Xuat cac phan tu thuoc duong bien duoi la: ";
	for (int j = 0; j < n; j++) {
		cout << a[m - 1][j] << " ";
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
	Cau_4(a, m, n);
	//Cau_2(a, m, n);
	//Cau_3(a, m, n);
	return 0;
}

//0    1     2
//3    4     5
//6    7     8