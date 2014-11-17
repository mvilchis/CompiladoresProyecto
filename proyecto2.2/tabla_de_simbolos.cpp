#include <iostream>
#include <map>
#include <list>
#include <string>
using namespace std;

/*  Fernández Martínez José Ismael
    Trinidad Hernández Norma Verónica
    Vilchis Domínguez Miguel Alonso
    Práctica 03
    Oct 2014
*/

union t{
		int i;
		double d;
		char c;
		char *s;
};

class Simbolo{
private:
	string identificador;
	string tipo;
	union t valor;
public:
	Simbolo(){}

	Simbolo(string identificador, string tipo, union t valor){
		this->identificador = identificador;
		this->tipo = tipo;
		this->valor = valor;
	}

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
private:
	list< map<string,Simbolo> > tablas;
public:
	TablaDeSimbolos(){
		map<string,Simbolo> t;
		tablas.push_front(t);
	}

	Simbolo* lookUp(string nombre){
		for(list<map<string,Simbolo> >::iterator it=tablas.begin();it!=tablas.end();it++)			
			if((*it).find(nombre)!=(*it).end())
				return &((*((*it).find(nombre))).second);
		return NULL;
	}

	void insert(string nombre, Simbolo record){
		if(tablas.empty()){
			map<string,Simbolo> t;
			tablas.push_front(t);
		}
		(*(tablas.begin())).insert(pair<string,Simbolo>(nombre,record));
	}

	void openScope(){
		map<string,Simbolo> m;
		tablas.push_front(m);
	}

	void closeScope(){
		if(!tablas.empty())
			tablas.pop_front();
	}

	bool declaredLocally(string nombre){
		if(!tablas.empty())
			return (*(tablas.begin())).count(nombre);
		return false;
	}

};

/*
int main(){
	
	TablaDeSimbolos t;
	Simbolo s;

	t.insert("hola",s);
	if(t.lookUp("hola")!=NULL) cout << "hay algo" << endl; else cout << "Es nulo" << endl;
	cout << t.declaredLocally("hola") << endl;

	t.openScope();
	if(t.lookUp("hola")!=NULL) cout << "hay algo" << endl; else cout << "Es nulo" << endl;
	cout << t.declaredLocally("hola") << endl;

	t.closeScope();
	t.closeScope();

	if(t.lookUp("hola")!=NULL) cout << "hay algo" << endl; else cout << "Es nulo" << endl;
	cout << t.declaredLocally("hola") << endl;

	t.insert("cosa",s);




	return 0;
} */
