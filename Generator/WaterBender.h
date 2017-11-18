#pragma once
#include <iostream>
#include <string>
using namespace std;
class WaterBender {
	private: 
		string Tribu;
		string Arma;
	public: 
		WaterBender(string, string);
		void  setTribu(string);
		void  setArma(string);
		string getTribu();
		string getArma();
};
