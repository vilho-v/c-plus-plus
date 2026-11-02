#include <iostream>
// for nonstandard letter fix
//#include <windows.h>
// simplify cout
using namespace std;


int main1()
{
	// nonstandard letter fix
	//SetConsoleOutputCP(CP_UTF8);
	
	cout << "Pelataan kiinalaista numeropeliä\n";

	int luku;
	while (true)
	{
		cout << "Anna luku -> ";
		cin >> luku;

		cout << "\n Voitin koska lukuni on " << luku + 1 << "\n";
	}

	return 0;
}