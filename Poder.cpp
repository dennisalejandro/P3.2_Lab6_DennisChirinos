#include "Poder.h"
#include <iostream>
#include <string>
using namespace std;
	Poder::Poder(int ID, string Tipo) { 
		setID(ID);
		setTipo(Tipo);
	}
	void Poder::setID(int a) {
		this->ID = a;
	}
	void Poder::setTipo(string a) {
		this->Tipo = a;
	}
	int Poder::getID() {
		return this->ID;
	}
	string Poder::getTipo() {
		return this->Tipo;
	}
	string Poder::toString() {
		return "";
	}
