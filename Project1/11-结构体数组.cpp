#include <iostream>
#include <string>
using namespace std;

struct Student {
	string name;
	int age;
	double score;
};

int main() {
	struct Student stuArray[3] =
	{
		{"张三", 18, 100.0},
		{"李四", 20, 85.5},
		{"王五", 21, 60.5}
	};

	stuArray[2].name = "赵六";


	for (int i = 0; i < 3; i++) {
		cout << "姓名:" << stuArray[i].name << "年龄:" << stuArray[i].age <<"成绩:" << stuArray[i].score << endl;
	}
}