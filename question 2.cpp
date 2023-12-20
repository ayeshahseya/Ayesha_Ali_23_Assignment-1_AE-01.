#include <iostream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;

    cout << "Enter a word: ";
    cin >> word;

    string result; //for the final word without duplicates 

    for (char letter : word) { //loops through all the letters in the word 
        bool dupeletter = false;

        for (char otherletter : result) {

            if (toupper(letter) == toupper(otherletter)) { //function that makes all the letters 
                dupeletter = true;
                break;
            }
        }

        if (!dupeletter) {
            result += letter;
        }
    }
    cout << "Your word without duplicate letters: " << result << endl;
    return 0;
}




