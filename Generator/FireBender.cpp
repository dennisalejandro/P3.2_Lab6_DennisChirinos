#include "FireBender.h"
#include <iostream>
#include <string>
using namespace std;
	FireBender::FireBender(int Cicatrices, int Victorias) { 
		setCicatrices(Cicatrices);
		setVictorias(Victorias);
	}
	void FireBender::setCicatrices(int a) {
		this->Cicatrices = a;
	}
	void FireBender::setVictorias(int a) {
		this->Victorias = a;
	}
	int FireBender::getCicatrices() {
		return this->Cicatrices;
	}
	int FireBender::getVictorias() {
		return this->Victorias;
	}
