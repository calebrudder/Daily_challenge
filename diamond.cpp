//Daily challenge 2
//Your task is to return a string that displays a diamond shape on the screen using asterisk (“*”) characters.
//The shape that the print method will return should resemble a diamond.
//A number provided as input will represent the number of asterisks printed on the middle line.
//The line above and below will be centered and will have two less asterisks than the middle line.
//This reduction will continue for each line until a line with a single asterisk is printed at the top and bottom of the figure.
//Return null if input is an even number or a negative number.

#include <iostream>
using namespace std;

int main() {

	int middleRow;
	cout << "Enter a number of astricks in the middle row" << endl;
	cin >> middleRow;

	if (middleRow % 2 != 0 && middleRow > 0) {

		for (int i = 0; i <= middleRow/2; i++) {
			int space = (middleRow / 2) -i;

			for (int k = 0; k < space; k++) {
				cout << " ";
			}
			
			for (int j = 0; j <= (i*2); j++) {
				cout << "*";
			}

			cout << endl;
		}

		int space = 1;
		for (int i = middleRow; i >= (middleRow / 2); i--) {
			

			for (int k = 0; k < space; k++) {
				cout << " ";
			}

			for(int j = 0; j < middleRow-(space*2); j++) {
				cout << "*";
			}
			space++;
			cout << endl;
		}
	}else{
		cout << "Number cannot be negative and must be greater than 0" <<endl;
	}
}
