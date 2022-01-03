#include<iostream>
#include<string>
#include<vector>
using namespace std;

/*The following code contains a function that takes a string "b" (text to be encrypted) and an integer "c" (the rotation total) and shifts each letter
 in the string down the alpabet a number of times equal to integer c.  If the shift were to move past the end of the alphabet, the function just rotates back 
 to the front of the alphabet.
Example: caesarCipher("middle-Outz", 2) ➞ "okffng-Qwvb" */

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
	int c = 10;
	Ceasars_Cipher(b, c);
	
}