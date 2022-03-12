#include <iostream>

using namespace std;

int main() {
	int n1, n2, n3, i, numbey;
	n1 = 0;
	n2 = 1;
	cout << "Please enter the numbers of elements: ";
	cin >> numbey;
	cout << n1 << n2 << " ";
	for (i = 2; i < numbey; i++) {
		n3 = n1 + n2;
		cout << n3 << " ";
		n1 = n2;
		n2 = n3;
	}
	return 0;
}
