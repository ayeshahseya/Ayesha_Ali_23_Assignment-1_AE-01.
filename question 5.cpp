#include <iostream>
using namespace std;
int main() {
	int A[6];
	for (int f = 0; f < 6; f++) {
		cout << "Enter values for your array: ";
		cin >> A[f];
	}
	for (int i = 0; i < 6 - 1; ++i) {
		for (int j = 0; j < 6 - i - 1; ++j) {
			if (A[j] > A[j + 1]) {
				int temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
	}
	cout << "Your sorted array is: ";
	for (int i = 0; i < 6; ++i) {
		cout << A[i] << " ";
	}
	cout << endl;
	return 0;
}





