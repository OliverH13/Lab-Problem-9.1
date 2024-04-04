
#include <iostream>

using namespace std;

int main() {

	srand(time(NULL));
	int random_integers[10];

	for (int x = 0; x < 10; x++) {
		random_integers[x] = rand() % 9000 + 1000;
	}
	
	cout << "The random integers: ";

	for (int x = 0; x < 10; x++) {
		cout << random_integers[x] << "  ";
	}
}