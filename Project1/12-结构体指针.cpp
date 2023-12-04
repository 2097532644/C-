#include <iostream>
using namespace std;

struct Student{
	string name;
	int age;
	double score;
};

int main() {
	Student stu = { "张三", 18, 100 };
	Student * p = &stu;

	cout << "姓名:" << p->name << "年龄:" << p->age << "分数:" << p->score;
}