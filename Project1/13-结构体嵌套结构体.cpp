#include <iostream>
using namespace std;

struct Student {
	int id;
	string name;
	int age;
};


struct Teacher {
	int id;
	string name;
	int age;
	struct Student stu;
};


int main() {
	Teacher t;
	t.id = 10;
	t.name = "����";
	t.age = 50;
	t.stu.name = "С��";
	t.stu.age = 20;
}