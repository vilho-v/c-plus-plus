#include <iostream>
using namespace std;



int main() {
	


	cout << "1." << endl;

	int i = 5;

	int* j = &i;
	cout << "i = " << i << endl;
	cout << "j (osoitin) = " << *j << endl;


	cout << "2." << endl;

	double d = 3.14;

	cout << "d = " << d << endl;
	double& p = d;

	p *= 2; // käytä viitettä sen muuttamiseen

	cout << "p (viite) = " << p << endl;



	cout << "3." << endl;

	int arr[5] = { 1, 2, 3, 4, 5 };

	j = arr;

	for (j; j < arr + 5; ++j) {
		cout << "arr[" << j - arr << "] = " << *j << endl;
	}

	return 0;
}