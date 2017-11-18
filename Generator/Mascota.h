#pragma once
#include <iostream>
#include <string>
using namespace std;
class Mascota {
	private: 
		string Nombre;
		string Especie;
		string Habilidad;
		Train string;
	public: 
		Mascota(string, string, string, Train);
		void  setNombre(string);
		void  setEspecie(string);
		void  setHabilidad(string);
		void  setstring(Train);
		string getNombre();
		string getEspecie();
		string getHabilidad();
		Train getstring();
};
