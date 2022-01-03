#include<iostream>
#include<string>
using namespace std;
/* A word nest is created by taking a starting word, and generating a new string by placing the word inside itself. This process is then repeated.
Nesting 3 times with the word "incredible":
start  = incredible
first  = incre(incredible)dible
second = increin(incredible)credibledible
third  = increinincr(incredible)ediblecredibledible
The following code contains a function that takes two strings, one representing a starting word and the other representing a final word nest. The function returns 
true if the word nest is valid, false if the word nest is false. 
*/

bool validWordNest(string a, string b) {

	while (b.find(a) != string::npos) {

		b.replace(b.find(a), a.length(), "");

	}

	if (b.length() == 0) {
		return true;
	}
	else {
		return false;
	}

}

int main() {

	string b = "nonnonovnovnovelelelvelovelvel";
	string a = "novel";
	bool nest; 

	nest = validWordNest(a, b);
	
	if (nest == true) {
		cout << "true";
	}
	else {
		cout << "false";
	}

}