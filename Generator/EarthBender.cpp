#include "EarthBender.h"
#include <iostream>
#include <string>
using namespace std;
	EarthBender::EarthBender(int Coles, int Graduacion) { 
		setColes(Coles);
		setGraduacion(Graduacion);
	}
	void EarthBender::setColes(int a) {
		this->Coles = a;
	}
	void EarthBender::setGraduacion(int a) {
		this->Graduacion = a;
	}
	int EarthBender::getColes() {
		return this->Coles;
	}
	int EarthBender::getGraduacion() {
		return this->Graduacion;
	}
