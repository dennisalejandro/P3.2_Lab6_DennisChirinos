#include "Ofensivo.h"
#include "Poder.h"
#include <iostream>
#include <string>
using namespace std;
	Ofensivo::Ofensivo(int Rango, int Fuerza) : Poder(1, "Ofensivo") { 
		setRango(Rango);
		setFuerza(Fuerza);
	}
	void Ofensivo::setRango(int a) {
		this->Rango = a;
	}
	void Ofensivo::setFuerza(int a) {
		this->Fuerza = a;
	}
	int Ofensivo::getRango() {
		return this->Rango;
	}
	int Ofensivo::getFuerza() {
		return this->Fuerza;
	}
	string Ofensivo::toString() {
		string ret = " Poder:"+getTipo()+"("+to_string(getRango())+", "+to_string(getFuerza())+")";
		return ret;
	}
