#include <iostream>


// simplify cout
using namespace std;


int main()
{
	cout << "Mietin jotain numeroa koita arvata se :-)";


	// rand gives u something in the thousands
	// use modulo to shave off all 101s and get remainder (something between 0 and 100)
	int luku = rand() % 101;

	// number of guesses
	int lkm = 0;

	int guess = -5;

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

		// correct
		if (guess == luku)
		{
			cout << "\noikein !!! mietin lukua " << luku << "\n veikkausten lukumäärä: " << lkm;
			break;
		}
		// too high
		else if (guess > luku)
		{
			cout << "\nväärin !! lukuni on pienempi kuin " << guess;
		}
		// too low
		else
		{
			cout << "\nlukuni on suurempi kuin " << guess << " o_0";
		}
	}

	return 0;
}