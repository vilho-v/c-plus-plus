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
	"1"
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
		cout << "Tehtävä 3";
	}
	else if (luku == 4)
	{
		cout << "Tehtävä 4";
	}
	else if (luku == 5)
	{
		cout << "Tehtävä 5";
	}
	else if (luku == 6)
	{
		cout << "Tehtävä 6";
	}
	else if (luku == 7)
	{
		cout << "Tehtävä 7";
	}

	// start over if input is wrong somehow
	else
	{
		// put these here cuz cin shits itself and stopts taking inputs if theres a type mismatch
		cin.clear();
		cin.ignore();

		cout << "anna ihan vaan luku 1-7\n";
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

			// go thru all possible answers and catch invalid non numeral response

			// too low
			if (fInput < mlow)
			{

			}
			// too high
			else if(fInput > mhigh)
			{
				cout << "hemoglobiiniarvosi " << fInput << " on aivan liian korkea!! \n" << "yläraja " << mhigh << "\n";
			}
			// just right
			else if(mlow < fInput < mhigh)
			{
				cout << "hemoglobiiniarvosi " << fInput << " on sopiva !! \n";
				return;
			}
			// invalid
			else
			{
				cin.clear();
				cin.ignore();
				continue;
			}

			
		}
	else if (input == "f")
	{

	}
	


}




// helpr functions
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
	SetConsoleOutputCP(CP_UTF8);
}


