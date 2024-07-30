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

void Cau_8(int a[][100], int& m, int& n) {
	for (int i = 0; i < m; ++i) {
		bool allEven = true;
		for (int j = 0; j < n; ++j) {
			if (a[i][j] % 2 != 0) {
				allEven = false;
				break;
			}
		}
		if (allEven) {
			cout << "Dong chi chua toan so chan la: ";
			for (int j = 0; j < n; ++j) {
				cout << a[i][j] << " ";
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

string doiChuHoaDauMoiTu(const string& chuoi) {
	string ketQua = chuoi;
	bool canVietHoa = true;

	for (size_t i = 0; i < ketQua.length(); ++i) {
		if (isspace(ketQua[i])) {
			canVietHoa = true;  
		}
		else if (canVietHoa) {
			ketQua[i] = toupper(ketQua[i]);
			canVietHoa = false;
		}
		else {
			ketQua[i] = tolower(ketQua[i]);
		}
	}

	return ketQua;
}

string chuanHoaChuoi(const string& chuoi) {
	string ketQua;
	bool trongTu = false;  
	bool khoangTrangTruoc = true;  

	for (size_t i = 0; i < chuoi.length(); ++i) {
		if (isspace(chuoi[i])) {
			if (trongTu) {
				khoangTrangTruoc = true;
				trongTu = false;
			}
		}
		else {
			if (khoangTrangTruoc && !ketQua.empty()) {
				ketQua += ' ';  
			}
			ketQua += chuoi[i];
			khoangTrangTruoc = false;
			trongTu = true;
		}
	}

	return ketQua;
}


int main() {
	string chuoi;
	cout << "Nhap chuoi: ";
	getline(cin, chuoi);
	string ketQua = chuanHoaChuoi(chuoi);
	cout << "chuoi sau khi chuan hoa la: '" << ketQua << "'" << endl;
	return 0;
}

//0    1     2
//3    4     5
//6    7     8