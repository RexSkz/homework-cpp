/*
	Author: RexSkz
	Chap 3 Prob 5
*/

#include <iostream>
#include <vector>

using namespace std;

class InvoiceItem{
public:
	InvoiceItem(string name, double price) {
		this->name = name;
		this->price = price;
	}
	string getName() { return this->name; }
	double getPrice() { return this->price; }
private:
	string name;
	double price;
};

class SalesMan{
public:
	SalesMan(vector<InvoiceItem> list) { this->available = list; }
	void ask() {
		cout << "What kind of item would you like, or just \"nothing\"?" << endl;
		for (;;) {
			string name;
			cin >> name;
			if (name == "nothing") {
				break;
			}
			bool success = false;
			InvoiceItem *j;
			for (vector<InvoiceItem>::iterator i = available.begin(); i != available.end(); ++i) {
				if (i->getName() == name) {
					success = true;
					j = &(*i);
				}
			}
			if (!success) {
				cout << "Sorry, we don't have " << name << "." << endl;
			}
			else {
				cout << "How many " << name << " do you want?" << endl;
				int number;
				cin >> number;
				list.push_back(make_pair(j, number));
			}
			cout << "Anything else, or just \"nothing\"?" << endl;
		}
	}
	void calcAndOutput() {
		double total = 0;
		for (vector< pair<InvoiceItem *, int> >::iterator i = list.begin(); i != list.end(); ++i) {
			double price = i->first->getPrice();
			price *= 1.3;
			price *= i->second;
			price *= 1.06;
			total += price;
		}
		cout << "Total price: " << total << endl;
	}
private:
	vector<InvoiceItem> available;
	vector< pair<InvoiceItem *, int> > list;
};

int main() {
	vector<InvoiceItem> list;
	list.push_back(InvoiceItem("mouse", 50));
	list.push_back(InvoiceItem("keyboard", 100));
	list.push_back(InvoiceItem("cdrom", 200));
	list.push_back(InvoiceItem("screen", 300));
	SalesMan salesman(list);
	salesman.ask();
	salesman.calcAndOutput();
	return 0;
}
