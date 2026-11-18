#include <iostream>
using namespace std;

class Henkilo {


	public:
	string nimi;

	Henkilo(string n) {
		nimi = n;
	}

};

class Opiskelija : public Henkilo {
public:
	int opiskelijanro;
	Opiskelija(string n, int i) : Henkilo(n) {
		opiskelijanro = i;
	}
};


// dis is abstract
class Elain {

public:
	string aani;

	// puhas virtuaali
	virtual void aantele() = 0;

	// constructor
	Elain(string n) {
		this->aani = n;
	}

	// destructor
	virtual ~Elain() {
		cout << "Elain tuhoutuu" << endl;
	}
};


class Kissa : public Elain {
public:
	void aantele() {
		cout << aani << endl;
	}

	Kissa(string n) : Elain(n) {

	}

	~Kissa() {
		cout << "Kissa tuhoutuu" << endl;
	}
};

class Koira : public Elain {

public:
	void aantele() {
		cout << aani << endl;
	}

	Koira(string n) : Elain(n) {

	}	

	~Koira() {
		
		cout << "Koira tuhoutuu" << endl;
	}
};



int main() {
	
	// 1.
	Opiskelija op("Vilho", 2522);
	cout << "Opiskelijan nimi: " << op.nimi << endl;
	cout << "Opiskelijan numero: " << op.opiskelijanro << endl;


	// 2. ja 3.
	Kissa* kissa = new Kissa("miau");
	Koira koira("Vuh");
	
	kissa->aantele();
	koira.aantele();	

	// 4. eläin ei onnaa kun se on abstrakti


	// 6.
	delete kissa;
	//delete koira;

	return 0;
}