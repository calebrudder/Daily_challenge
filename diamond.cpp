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
	}
}