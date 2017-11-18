#pragma once
#include <iostream>
#include <string>
using namespace std;
class Persona {
	private: 
		string Nacion;
		string Nombre;
		int Edad;
		string Sexo;
	public: 
		Persona(string, string, int, string);
		void  setNacion(string);
		void  setNombre(string);
		void  setEdad(int);
		void  setSexo(string);
		string getNacion();
		string getNombre();
		int getEdad();
		string getSexo();
};
