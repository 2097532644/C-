#include <iostream>
using namespace std;

struct Student{
	string name;
	int age;
	double score;
};

int main() {
	Student stu = { "����", 18, 100 };
	Student * p = &stu;

	cout << "����:" << p->name << "����:" << p->age << "����:" << p->score;
}