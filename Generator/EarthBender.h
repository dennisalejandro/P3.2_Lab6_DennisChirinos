#pragma once
#include <iostream>
#include <string>
using namespace std;
class EarthBender {
	private: 
		int Coles;
		int Graduacion;
	public: 
		EarthBender(int, int);
		void  setColes(int);
		void  setGraduacion(int);
		int getColes();
		int getGraduacion();
};
