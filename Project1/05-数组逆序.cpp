#include<stdio.h>
#include<iostream>
using namespace std;

int main() {
	// С�������
	/*int arr[5] = { 300,350,200,400,250 }, max=0;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	cout << "����:" << max << endl;*/


	// ��������
	int arr[5] = { 1,3,2,5,4 };
	int temp = 0;
	for (int i = 0; i < 5/2; i++) {
		temp = arr[i];
		arr[i] = arr[4-i];
		arr[4-i] = temp;
	}
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << endl;
	}

}