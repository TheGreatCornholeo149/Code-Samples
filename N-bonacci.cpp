#include<iostream>
#include<vector>
using namespace std;

/* N-bonacci numbers are generalisations of the fibonacci sequence, where the next term is always the sum of the previous N terms. 
	The initial 10 terms of the first 5 N-bonacci sequences are therefore:
	1-bonacci = 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
	2-bonacci = 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
	3-bonacci = 0, 0, 1, 1, 2, 4, 7, 13, 24, 44, ...
	4-bonaaci = 0, 0, 0, 1, 1, 2, 4, 8, 15, 29, ...
	5-bonacci = 0, 0, 0, 0, 1, 1, 2, 4, 8, 16, ...
	The following code contains a function that returns the kth term of the N-bonacci sequence, for two integer arguments N and k.
*/

int N_bonacci(int a, int b) {
	int m = a; int n = b;
	vector<int> bonacci;

	for (int i = 1; i <= a; i++) {
		if (i == m) {
			bonacci.push_back(1);
		}
		else {
			bonacci.push_back(0);
		}
	}

	int c = b - a;
	for (int i = 0; i < c; i++) {
		int temp = 0;
		for (int j = 0; j < a; j++) {
			int j2 = j + i;
			temp += bonacci[j2];
		}
		bonacci.push_back(temp);
	}

	int fina = n - 1;
	return bonacci[fina];
}

int main() {
	int N = 4; int K = 9;
	int j = N_bonacci(N, K);

	cout << j;


}