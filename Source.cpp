#include<iostream>
#include<string>
#include<vector>
using namespace std;

void Ceasars_Cipher(string i, int j) {
	string b = i; 
	vector<char> a(b.begin(), b.end());
	int c = j;

	for (int i = 0; i < a.size(); i++) {
		int temp = (int)a[i];
		int j = 0;

		if (temp >= 97 && temp <= 122) {
			temp = temp + c;
			if (temp > 122) {
				j = temp - 123;
				temp = 97 + j;
			}
		}
		else if (temp >= 65 && temp <= 90) {
			temp = temp + c;
			if (temp > 90) {
				j = temp - 91;
				temp = 65 + j;
			}
		}
		a[i] = (char)temp;
		cout << a[i];
	}
}


int main() {

	string b = "A friend in need is a friend indeed";
	int c = 20;
	Ceasars_Cipher(b, c);
	
}