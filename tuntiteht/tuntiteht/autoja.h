#pragma once

class Ajoneuvo {
public:
	int huippu, vuosi, paino;

	Ajoneuvo(int top, int year, int weight) : huippu(top), vuosi(year), paino(weight) {}
};

class Auto : public Ajoneuvo {
public:
	int ovet, renkaat;

	Auto(int top, int year, int weight, int doors, int wheels)
		: Ajoneuvo(top, year, weight), ovet(doors), renkaat(wheels) {
	}


};

class HnkAuto : public Auto {
public:
	int matkustajat = 0;

	HnkAuto(int top, int year, int weight, int doors, int wheels, int passengers)
		: Auto(top, year, weight, doors, wheels), matkustajat(passengers) {
	}
};

class KuormaAuto : public Auto {
public:
	int kuormaMax;

	KuormaAuto(int top, int year, int weight, int doors, int wheels, int load)
		: Auto(top, year, weight, doors, wheels), kuormaMax(load) {
	}
};

class Lentokone : public Ajoneuvo {
public:
	int maxKorkeus;

	Lentokone(int top, int year, int weight, int maxHeight)
		: Ajoneuvo(top, year, weight), maxKorkeus(maxHeight) {
	}
};


class Laiva : public Ajoneuvo {
public:

	int maxSyvyys;
	Laiva(int top, int year, int weight, int depth) : Ajoneuvo(top, year, weight), maxSyvyys(depth) {}

};