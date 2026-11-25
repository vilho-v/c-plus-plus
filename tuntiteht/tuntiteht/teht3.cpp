#include <iostream>
using namespace std;


int* arr;
int koko;

// create array of specific size and return pointer to it
int* varaa_taulukko()
{
	int* taul = new int[koko];
	return taul;
}

void lue_arvot()
{
	int* da_temp = arr;

	 //ei käytetä sitä itse taulukkoa koska sen pointteri menee metsään loopin jälkeen
	 //(ei väliä jos taulukkoa ei tartte tän jälkeen tässä)
	for(int i = 0; i < koko; i++)
	{
		cout << "taulukon seuraava jäsen plz" << endl << "->>";
		cin >> arr[i];


		//t[i] = i;
		
	}




	cout << "ok taulukko valmis" << endl;
}


// flippaaaa arvot
void kaanna()
{
	int da_temp;
	for (int i = 0; i < koko/2; i++)
	{
		da_temp = arr[i];
		// käytä tuple taikaa kääntääkseen arvot
		arr[i] = arr[koko - 1 - i];
		
		arr[koko - 1 - i] = da_temp;
		//cout << "n-1-i = " << (n - 1 - i) << ". i = " << i << "t[i] nyt " << t[i] << endl;
	}
}


void tulosta_arvot()
{
	cout << "taulukon arvot : " << endl;
	for (int i = 0; i < koko; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}


int main()
{
	// 1
	cout << "ok laita taulukon koko" << endl;
	//int size = 10;


	//1 ja 2
	cin >> koko;

	arr = varaa_taulukko();


	// 5
	lue_arvot();

	tulosta_arvot();


	//3
	kaanna();


	// 4
	tulosta_arvot();

	// 5
	delete arr;

	return 0;
}