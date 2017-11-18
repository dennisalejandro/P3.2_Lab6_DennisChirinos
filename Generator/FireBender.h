#pragma once
#include <iostream>
#include <string>
using namespace std;
class FireBender {
	private: 
		int Cicatrices;
		int Victorias;
	public: 
		FireBender(int, int);
		void  setCicatrices(int);
		void  setVictorias(int);
		int getCicatrices();
		int getVictorias();
};
