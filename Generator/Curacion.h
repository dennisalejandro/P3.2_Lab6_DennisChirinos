#pragma once
#include <iostream>
#include <string>
using namespace std;
class Curacion {
	private: 
		string Herida;
	public: 
		Curacion(string);
		void  setHerida(string);
		string getHerida();
};
