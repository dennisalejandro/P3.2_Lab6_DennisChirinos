#include "Persona.h"
#include <iostream>
#include <string>
#include "Poder.h"
#include "Ofensivo.h"
#include "Defensivo.h"
#include "Curacion.h"
#include "Mascota.h"

using namespace std;
	Persona::Persona(string Nacion, string Nombre, int Edad, string Sexo, Poder* P) { 
		setNacion(Nacion);
		setNombre(Nombre);
		setEdad(Edad);
		setSexo(Sexo);
		this->P = P;
	}
	void Persona::setNacion(string a) {
		this->Nacion = a;
	}
	void Persona::setNombre(string a) {
		this->Nombre = a;
	}
	void Persona::setEdad(int a) {
		this->Edad = a;
	}
	void Persona::setSexo(string a) {
		this->Sexo = a;
	}
	string Persona::getNacion() {
		return this->Nacion;
	}
	string Persona::getNombre() {
		return this->Nombre;
	}
	int Persona::getEdad() {
		return this->Edad;
	}
	string Persona::getSexo() {
		return this->Sexo;
	}
	string Persona::toString() {
		return "";
	}
	Persona::~Persona() {
		delete this->P;
	}
	Poder* Persona::getPoder() {
		return this->P;
	}
