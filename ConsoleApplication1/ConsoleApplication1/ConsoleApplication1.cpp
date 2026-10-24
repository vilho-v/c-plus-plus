#include <iostream>
#include <windows.h>


using namespace std;


// all in one deluxe package with all assignments



// iam im declaringg
void Nimi();
void PintaAla();
void HemoglobinThing();
void YearThing();
void DivisionByThree();
void Inches();
void GallonThing();

string pos[] = {
	"joo",
	"juu",
	"yep",
	"y",
	"yes",
	"1",
	"j"
};
string neg[] = {
	"ei",
	"0",
	"no",
	"n",
	"en",
	"e"
};

int StringThing(string);
void InitThing();

int main()
{
	// init segment
	InitThing();
	
	int luku;
	
																		   

	cout << "Tässä on c++ tehtävät 1. tunnilta \n";
    cout << "Minkä tehtävän haluat nähdä? (1-7)\n";


	// Assignment segment

start:

    cin >> luku;

	// type mismatch
	if (cin.fail())
	{
		cout << "NUMERONA\n";
		cin.clear();
		cin.ignore(10000, '\n');
		goto start;
	}


	if (luku == 1)
	{
		Nimi();
	}
	else if (luku == 2)
	{
		PintaAla();
	}
	else if (luku == 3)
	{
		HemoglobinThing();
	}
	else if (luku == 4)
	{
		YearThing();
	}
	else if (luku == 5)
	{
		DivisionByThree();
	}
	else if (luku == 6)
	{
		Inches();
	}
	else if (luku == 7)
	{
		GallonThing();
	}

	// fucked number input
	else
	{

		cout << "anna ihan vaan luku 1-7\n";
		cin.clear();
		cin.ignore(10000, '\n');
		goto start;
	}


	// End segment
	string input;
	cout << "Haluutko kattoa toisen tehtävän ? joo tai ei\n";

	// after an assignment has been gone thru the user can repeat the process or exit
	// use a while loop to force an understandable response from the user
	while (true)
	{
		

		cin >> input;

		int thing = StringThing(input);
		// yes
		if (thing == 1)
		{
			cout << "Anna tehtävän numero taas (1-7)\n";
			goto start;
		}

		// invalid (repeat)
		else if (thing == -1)
		{
			cout << "Laita JOO tai EI kiitos\n";
			continue;
		}
		// no (0)
		else break;
	}
    return 0;
}



// 1
// prints out what u type in and says hi also
void Nimi()
{
	string name;
	// ask for the username
	cout << "anna sun NIMI  \n";
	// get the name
	cin >> name;
	cout << "Terve " + name << "\n";
}


// 2
// multiplication
void PintaAla()
{
	cout << "Pinta-ala laskuri \n";

	cout << "Anna suorakulmion leveys: \n";
	float width;
	cin >> width;

	cout << "Anna suorakulmion korkeus: \n";
	float height;
	cin >> height;

	// display da results
	cout << "suorakulmion pinta ala on: " << width * height << "\n";

}

// 3
// lets u know if ur hemoglobin value is too high or low
// discriminates by gender the old fashion way
void HemoglobinThing()
{
	string input;

	int flow = 117;
	int fhigh = 175;

	int mlow = 134;
	int mhigh = 195;

	while (true)
	{
		cout << "Laita m jos olet äijä ja f jos et \n";
		cin >> input;

		
		if (input == "m" || input == "f")
			break;
	}


	float fInput;

	if (input == "m")
		while (true)
		{
			cout << "Nyt anna hemoglobiiniarvosi \n";

			cin >> fInput;

			if (cin.fail())
			{
				cout << "NUMERONA\n";
				cin.clear();
				cin.ignore(10000, '\n');
				continue;
			}
			// go thru all possible answers and catch invalid non numeral response

			// too low
			if (fInput < mlow)
			{
				cout << "hemoglobiiniarvosi " << fInput << " on aivan liian matala!! \n" << "alaraja " << mlow << "\n";
				return;
			}
			// too high
			else if(fInput > mhigh)
			{
				cout << "hemoglobiiniarvosi " << fInput << " on aivan liian korkea!! \n" << "yläraja " << mhigh << "\n";
				return;
			}
			// just right
			else
			{
				cout << "hemoglobiiniarvosi " << fInput << " on sopiva !! \n";
				return;
			}

			
		}
	else if (input == "f")
	{
		while (true)
		{
			cout << "Nyt anna hemoglobiiniarvosi \n";

			cin >> fInput;

			if (cin.fail())
			{
				cout << "NUMERONA\n";
				cin.clear();
				cin.ignore(10000, '\n');
				continue;
			}

			// go thru all possible answers and catch invalid non numeral response

			// too low
			if (fInput < flow)
			{
				cout << "hemoglobiiniarvosi " << fInput << " on aivan liian matala!! \n" << "alaraja " << flow << "\n";
				return;
			}
			// too high
			else if (fInput > fhigh)
			{
				cout << "hemoglobiiniarvosi " << fInput << " on aivan liian korkea!! \n" << "yläraja " << fhigh << "\n";
				return;
			}
			// just right
			else
			{
				cout << "hemoglobiiniarvosi " << fInput << " on sopiva !! \n";
				return;
			}
		}

	}

}


