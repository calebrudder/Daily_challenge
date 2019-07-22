//Daily Challenge 1
//Your goal is to create a function that removes the first and last letters of a string. 
//Strings with two characters or less are considered invalid. You can choose to have your 
//function return null or simply ignore.
//Caleb Rudder
//07/22/2019

#include <iostream>
#include <string>
using namespace std;


int main(){

	string prompt = "Enter a string: ";
	string userInput;

	cout << prompt << endl;
	getline(cin,userInput);

	if (userInput.length() > 2) {
		
		userInput = userInput.substr(1, (userInput.length() - 2));

	}
	
	cout << userInput;
}
