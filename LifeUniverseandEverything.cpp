#include <iostream>
using namespace std;

int main() {

	int num;

	do {
		cin >> num;

		if (num != 42)
			cout << num << endl;
	} while (num != 42);


	return 0;
}