// this tells u if a year is a leap year or not
void YearThing()
{
	cout << "okkkk anna vuosiluku niin kerron onko se karkausvuosi \n";
	int year = 0;

	while (true)
	{
		// git th' ny year value
		cin >> year;

		// fail army
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(1000, '\n');

			cout << "anna VALIDI vuosiluku (NUMERONA)\n";
		}

		// gtfo out of loop when result is an integer (doesnt cause a fail)
		else
		{
			break;
		}
	}

	// ALL desired results are divisible by four
	if (year % 4 == 0)
	{
		// only desired hundreds are divisible by 400 also. discard others
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				cout << "vuosi " << year << " on karkausvuosi !!!!\n";
				return;
			}
			else
			{
				cout << "vuosi " << year << " EI OLE karkausvuosi !!!!\n";
				return;
			}

		}
		// divisible by 4 non hundred response; always a leap year
		else
		{
			cout << "vuosi " << year << " on karkausvuosi !!!!\n";
			return;
		}
	}
	else
	{
		cout << "vuosi " << year << " EI OLE karkausvuosi !!!!\n";
		return;
	}
		
	
}




// prints out numbers divisible by trois
void DivisionByThree()
{
	int i = 0;
	while (i < 1000)
	{
		i++;
		if (i % 3 == 0)
		{
			cout << i << " ";
		}
	}

	cout << "\ntäs on kaikki kolmella jaolliset luvut 0-1000 ok \n";
}



// converts inches into centimetres
void Inches()
{
	float conversionRate = 2.54;
	float inch;
	cout << "laita joku luku JENKKI tuumissa niin muutan ne senteiksi. negatiivinen luku poistuu ohjelmasta \n";
	while (true)
	{
		cout << "laita luku -->>>>>> ";
		cin >> inch;

		// fail case
		if (cin.fail())
		{
			cout << "anna joku validi NUMERO\n";
			cin.clear();
			cin.ignore(1000, '\n');
		}

		// epic win case
		else if (inch >= 0)
		{
			cout << inch << " TUUMAA on " << (inch * conversionRate) << " cm\n";
		}

		// exit case
		else
		{
			cout << "ok :/ \n";
			break;
		}
	}
}


// converts gallons into litres
void GallonThing()
{
	float conversionRate = 3.785;
	float galon;
	cout << "anna galloonaluku niin laitan että monta litraa se vastaa. neg. luku poistuu\n";
	while (true)
	{
		cout << "laita luku -->>>>>> ";
		cin >> galon;

		// fail case
		if (cin.fail())
		{
			cout << "anna joku validi galloonaNUMERO\n";
			cin.clear();
			cin.ignore(1000, '\n');
		}

		// epic win case
		else if (galon >= 0)
		{
			cout << galon << " GALLOONAA on " << (galon * conversionRate) << " litraa\n";
		}

		// exit case
		else
		{
			cout << "ok :p\n";
			break;
		}
	}
}





/// helpr functions

// this parses a response and deems it positive or negative n returns an int 
int StringThing(string input)
{
	for (int i = 0; i < size(pos); i++)
	{
		if (input == pos[i])
			return 1;
	}
	for (int i = 0; i < size(neg); i++)
	{
		if (input == neg[i])
			return 0;
	}

	return -1;
}



// runs once
void InitThing()
{
	// font fix in console
	SetConsoleOutputCP(CP_UTF8);
}


