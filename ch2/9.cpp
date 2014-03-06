/*
	Author: RexSkz
	Chap 2 Prob 9
*/

#include <iostream>
#include <fstream>
#include <list>

using namespace std;

struct Student{
	char name[21];
	int age;
	char address[51];
	char phone[14];
	char email[51];
};

list<Student> stuList;

int main() {
	cout << "Input save file path: ";
	char filename[81];
	cin >> filename;
	ofstream fout;
	fout.open(filename);
	bool success;
	char name[21];
	for (;;) {
		int cmd;
		cout << "You must type 6 when all operation finished." << endl;
		cout << "1: Append record\t2: Show all record" << endl;
		cout << "3: Edit a record\t4: Search by name" << endl;
		cout << "5: Delete a record\t6: Exit" << endl;
		cout << "Input a command number: ";
		cin >> cmd;
		switch (cmd) {
		case 1:
			cout << "Input name, age, address, phone and email:" << endl;
			Student temp;
			cin >> temp.name >> temp.age >> temp.address >> temp.phone >> temp.email;
			if (temp.age < 0 || temp.age > 200) {
				cout << "Error age range. Continue." << endl;
			}
			else {
				stuList.push_back(temp);
				cout << "Append successful." << endl;
			}
			break;
		case 2:
			success = false;
			for (list<Student>::iterator i = stuList.begin(); i != stuList.end(); ++i) {
				cout << i->name << " ";
				cout << i->age << " ";
				cout << i->address << " ";
				cout << i->phone << " ";
				cout << i->email << endl;
				success = true;
			}
			if (!success) {
				cout << "No record yet." << endl;
			}
			break;
		case 3:
			cout << "Input a name: ";
			cin >> name;
			success = false;
			for (list<Student>::iterator i = stuList.begin(); i != stuList.end(); ++i) {
				if (strcmp(name, i->name) == 0) {
					cout << "Input name, age, address, phone and email:" << endl;
					Student temp;
					cin >> temp.name >> temp.age >> temp.address >> temp.phone >> temp.email;
					if (temp.age < 0 || temp.age > 200) {
						cout << "Error age range. Continue." << endl;
					}
					else {
						*i = temp;
						success = true;
						cout << "Edit successful." << endl;
						break;
					}
				}
			}
			if (!success) {
				cout << "No matches found." << endl;
			}
			break;
		case 4:
			cout << "Input a name: ";
			cin >> name;
			success = false;
			for (list<Student>::iterator i = stuList.begin(); i != stuList.end(); ++i) {
				if (strcmp(name, i->name) == 0) {
					cout << i->name << " ";
					cout << i->age << " ";
					cout << i->address << " ";
					cout << i->phone << " ";
					cout << i->email << endl;
					break;
				}
			}
			if (!success) {
				cout << "No matches found." << endl;
			}
			break;
		case 5:
			cout << "Input a name: ";
			cin >> name;
			success = false;
			for (list<Student>::iterator i = stuList.begin(); i != stuList.end(); ++i) {
				if (strcmp(name, i->name) == 0) {
					stuList.erase(i);
					break;
				}
			}
			if (!success) {
				cout << "No matches found." << endl;
			}
			break;
		case 6:
			for (list<Student>::iterator i = stuList.begin(); i != stuList.end(); ++i) {
				fout << i->name << endl << i->age << endl << i->address << endl << i->phone << endl << i->email << endl << endl;
			}
			cout << "Data saved, Exiting..." << endl;
			return 0;
			break;
		default: cout << "Wrong command number!" << endl << endl;
		}
	}
	fout.close();
	return 0;
}
