#include <iostream>
#include <fstream>
#include <sstream>



using namespace std;

class Writable {
public:
	virtual void writeState(const string& filename) = 0;
};


class Readable {
public:
	virtual void readState(const string& filename) = 0;
};



// ruins input files sometimes
class FileDogger : public Writable, public Readable{

	// read pasta from dog.txt
	ifstream doggy;
	
	// write new stuff onto target file
	void writeState(const string& filename) override {

		ofstream newText(filename);
		string line;

		while (getline(doggy, line))
		{
			newText << line << endl;
		}
		

		newText.close();

		readState(filename);
		
	}


	// print file contents
	void readState(const string& filename) override {
		
		ifstream textReader(filename);
		string line;

		while (getline(textReader, line))
		{
			cout << line << endl;
		}

	}

public:

	FileDogger() : Writable(), Readable()
	{
		doggy = ifstream("dog.txt");
	}


	void CallIt(const string& filename)
	{
		srand(time(0));
		int r = rand() % 101;
		 
		cout << "luku rand" << r << endl;

		if (r <= 50)
		{
			writeState(filename);
		}
		else
		{
			readState(filename);
		}
	}
};



int main()
{	
	FileDogger fd;

	string filename;

	cout << "mikä on kohdetiedoston nimi? voin tulostaa sen sisällön tai ehkä muuttaa sitä" << endl
		<< "ihan vaan tiedoston nimi ->";

	cin >> filename;
	
	fd.CallIt(filename+".txt");

}