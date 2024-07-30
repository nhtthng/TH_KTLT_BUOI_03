#include<iostream>
using namespace std;

bool isOddColumn(int a[][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        if (a[i][n] % 2 == 0) {
            return false;
        }
    }
    return true;
}

void Rand(int a[][100], int& m, int& n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % (100 + 1);
        }
    }
}

void Cau_1(int a[][100], int& m, int& n) {
    for (int j = 0; j < n; j++) {
        if (isOddColumn(a, m, j)) {
            cout << "Cột " << j + 1 << " chỉ chứa số lẻ: ";
            for (int row = 0; row < m; ++row) {
                cout << a[row][j] << " ";
            }
            cout << endl;
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
    int m, n;
    cout << "Nhap so luong dong: ";
    cin >> m;
    cout << "Nhap so luong cot: ";
    cin >> n;
    Rand(a, m, n);
    Xuat_Mang(a, m, n);
    Cau_1(a, m, n);
    return 0;
}