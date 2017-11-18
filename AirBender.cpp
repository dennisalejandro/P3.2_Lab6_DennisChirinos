#include "AirBender.h"
#include <iostream>
#include <string>
#include "Poder.h"
#include "Ofensivo.h"
#include "Defensivo.h"
#include "Curacion.h"
#include "Mascota.h"

using namespace std;
	AirBender::AirBender(int Pelo, string Color, string Nacion, string Nombre, int Edad, string Sexo, Poder* P) : Persona(Nacion, Nombre, Edad, Sexo, P) { 
		setPelo(Pelo);
		setColor(Color);
	}
	void AirBender::setPelo(int a) {
		this->Pelo = a;
	}
	void AirBender::setColor(string a) {
		this->Color = a;
	}
	int AirBender::getPelo() {
		return this->Pelo;
	}
	string AirBender::getColor() {
		return this->Color;
	}
	string AirBender::toString() {
		string ret = "Nacion: " + getNacion() + " Nombre: " + getNombre() + " Edad: " + to_string(getEdad()) + " Sexo: " + getSexo() + " Num Pelos: "+to_string(getPelo()) + " Color de tattoo: " + getColor()+ ", " + getPoder()->toString();
		return ret;
	}
