#include <iostream>
#include <vector> 
using namespace std;
/* The following code contains a function that takes an integer "a" that breaks up "a" into parts, and, from those parts that add up to it, try 
to create the biggest product.
Example: split(10) ➞ 36
 3 * 3 * 4 = 36
*/

int split(int a1) {

	int a = a1;
	int tnum = 0;

	if (a == 1)
		return a;

	if (a <= 4 && a > 1) {
		tnum = a - 1;
		return tnum;
	}

	else {
		tnum = a / 3;
		vector<int> num;
		for (int i = 0; i < tnum; i++) {
			num.push_back(3);
		}
		int sum = 0;
		for (int i = 0; i < num.size(); i++) {
			sum += num[i];
		}
		if (a - sum == 2) {
			num.push_back(2);
		}
		else {
			while (sum < a) {
				int j = 0;
				num[j] += 1; sum += 1;
				j++;
			}
		}
		int product = 1;
		for (int i = 0; i < num.size(); i++) {
			product *= num[i];
		}
		return product;
	}
	
}


int main() {

	int a = 16;
	int tnum = split(a);
	cout << tnum;

}