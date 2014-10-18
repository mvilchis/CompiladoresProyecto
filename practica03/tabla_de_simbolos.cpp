#include <iostream>
#include <map>
#include <list>
#include <string>
using namespace std;

union t{
	int i;
	double d;
	char *s;
	char c;
};

class Simbolo{
private:
	string identificador;
	string tipo;
	union t valor;
public:
	Simbolo(string identificador, string tipo, union t valor){
		this->identificador = identificador;
		this->tipo = tipo;
		this->valor = valor;
	}
	Simbolo();

	string getIdentificador(){
		return identificador;
	}

	string getTipo(){
		return tipo;
	}

	union t getValor(){
		return valor;
	}
};

class TablaDeSimbolos{
	list< map<int,Simbolo> > tablas;

	union t lookUp(union t nombre){
		return nombre;
	}

};


int main(){
	

	return 0;
}
