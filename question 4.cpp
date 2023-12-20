#include <iostream>
using namespace std;
int main() {
	int N;
	cout << "Enter a positive integer: ";
	cin >> N;
	if (N <= 1) {
		cout << "Please enter a positive integer greater than 1." << endl;
		return 1;
	}
	int bigN = 0
		int currentN = N - 1
		while (currentN >= 2 && bigN == 0) {
			bool isPrime = true;
			for (int i = 2; i < currentN; ++i) {
				if (currentN % i == 0) {
					isPrime = false;
					break;
				}
			}
			if (isPrime) {
				bigN = currentN;
			}
			--currentN;
		}
	if (bigN != 0) {
		cout << "The largest prime number less than or equal to " << N << " is: " << bigN
			<< endl;
	}
	else {
		cout << "There is no prime number less than or equal to " << N << "." << endl;
	}
	return 0;
}





