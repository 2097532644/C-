#include <iostream>
using namespace std;
#include <string>

struct Student {
	string name;
	int age;
	double score;
}s3;

int main() {
	// 1. struct Student s1
	struct Student s1;
	s1.name = "����";
	s1.age = 18;
	s1.score = 100.0;

	// 2. struct Student s2 = {....}
	struct Student s2 = { "����", 18, 80.0 };
	// 3. �ڶ���ṹ��ʱ˳�㴴���ṹ�����
	s3.name = "����";
	s3.age = 20;
	s3.score = 60.5;
}