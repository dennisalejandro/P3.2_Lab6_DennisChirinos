#include "AirBender.h"
#include <iostream>
#include <string>
using namespace std;
	AirBender::AirBender(int Pelo, string Color) { 
		setPelo(Pelo);
		setColor(Color);
	}
	void AirBender::setPelo(int a) {
		this->Pelo = a;
	}
	void AirBender::setColor(string a) {
		this->Color = a;
	}
	int AirBender::getPelo() {
		return this->Pelo;
	}
	string AirBender::getColor() {
		return this->Color;
	}
