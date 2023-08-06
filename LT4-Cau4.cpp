#include <iostream>
using namespace std;
//0850080030-Vo Thanh Luan-08THMT
//Bai 4
int tinhTongChuSoLe(int n) {
    int sum;
    sum = 0;
    while (n != 0) {
        int d = n % 10; 
        if (d % 2 != 0) {
            sum += d; 
        }
        n /= 10; 
    }
    return sum;
}

int main() {
    int n,sum;
    cout << "Nhap vao mot so nguyen: ";
    cin >> n;
    sum = tinhTongChuSoLe(n);
    cout << "Tong cac chu so le cua n la : "<< sum << endl;
    return 0;
}
