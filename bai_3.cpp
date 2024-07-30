#include<iostream>
#include <string>
#include<cctype>
using namespace std;

bool isNumeric(const string& s) {
    for (char c : s) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}

int main() {
    string s;
    cout << "Nhap chuoi can kiem tra: ";
    cin >> s;
    if (isNumeric(s)) {
        cout << "chuoi chua toan ky tu so";
    }
    else {
        cout << "Chuoi khong chua toan ky tu so";
    }
    return 0;
}