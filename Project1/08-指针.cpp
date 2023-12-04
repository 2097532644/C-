#include<iostream>
using namespace std;

int main() {
	int a = 10;
	int* p;
	p = &a;

	cout << "a的地址" << &a << endl;
	cout << "指针p" << p << endl;

	// 解引用
	*p = 1000;
	cout << a << endl;
	cout<< *p << endl;

	cout << sizeof(int*) << endl;

	// const int * p = &a; // 指向可以改，值不能改
	// int * const p = &a; // 指向不能改，值可以改
	// const int * const p = &a; // 指向和值都不能改
}