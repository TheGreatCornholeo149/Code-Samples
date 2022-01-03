#include <string>
#include<iostream>
#include <vector>
using namespace std;

class student {

public:
	int credits;
	string name; 

	void inputcredits();
	void inputname();
};
void student::inputcredits() {
	cout << "taken credits? ";
	cin >> credits;
}
void student::inputname() {
	cout << "name? ";
	cin >> name;
}

int main() {
	int number = 0;
	cout << "How many students' information do you want to input?\n";
	cin >> number;
	vector<student> students(number);

	for (int i = 0; i < number; i++) {
		cout << "Please input information for student " << i + 1 << "\n";
		students[i].inputname();
		students[i].inputcredits();
		cout << "\n";
	}
	for (int i = 0; i < students.size(); i++) {
		for (int j = i + 1; j < students.size(); j++) {
			string a1 = students[i].name; string b1 = students[j].name;
			char a2 = a1[0]; char b2 = b1[0];
			int a3 = (int)a2; int b3 = (int)b2;

			if (a3 > b3) {
				student temp = students[i];
				students[i] = students[j];
				students[j] = temp;
			}
		}
	}
	cout << "Printing student information by name order:\n";
	for (int i = 0; i < students.size(); i++) {
		cout << "name: " << students[i].name << "\ttaken credits: " << students[i].credits << "\n";
	}
	cout << "\n";

	for (int i = 0; i < students.size(); i++) {
		for (int j = i + 1; j < students.size(); j++) {
			int a = students[i].credits; int b = students[j].credits;
			if (a > b) {
				student temp = students[i];
				students[i] = students[j]; 
				students[j] = temp;
			}
		}
}
	cout << "Printing student information by credits order:\n";
	for (int i = 0; i < students.size(); i++) {
		cout << "name: " << students[i].name << "\ttaken credits: " << students[i].credits << "\n";
	}

}

//g++ source1.cpp -o source