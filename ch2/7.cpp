/*
	Author: RexSkz
	Chap 2 Prob 7
*/

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main() {
	char filename[100], in[100], out[100];
	cout << "Input file path: ";
	cin >> filename;
	ifstream fin;
	ofstream fout;
	fin.open(filename);
	fout.open(strcat(filename, ".pack"));
	while (!fin.eof()) {
		fin.getline(in, 100, '\n');
		for (unsigned int i = 0; i < strlen(in); ++i) {
			out[i] = in[i] + 2;
		}
		out[strlen(in)] = '\0';
		fout << out << endl;
	}
	fin.close();
	fout.close();
	return 0;
}
