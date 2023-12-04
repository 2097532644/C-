#include<iostream>
#include "swap.h"
using namespace std;

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;

	cout << a << b << endl;
}

int main() {
	swap(1, 2);
}


