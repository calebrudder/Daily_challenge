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