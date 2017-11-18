#include "Persona.h"
#include <iostream>
#include <string>
using namespace std;
	Persona::Persona(string Nacion, string Nombre, int Edad, string Sexo) { 
		setNacion(Nacion);
		setNombre(Nombre);
		setEdad(Edad);
		setSexo(Sexo);
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
