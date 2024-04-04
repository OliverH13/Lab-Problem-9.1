
#include <iostream>

using namespace std;

int main() {

	// seeding
	srand(time(NULL));
	int random_integers[10];

	// "Randomness" for the array
	for (int x = 0; x < 10; x++) {
		random_integers[x] = rand() % 9000 + 1000;
	}
	
	// Elements in order of appearance in the array, the random ten integers
	cout << "The random integers: ";
	for (int x = 0; x < 10; x++) {
		cout << random_integers[x] << "  ";
	}
	cout << endl;

	// Every element at an even index
	cout << "Even indicies:       ";
	cout << random_integers[1] << "  " << random_integers[3] << "  " << random_integers[5] << "  " << random_integers[7] << "  " << random_integers[9] << endl;


}