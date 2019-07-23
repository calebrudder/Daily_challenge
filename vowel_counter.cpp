//Daily Challenge 3
//Write a function that returns the number (count) of vowels in a given string.
//Letters considered as vowels are: a, i, e, o, and u. The function should be able to take all types of characters as input,
//including lower case letters, upper case letters, symbols, and numbers.

#include <iostream>
#include <string>
#include <array>
using namespace std;

static void vowel_count(string);

void main() {
	
	string userInput;

	cout << "Enter a string: ";
	getline(cin,userInput);

	vowel_count(userInput);
}

static void vowel_count(string userInput) {

	int alphaArray [26];
	
	for (int i = 0; i < 26; i++) {
		alphaArray[i] = 0;
	}

	for (int index = 0; index < userInput.length(); index++) {

		userInput[index] = tolower(userInput[index]);
	}

	for (int characterIndex = 0; characterIndex < userInput.length(); characterIndex++) {

		alphaArray[userInput[characterIndex] - 97]++;
	}

	int vowels = alphaArray[0] + alphaArray[4] + alphaArray[8] + alphaArray[14] + alphaArray[20];

	cout << "Total number of vowels" << vowels << endl;
	cout << "Number of A's: " << alphaArray[0] << endl;
	cout << "Number of E's: " << alphaArray[4] << endl;
	cout << "Number of I's: " << alphaArray[8] << endl;
	cout << "Number of O's: " << alphaArray[14] << endl;
	cout << "Number of U's: " << alphaArray[20] << endl;
}
