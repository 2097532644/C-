#include<iostream>
using namespace std;

int main() {
	int a = 10;
	int* p;
	p = &a;

	cout << "a�ĵ�ַ" << &a << endl;
	cout << "ָ��p" << p << endl;

	// ������
	*p = 1000;
	cout << a << endl;
	cout<< *p << endl;

	cout << sizeof(int*) << endl;

	// const int * p = &a; // ָ����Ըģ�ֵ���ܸ�
	// int * const p = &a; // ָ���ܸģ�ֵ���Ը�
	// const int * const p = &a; // ָ���ֵ�����ܸ�
}