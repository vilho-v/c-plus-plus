#include <iostream>

using namespace std;


class Laskutoimitus
{
public:
	virtual double laske(double x, double y) = 0;
};


class Yhteenlasku : public Laskutoimitus {
public:

	double laske(double x, double y) override{
		return x + y;
	}
};


class Kertolasku : public Laskutoimitus {

public: 
	double laske(double x, double y) override {
		return x * y;
	}
};

int main()
{
	Laskutoimitus* pointteri;

	Kertolasku kl;
	Yhteenlasku yl;

	// pistä se osoittamaan kertolaskuun
	pointteri = &yl;

	int thing = 8008135;
	cout << "thing on alkuunsa " << thing << endl;

	
	thing = pointteri->laske(1, 2);

	cout << "lasketaan 1+2. thing on nyt " << thing << endl;

	pointteri = &kl;

	thing = pointteri->laske(3, 4);

	cout << "lasketaan 3*4. thing on nyt " << thing << endl;


	return 0;
}