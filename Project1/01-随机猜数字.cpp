#include <iostream>
#include <string>
using namespace std;
#define week 7
// timeϵͳʱ��ͷ�ļ�����
#include<ctime>


int main()
{
	// ��������� ���õ�ǰϵͳʱ���������������ֹÿ���������һ��
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;

	int val = 0;
	

	while (true) {
		cin >> val;
		if (val > num) {
			cout << "�²����" << endl;
		}
		else if (val < num) {
			cout << "�²��С" << endl;
		}
		else {
			cout << "��ϲ���¶��ˣ�";
			break;
		}
	}
}