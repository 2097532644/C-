#include <iostream>
using namespace std;


int main() {
	int num = 100, a = 0, b=0, c=0, sum =0;

	do {
		a = num / 100;// ȡ��λ
		b = (num / 10) % 10; // ȡʮλ
		c = num  % 10;
		sum = (a * a * a) + (b * b * b) + (c * c * c);
		if (sum == num){
			cout << num << endl;
		}
		num++;
	} while (num < 1000);
}