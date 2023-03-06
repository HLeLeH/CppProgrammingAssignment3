#include<iostream>

using namespace std;

int main() {
	int a, b;
	cout <<"Nhập vào số thứ nhất: ";
    cin >> a;
    cout << "Nhập vào số thứ hai: ";
    cin >> b;
	int c = a;
	a = b;
	b = c;
	cout << "Sau khi đổi: \nSố thứ nhất = " << a << " \nSố thứ hai = " << b;
	return 0;
}