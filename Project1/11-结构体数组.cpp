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
		{"����", 18, 100.0},
		{"����", 20, 85.5},
		{"����", 21, 60.5}
	};

	stuArray[2].name = "����";


	for (int i = 0; i < 3; i++) {
		cout << "����:" << stuArray[i].name << "����:" << stuArray[i].age <<"�ɼ�:" << stuArray[i].score << endl;
	}
}