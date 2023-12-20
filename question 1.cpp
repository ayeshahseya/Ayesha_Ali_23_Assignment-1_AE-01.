#include <iostream>
#include <string>
using namespace std;
int main() {
	string first, second;

	cout << "Enter your first word: ";
	cin >> first;

	cout << "Enter your second word: ";
	cin >> second;

	if (first == second) {
		int length = second.length(); 
		for (int i = 0; i < length / 2; ++i) {
			swap(second[i], second[length - i - 1]);
		}
		cout << "Your word reversed: " << second << endl;
	}
	else {
		cout << "Your words are not the same!" << endl;
	}
	return 0;
}



