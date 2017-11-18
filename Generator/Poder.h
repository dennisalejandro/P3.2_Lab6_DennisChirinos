#pragma once
#include <iostream>
#include <string>
using namespace std;
class Poder {
	private: 
		int ID;
		string Tipo;
	public: 
		Poder(int, string);
		void  setID(int);
		void  setTipo(string);
		int getID();
		string getTipo();
};
