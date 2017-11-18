#include <iostream>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;
int main() {
	//declaration
	string ClassName;
	string HeaderName;
	string CppName;
	int NumAtr;
	//cin characteristics:
	cout << "class name: ";
	cin >> ClassName;
	cout << "Atribute number: ";
	cin >> NumAtr;
	HeaderName = ClassName+".h";
	CppName = ClassName+".cpp";
	//cin Type + name of atr:
	string* ArAtr = new string[NumAtr+1];
	string* tipo = new string[NumAtr+1];
	for (int i = 0;i<NumAtr;i++) {
		cout << "Type?: ";		
		cin >> tipo[i];
		cout << "Name?: ";
		cin >> ArAtr[i];
	}	
//write header:	
	ofstream writeFile(HeaderName.c_str());
	writeFile <<"#pragma once" << "\n";
	writeFile <<"#include <iostream>" << "\n";
	writeFile <<"#include <string>" << "\n";
	writeFile <<"using namespace std;" << "\n";
	writeFile << "class " << ClassName << " {" << "\n";
	//private
	writeFile << "	private: " << "\n";
	for (int i = 0; i<NumAtr; i++) {
		writeFile << "		" << tipo[i] << " " << ArAtr[i] << ";" << "\n";
	}
	//public
	writeFile << ClassName << "();" << "\n";
		//setters
	writeFile << "	public: " << "\n";
	for (int i = 0;i<NumAtr;i++) {
		writeFile << "		void " << " set" << ArAtr[i] << "(" << tipo[i] << ");" << "\n";
	}
		//getters
	for (int i = 0;i<NumAtr;i++) {
		writeFile << "		" << tipo[i] << " get" << ArAtr[i] << "();" << "\n";	
	}
	writeFile<< "};" << "\n";
	writeFile.close();
//write cpp
	//includes
	ofstream writeFile2(CppName.c_str());
	writeFile2 << "#include " << (char)34 << HeaderName << (char)34 << "\n";
	writeFile2 <<"#include <iostream>" << "\n";
	writeFile2 <<"#include <string>" << "\n";
	writeFile2 <<"using namespace std;" << "\n";
	writeFile2 << ClassName << "() {" << "\n";
	writeFile2 << ClassName << "}" << "\n";
	for (int i = 0;i<NumAtr;i++) {
		writeFile2 << "	void " << ClassName << "::set" << ArAtr[i] << "(" << tipo[i] << " a) {" << "\n";
		writeFile2 << "	this->" << ArAtr[i] << " = a;"<< "\n";
		writeFile2 << "	}" << "\n";
	}
	for (int i = 0;i<NumAtr;i++) {
		writeFile2 << "	"<< tipo[i] << " " << ClassName << "::get" << ArAtr[i] << "() {" << "\n";
		writeFile2 << "		return this->" << ArAtr[i] << ";" << "\n";
		writeFile2 << "	}" << "\n";
	}
	writeFile2.close();
//delete
	delete[] ArAtr;
	delete[] tipo;
	return 0;
//this is open source, just credit to my Username
}
