#include "Curacion.h"
#include "Poder.h"
#include <iostream>
#include <string>
using namespace std;
	Curacion::Curacion(string Herida) : Poder(3, "Curacion"){ 
		setHerida(Herida);
	}
	void Curacion::setHerida(string a) {
		this->Herida = a;
	}
	string Curacion::getHerida() {
		return this->Herida;
	}
	string Curacion::toString() {
		string ret = " Poder:"+getTipo()+"("+getHerida()+")";
		return ret;
	}
