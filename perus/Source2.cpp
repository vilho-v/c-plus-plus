#include <iostream>;
#include "funktiot.h";


// simplify cout
using namespace std;


int main()
{
	
	// rand gives u something in the thousands
	// use modulo to shave off all 101s and get remainder (something between 0 and 100)
	int ans = RandomNumber();

	// number of guesses
	int lkm = 0;

	int guess;

	while (true)
	{
		lkm++;
		cout << "\nAnna luku -> ";
		cin >> guess;

		// if user gives non int input then ignore
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "anna numeroluku jooko :p";
			continue;
		}

		// if correct then break out of main loop
		if (NumberChecker(guess, ans)) break;

		
	}

	return 0;
}