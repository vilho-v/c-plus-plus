#include <iostream>


// simplify cout
using namespace std;


int RandomNumber()
{
	cout << "ANNA mulle kaksi lukua niin alan miettimään jotain lukua niide väliltä";


	// err checker
start:

	cout << "\n luku 1 (PIENIN) ->";
	int first = 0;

	cin >> first;

	if (cin.fail())
	{
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "anna numeroluku jooko :p";
		goto start;
	}

	int last = 0;
	cout << "\n luku KAKSI (SUURIN) ->>";
	cin >> last;

	if (cin.fail())
	{
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "anna numeroluku jooko :p";
		goto start;
	}

	return rand() % first + last;
}


bool NumberChecker(int guess, int ans)
{
	// corect
	if (guess == ans)
	{
		cout << "\noikein !!! mietin lukua " << ans;
		return true;
	}
	// too high
	else if (guess > ans)
	{
		cout << "\nväärin !! lukuni on pienempi kuin " << guess;
		return false;
	}
	// too low
	else
	{
		cout << "\nlukuni on suurempi kuin " << guess << " o_0";
		return false;
	}


	cout << "wat";
	return false;
}


