#include "WaterBender.h"
#include <iostream>
#include <string>
using namespace std;
	WaterBender::WaterBender(string Tribu, string Arma) { 
		setTribu(Tribu);
		setArma(Arma);
	}
	void WaterBender::setTribu(string a) {
		this->Tribu = a;
	}
	void WaterBender::setArma(string a) {
		this->Arma = a;
	}
	string WaterBender::getTribu() {
		return this->Tribu;
	}
	string WaterBender::getArma() {
		return this->Arma;
	}
