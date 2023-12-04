#include <iostream>
#include <string>
using namespace std;
#define week 7
// time系统时间头文件包含
#include<ctime>


int main()
{
	// 随机数种子 利用当前系统时间生成随机数，防止每次随机数都一样
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;

	int val = 0;
	

	while (true) {
		cin >> val;
		if (val > num) {
			cout << "猜测过大" << endl;
		}
		else if (val < num) {
			cout << "猜测过小" << endl;
		}
		else {
			cout << "恭喜，猜对了！";
			break;
		}
	}
}