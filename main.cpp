#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <exception>
#include "Persona.h"
#include "AirBender.h"
#include "FireBender.h"
#include "WaterBender.h"
#include "EarthBender.h"
#include "NonBender.h"

using namespace std;
int Listar(vector<Persona*>*, bool);
void Save(vector<Persona*>*);
void MISCOLES();
int main() {
	vector<Persona*>* vList = new vector<Persona*>; 
	int op = 0;
	while (op != 5) {
		cout << "Ingrese opcion" << "\n";
		cout << "--------------" << "\n";
		cout << "1) Agregar Maestro" << "\n";
		cout << "2) Eliminar Maestro" << "\n";
		cout << "3) MIS COLES!!!" << "\n";
		cout << "4) Listar y Archivar Maestros" << "\n";
		cin >> op;
		switch(op) {
			case 1: {
				int opA;
				int opP;
				cout << "Agregar que tipo de maestro? \n";
				cout << "1) AirBender \n";
				cout << "2) WaterBender \n";
				cout << "3) EarthBender \n";
				cout << "4) FireBender \n";
				cout << "5) NonBender\n";
				cin >> opA;
				string Nacion = "Indefinido"; 
				string Nombre; 
				int Edad; 
				string Sexo;
				cout << " Nombre?\n"; 
				cin >> Nombre;
				cout << " Edad?\n";
				cin >> Edad;
				cout << " Sexo?\n"; 
				cin >> Sexo;
				if (opA != 5) { 
					cout << "Agregar que tipo de poder? \n";
					cout << "1) Ofensivo\n";
					cout << "2) Defensivo \n";
					cout << "3) Curacion \n";
					cout << "4) Mascota \n";
					cin >> opP;				
				} else {
					opP = 5;
				}
				Poder* P;				
				switch (opP) {
					case 1: {
						int Rango = 0;
						cout << "Ingrese Rango: \n";
						cin >> Rango;
						int Fuerza = 0;
						cout << "Ingrese Fuerza: \n";
						cin >> Fuerza;
						P = new Ofensivo(Rango, Fuerza);
					} break;
					case 2: {
						int Resistencia = 0;
						cout << "Ingrese Resistencia: \n";
						cin >> Resistencia;
						int Duracion = 0;
						cout << "Ingrese Duracion: \n";
						cin >> Duracion;
						P = new Defensivo(Resistencia, Duracion);
					} break;
					case 3: {
						string Herida = "";
						cout << "Ingrese Herida: \n";
						cin >> Herida;
						P = new Curacion(Herida);
					} break;
					case 4: {
						string Nombre = "";
						cout << "Ingrese Nombre\n";
						cin >> Nombre;
						string Especie = "";
						cout << "Ingrese Especie\n";
						cin >> Especie; 
						string Habilidad = "";
						cout << "Ingrese Habilidad\n";
						cin >> Habilidad; 
						string Train = "Indefinido";
						cout << "Ingrese Entrenamiento\n";
						cout << "1) Militar\n";
						cout << "2) Domestico\n";
						int opE;
						cin >> opE;
						switch (opE) {
							case 1: {
								Train = "Militar";
							} break;
							case 2: {
								Train = "Domestico";
							} break;
						}
						P = new Mascota(Nombre, Especie, Habilidad, Train);
					} break;
					case 5: {
						P = new Mascota("", "", "", "");
					} break;
				}
				switch (opA) {
					case 1: {
						int Pelo;
						cout << "Numero de Pelos? \n";
						cin >> Pelo;
						string Color;
						cout << "Color \n";
						cin >> Color;
						Nacion = "Aire";
						cout << "Algo \n";
						AirBender* A = new AirBender(Pelo, Color, Nacion, Nombre, Edad, Sexo, P);
						cout << "Otro \n";
						vList->push_back(A);
						cout << "Final \n";
					} break;
					case 2: {
						string Tribu = "Indefinido";
						string Arma;
						Nacion = "Agua";
						int opA1 = 0;
						cout << "Norte o Sur? \n";
						cout << "1) Norte \n";
						cout << "2) Sur\n";
						cin >> opA1;
						switch (opA1) {
							case 1: {
								Tribu = "Norte";
							} break;
							case 2: {
								Tribu = "Sur";
							} break;
						}
						cout << "Arma? \n";
						cin >> Arma;
						WaterBender* A = new WaterBender(Tribu, Arma, Nacion, Nombre, Edad, Sexo, P);
						vList->push_back(A);
					} break;
					case 3: {
						Nacion = "Tierra";
						int Coles; 
						int Graduacion;
						cout << "Numero de coles? \n";
						cin >> Coles;
						cout << "Numero de Graduacion? \n";
						cin >> Graduacion;
						if (Graduacion > 20) {
							cout << "Graduacion mayor a veinte, se usara 20 como valor \n";
							Graduacion = 20;
						}
						if (Graduacion < 0) {
							cout << "Graduacion menor a 0, se usara 10 como valor \n";
							Graduacion = 10;
						} 
						EarthBender* A = new EarthBender(Coles, Graduacion, Nacion, Nombre, Edad, Sexo, P);
						vList->push_back(A);
					} break;
					case 4: {
						Nacion = "Fuego";
						int Cicatrices;
						int Victorias;
						cout << "Numero de Cicatrices? \n";
						cin >> Cicatrices;
						cout << "Numero de Victorias? \n";
						cin >> Victorias;
						FireBender* A = new FireBender(Cicatrices, Victorias, Nacion, Nombre, Edad, Sexo, P);
						vList->push_back(A);
					} break;
					case 5: {
						Nacion = "Ninguna";
						int Trabajo; 
						int Fuerza; 
						int Velocidad;
						cout << "Ingrese Trabajo: \n";
						cin >> Trabajo;
						cout << "Ingrese Fuerza \n";
						cin >> Fuerza;
						cout << "Ingrese Velocidad\n";
						cin >> Velocidad;
						NonBender* A = new NonBender(Trabajo, Fuerza, Velocidad, Nacion, Nombre, Edad, Sexo, P);
						vList->push_back(A);
					} break;
				}
			} break;
			case 2: {
				cout << "Borrar Cual? \n";
				try {
					int del = Listar(vList, true);
					delete vList->at(del);
					vList->erase(vList->begin() + del);
				} catch (exception e) {
					cout << "Error, por favor ingresar otra vez\n";
				}
			} break;
			case 3: {
				MISCOLES();
			} break;
			case 4: {
				Listar(vList, false);
				Save(vList);
			} break;
		}
	}
	for (int i = 0;i<vList->size();i++) {
		delete vList->at(i);
	}
	return 0;
}
int Listar(vector<Persona*>* vList, bool ret) {
	int num;
	for (int i = 0;i<vList->size();i++) {
		cout << i << ") " << vList->at(i)->toString() << "\n\n";
	}
	if (ret) {
		cin >> num;
		return num;
	}
	return 0;
}
void Save(vector<Persona*>* list) {
	ofstream Archivo;
	Archivo.open("SaveData.txt");
	for (int i = 0;i<list->size();i++) {
		if (list->at(i)->getNacion()=="Agua") {
			Archivo << list->at(i)->toString() << "\n";
		}
	}
	for (int i = 0;i<list->size();i++) {
		if (list->at(i)->getNacion()=="Fuego") {
			Archivo << list->at(i)->toString() << "\n";
		}
	}
	for (int i = 0;i<list->size();i++) {
		if (list->at(i)->getNacion()=="Tierra") {
			Archivo << list->at(i)->toString() << "\n";
		}
	}
	for (int i = 0;i<list->size();i++) {
		if (list->at(i)->getNacion()=="Aire") {
			Archivo << list->at(i)->toString() << "\n";
		}
	}
	for (int i = 0;i<list->size();i++) {
		if (list->at(i)->getNacion()=="Ninguna") {
			Archivo << list->at(i)->toString() << "\n";
		}
	}
	Archivo.close();
}
void MISCOLES() {
	cout << "  MIS COLES!!!                \n";
	cout << "                  \n";
	cout << "  _____                \n";
	cout << " /	\\	        ___          \n";
	cout << " \\_____/	      _/___\\_        \n";
	cout << " |  	|	_____/__\\____\\_____\n";
	cout << " |     |	|                 /\n";
	cout << " |_____|	|                /\n";
	cout << " |	|	|_______________/\n";
	cout << "		    O        O\n";
}
