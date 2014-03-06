/*
	Author: RexSkz
	Chap 2 Prob 10
*/

#include <iostream>
#include <fstream>

using namespace std;

struct Student{
	char name[21];
	int age;
	char address[51];
	char phone[14];
	char email[51];
};

int main() {
	cout << "Input save file path: ";
	char filename[81];
	cin >> filename;
	ifstream fin;
	fin.open(filename);
	int count = 0;
	double age = 0;
	Student s;
	while (!fin.eof()) {
		++count;
		fin >> s.name >> s.age >> s.address >> s.phone >> s.email;
		age += s.age;
	}
	age /= count;
	fin.close();
	cout << "Total " << count << " student(s), average age is " << age << "ages." << endl;
	return 0;
}
