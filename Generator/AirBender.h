#pragma once
#include <iostream>
#include <string>
using namespace std;
class AirBender {
	private: 
		int Pelo;
		string Color;
	public: 
		AirBender(int, string);
		void  setPelo(int);
		void  setColor(string);
		int getPelo();
		string getColor();
};
