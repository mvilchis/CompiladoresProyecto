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
		bool e = it->hasNext();
		while (it->hasNext()) {
			Node* actual = it->next();
			actual->accept(this);
			cout << ", ";
		}
		cout << (e)? "\b\b]" : "]";
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
	void visit(IdentificadorNode* n){
		cout << n->nombre;
	}
	void visit(TrueNode* n){
		cout << "TRUE";
	}
	void visit(FalseNode* n){
		cout << "FALSE";
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
	void visit(ElIfNode* n){
		printBloque("ELIF",n);
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
	void visit(NIgNode* n){
		printBinario("NIGUAL",n);
	}
	void visit(DIgNode* n){
		printBinario("DIGUAL",n);
	}
	void visit(EnetildeNode* n){
		printUnario("ENETILDE",n);
	}
	void visit(CircunflejoNode* n){
		printUnario("CIRCUNFLEJO",n);
	}
	void visit(PipeNode* n){
		printBinario("PIPE",n);
	}
	void visit(AmpersonNode* n){
		printBinario("AMPERSON",n);
	}
	void visit(DMayorNode* n){
		printBinario("DMAYOR",n);
	}
	void visit(DMenorNode* n){
		printBinario("DMENOR",n);
	}
	void visit(ModNode* n){
		printBinario("PORCEN",n);
	}
	void visit(DDiagNode* n){
		printBinario("DDIAG",n);
	}
	void visit(DAsteriscosNode* n){
		printBinario("DASTERISCO",n);
	}
	void visit(AParenNode* n){
		cout << "APAREN";
	}
	void visit(CParenNode* n){
		cout << "CPAREN";
	}
	void visit(ACorcheteNode* n){
		cout << "ACORCHETE";
	}
	void visit(CCorcheteNode* n){
		cout << "ACORCHETE";
	}
	void visit(ALlaveNode* n){
		cout << "ALLAVE";
	}
	void visit(CLlaveNode* n){
		cout << "ALLAVE";
	}
	void visit(ComaNode* n){
		cout << "COMA";
	}
	void visit(DPuntoNode* n){
		cout << "DPUNTO";
	}
	void visit(PuntoNode* n){
		cout << "PUNTO";
	}
	void visit(PComaNode* n){
		cout << "PCOMA";
	}
	void visit(MasIgualNode* n){
		printBinario("MASIGUAL",n);
	}
	void visit(MenosIgualNode* n){
		printBinario("MENOSIGUAL",n);
	}
	void visit(AsIgualNode* n){
		printBinario("ASIGUAL",n);
	}
	void visit(DiaIgualNode* n){
		printBinario("DIAIGUAL",n);
	}
	void visit(DDiaIgualNode* n){
		printBinario("DDIAIGUAL",n);
	}
	void visit(PorIgualNode* n){
		printBinario("PORIGUAL",n);
	}
	void visit(AmpIgualNode* n){
		printBinario("AMPIGUAL",n);
	}
	void visit(PipeIgualNode* n){
		printBinario("PIPEIGUAL",n);
	}
	void visit(CircIgualNode* n){
		printBinario("CIRCIGUAL",n);
	}
	void visit(DMayorIgualNode* n){
		printBinario("DMAYORIGUAL",n);
	}
	void visit(DMenorIgualNode* n){
		printBinario("DMENORIGUAL",n);
	}
	void visit(DAstIgualNode* n){
		printBinario("DASTIGUAL",n);
	}
	void visit(MenorMayorNode* n){
		printBinario("MENORMAYOR",n);
	}
	void visit(NewLineNode* n){
		cout << "NEWLINE";
	}
	void visit(DentacionNode* n){
		cout << "DEDENT ";
	}
	void visit(IsNotNode* n){
		cout << "ISNOT ";
	}
	void visit(InNode* n){
		cout << "IN ";
	}
	void visit(NotInNode* n){
		cout << "NOTIN ";
	}
	void visit(DifNode* n){
		cout << "- ";
	}
	void visit(HermanosNode* n){
		printBloque("HERMANOS",n);
	}
};
