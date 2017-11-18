#pragma once
#include <iostream>
#include <string>
#include "Poder.h"
#include "Ofensivo.h"
#include "Defensivo.h"
#include "Curacion.h"
#include "Mascota.h"

using namespace std;
class Persona {
	private: 
		string Nacion;
		string Nombre;
		int Edad;
		string Sexo;
		Poder* P;
	public: 
		Persona(string, string, int, string, Poder*);
		~Persona();
		void  setNacion(string);
		void  setNombre(string);
		void  setEdad(int);
		void  setSexo(string);
		string getNacion();
		string getNombre();
		int getEdad();
		string getSexo();
		Poder* getPoder();
		virtual string toString();
};
