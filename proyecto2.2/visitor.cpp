#include "composite.cpp"
#include "builder.cpp"
#include <iostream>
#include <string>

/*  Fernández Martínez José Ismael
    Trinidad Hernández Norma Verónica
    Vilchis Domínguez Miguel Alonso
    Práctica 03
    Oct 2014
*/
    
using namespace std;

class PrintVisitor:public NodeVisitor{
public:
	void printBloque(string s, INode* n) {
		cout << "[" << s << " ";
		Niterador *it = n->getChild();
		while (it->hasNext()) {
			Node* actual = it->next();
			actual->accept(this);
			cout << ", ";
		}
		cout << "]";
	}
	void printBinario(string s, INode* n) {
		cout << "[" << s <<" ";
		(n->getFChild())->accept(this);
		cout << " , " ;
		(n->getSChild())->accept(this);
		cout << "]" ;
	}
	void printUnario(string s, INode* n) {
		cout << "[" << s <<" ";
		(n->getFChild())->accept(this);
		cout << "]" ;
	}
	void visit(IntNode* n){
		cout << n->valor;
	}
	void visit(StringNode* n){
		cout << n->valor;
	}
	void visit(BoolNode* n){
		if(n->valor) cout << "TRUE"; else cout << "FALSE";
	}
	void visit(ContinueNode* n){
		cout << "CONTINUE ";
	}
	void visit(PassNode* n){
		cout << "PASS ";
	}
	void visit(BreakNode* n){
		cout << "BREAK ";
	}
	void visit(FloatNode* n){
		cout << n->valor;
	}
	void visit(IdentacionNode* n){
		cout << "INDENT ";
	}
	void visit(IfNode* n){
		printBloque("IF",n);
	}
	void visit(ForNode* n){
		printBloque("FOR",n);
	}
	void visit(ReturnNode* n){
		printBloque("RETURN",n);
	}
	void visit(PrintNode* n){
		printBloque("PRINT",n);
	}
	void visit(GlobalNode* n){
		printBloque("GLOBAL",n);
	}
	void visit(FuncionNode* n){
		printBloque("FUNCION",n);
	}
	void visit(ExecNode* n){
		printBloque("EXEC",n);
	}
	void visit(WhileNode* n){
		printBinario("WHILE",n);
	}
	void visit(IsNode* n){
		printBinario("IS",n);
	}
	void visit(AndNode* n){
		printBinario("AND",n);
	}
	void visit(OrNode* n){
		printBinario("OR",n);
	}
	void visit(PorNode* n){
		printBinario("POR",n);
	}
	void visit(MenosNode* n){
		printBinario("MENOS",n);
	}
	void visit(MasNode* n){
		printBinario("MAS",n);
	}
	void visit(DivNode* n){
		printBinario("DIV",n);
	}
	void visit(IgualNode* n){
		printBinario("IGUAL",n);
	}
	void visit(MenorNode* n){
		printBinario("MENOR",n);
	}
	void visit(MayorNode* n){
		printBinario("MAYOR",n);
	}
	void visit(MenIgNode* n){
		printBinario("MENORIGUAL",n);
	}
	void visit(MayIgNode* n){
		printBinario("MAYORIGUAL",n);
	}
	void visit(ModNode* n){
		printBinario("MODULO",n);
	}
	void visit(DelNode* n){
		printUnario("DEL",n);
	}
	void visit(NotNode* n){
		printUnario("NOT",n);
	}
	void visit(WithNode* n){
		printUnario("WITH",n);
	}
	void visit(AsNode* n){
		printUnario("AS",n);
	}
};


int main() {
	return 0;
}
