#include <iostream>
using namespace std;
//0850080030-Vo Thanh Luan-08THMT
//Bai 2
int tinhTong(int n) {
    int sum = 0;

    while (n != 0) {
        int d = n % 10; 
        sum += d; 
        n /= 10; // Loại bỏ chữ số cuối cùng
    }
    return sum;
}

int main() {
    int n;

    cout << "Nhap vao mot so nguyen: ";
    cin >> n;

    int sum = tinhTong(n);
    cout << "Tong cac chu so cua so " << n << " la: " << sum << endl;

    return 0;
}
