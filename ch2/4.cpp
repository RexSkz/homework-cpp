/*
	Author: RexSkz
	Chap 2 Prob 4
*/

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {
	char filename[100], content[100];
	cout << "Input file path: ";
	cin >> filename;
	ifstream fin;
	fin.open(filename);
	int count = 0;
	while (!fin.eof()) {
		++count;
		fin.getline(content, 100, '\n');
		cout << count << '\t' << content;
		if (count % 24 == 0) {
			/*cin.getline(content, 5, '\n');*/
			system("pause");
		}
		cout << endl;
	}
	fin.close();
	return 0;
}
