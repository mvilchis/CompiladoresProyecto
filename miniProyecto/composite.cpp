#ifndef COMPOSITE
#define COMPOSITE
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include "visitor.h"

/*  Fernández Martínez José Ismael
    Trinidad Hernández Norma Verónica
    Vilchis Domínguez Miguel Alonso
    Práctica 03
    Oct 2014
*/
using namespace std;

//Componente
class Node{
public:
    virtual void accept(NodeVisitor*)=0;

    virtual void addFChild(Node* n) = 0;
    virtual void addSChild(Node* n) = 0;
    virtual void setFChild(Node* n) = 0;
    virtual void setSChild(Node* n) = 0;
    virtual Node* getFChild() = 0;
    virtual Node* getSChild() = 0;
    virtual Niterador* getChild() = 0; //posicion de hijo en una lista

};

class LeafNode: public Node{
    void addFChild(Node* n){
        throw "[Error: Método no implementado en esta clase]";
    }
    void addSChild(Node* n){
        throw "[Error: Método no implementado en esta clase]";
    }
    void setFChild(Node* n){
        throw "[Error: Método no implementado en esta clase]";
    }
    void setSChild(Node* n){
        throw "[Error: Método no implementado en esta clase]";
    }
    Node* getFChild(){
        throw "[Error: Método no implementado en esta clase]";
    }
    Node* getSChild(){
        throw "[Error: Método no implementado en esta clase]";
    }
    Niterador* getChild(){
        throw "[Error: Método no implementado en esta clase]";
    }
	
};

class Niterador{
private:
    vector<Node*> vect;
    vector<Node*>::iterator itV;
    list<Node*> lista;
    list<Node*>::iterator itL;
    bool b; //bandera: true para lista, false para vector
public:
    Niterador(vector<Node*> v){
        vect = v;
        itV = vect.begin();
        b = false;
    }

    Niterador(list<Node*> l){
        lista = l;
        itL = lista.begin();
        b = true;
    } 

    bool hasNext(){
        if(b)
            return itL!=lista.end();
        return itV!=vect.end();
    }

    Node* next(){
        Node* actual = b ? *itL:*itV;
        if(b) itL++; else itV++;
        return actual;
    }
};

class NodeList{
public:
    virtual bool empty() = 0;
    virtual void setFirst(Node* n) = 0;
    virtual void setSecond(Node* n) = 0;
    virtual Node* getFirst() = 0;
    virtual Node* getSecond() = 0;
    virtual Niterador* getIterador() = 0;
    virtual void push_front(Node* n) = 0;
    virtual void push_back(Node* n) = 0;
};

class LNodeList: public NodeList{
private:
    list<Node*> l;
public:
    LNodeList(){}

    bool empty(){
        return l.empty();
    }
    void setFirst(Node* n){
        throw "Error: Método no implementado en esta clase";
    }
    void setSecond(Node* n){
        throw "Error: Método no implementado en esta clase";
    }
    Node* getFirst(){
        throw  "Error: Método no implementado en esta clase";
    }
    Node* getSecond(){
        throw  "Error: Método no implementado en esta clase";
    }
    Niterador* getIterador() {
        return new Niterador(l);
    }
    void push_front(Node* n){
        l.push_front(n);
    }
    void push_back(Node* n){
        l.push_back(n);
    }
};

class VNodeList: public NodeList{
private:
    vector<Node*> v;
public:
	VNodeList(int nls){
        v = vector<Node*>(nls);
    }
    bool empty(){
        return v.empty();
    }
    void setFirst(Node* n){
        v.at(0) = n;
    }
    void setSecond(Node* n){
        v.at(1) = n;
    }
    Node* getFirst(){
        return v.at(0);
    }
    Node* getSecond(){
       return v.at(1);
    }
    Niterador* getIterador() {
        return new Niterador(v);
    }
    void push_front(Node* n){
        throw "Error: Método no implementado en esta clase";
    }
    void push_back(Node* n){
        throw "Error: Método no implementado en esta clase";
    }

};

class INode: public Node{
protected:
	NodeList* chen;
public:
	INode(int nls):Node(){chen = new VNodeList(nls);}
	INode():Node(){chen=new LNodeList();}
	
};

class BlockNode: public INode {
    public:
        BlockNode():INode(){}
        
        void addFChild(Node* n){
            chen->push_front(n);
        }
        void addSChild(Node* n){
            chen->push_back(n);
        }
        void setFChild(Node* n){
            throw "[Error: Método no implementado en esta clase]";
        }
        void setSChild(Node* n){
            throw "[Error: Método no implementado en esta clase]";
        }
        Node* getFChild(){
            throw "[Error: Método no implementado en esta clase]";
        }
        Node* getSChild(){
            throw "[Error: Método no implementado en esta clase]";
        }
        Niterador* getChild(){
            return chen->getIterador();
        }       
};

class BinNode: public INode {
    public:
        BinNode():INode(2){}
        
        void addFChild(Node* n){
            throw "[Error: Método no implementado en esta clase]";
        }
        void addSChild(Node* n){
            throw "[Error: Método no implementado en esta clase]";
        }
        void setFChild(Node* n){
            chen->setFirst(n);
        }
        void setSChild(Node* n){
            chen->setSecond(n);
        }
        Node* getFChild(){
            return chen->getFirst();
        }
        Node* getSChild(){
            return chen->getSecond();
        }
        Niterador* getChild(){
            throw "[Error: Método no implementado en esta clase]";
        }
};

class UnaNode: public INode {
    public:
        UnaNode():INode(1){}
        
        void addFChild(Node* n){
            throw "[Error: Método no implementado en esta clase]";
        }
        void addSChild(Node* n){
            throw "[Error: Método no implementado en esta clase]";
        }
        void setFChild(Node* n){
            chen->setFirst(n);
        }
        void setSChild(Node* n){
             throw "[Error: Método no implementado en esta clase]";
        }
        Node* getFChild(){
            return chen->getFirst();
        }
        Node* getSChild(){
             throw "[Error: Método no implementado en esta clase]";
        }
        Niterador* getChild(){
            throw "[Error: Método no implementado en esta clase]";
        }
};
/*
STRING  IDENTIFICADOR PRINT FALSE IS 
RETURN CONTINUE FOR TRUE DEF WHILE
AND DEL GLOBAL NOT WITH AS ELIF IF OR ELSE PASS BREAK IN RAISE EXEC
NIGUAL DIGUAL MAIGUAL MEIGUAL MAYOR MENOR ENETILDE CIRCUNFLEJO PIPE AMPERSON DMAYOR DMENOR PORCEN DDIAG DIAG DASTERISCO ASTERISCO MENOS MAS
APAREN CPAREN ACORCHETE CCORCHETE ALLAVE CLLAVE COMA DPUNTO PUNTO PCOMA IGUAL MASIGUAL MENOSIGUAL ASTIGUAL DIAIGUAL DDIAIGUAL PORIGUAL AMPIGUAL PIPEIGUAL CIRCIGUAL DMAYORIGUAL DMENORIGUAL DASTIGUAL MENORMAYOR
NEWLINE
ENTERO FLOTANTE INDENT DEDENT

*/

/*********************************
 *
 *      Seccion de terminales
 *
 *********************************/
class IntNode : public LeafNode {
    public:
        int valor;
        IntNode(int valor):LeafNode(){this->valor=valor;
	//cout<<"Entra \n" << valor<< "\n****\n";	
	}
        virtual void accept(NodeVisitor *nv) {
	//cout<<"YA Entra \n";	
	nv->visit(this);
}
};
//String
class StringNode : public LeafNode {
    public:
        string valor;
        StringNode(string valor):LeafNode(){this->valor=valor;}
        virtual void accept(NodeVisitor *nv) { nv->visit(this);}
};

class IdentificadorNode : public LeafNode {
    public:
        string nombre;
        IdentificadorNode(string nombre):LeafNode(){this->nombre=nombre;}
        virtual void accept(NodeVisitor *nv) { nv->visit(this);}
};

class FalseNode : public LeafNode {
	public:
		bool valor;
		FalseNode():LeafNode(){this->valor=false;}
	        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class TrueNode : public LeafNode {
	public:
		bool valor;
		TrueNode():LeafNode(){this->valor=true;}
	        virtual void accept(NodeVisitor *nv){nv->visit(this);}

};
//False y True
//class BoolNode : public LeafNode {
//    public:
//        bool valor;
//        BoolNode(bool valor):LeafNode(){this->valor=valor;}
//        virtual void accept(NodeVisitor *nv){nv->visit(this);}
//};


//Continue
class ContinueNode : public LeafNode {
    public:
        ContinueNode():LeafNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};
//pass
class PassNode : public LeafNode {
    public:
        PassNode():LeafNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};
//break
class BreakNode : public LeafNode {
    public:
        BreakNode():LeafNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};
//flotante
class FloatNode : public LeafNode {
    public:
        float valor;
        FloatNode(float valor):LeafNode(){this->valor=valor;}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};
//identacion
class IdentacionNode : public LeafNode {
    public:
        IdentacionNode():LeafNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class DentacionNode : public LeafNode {
    public:
        DentacionNode():LeafNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class NewLineNode : public LeafNode {
    public:
        NewLineNode():LeafNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class AParenNode : public LeafNode {
    public:
        AParenNode():LeafNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class CParenNode : public LeafNode {
    public:
        CParenNode():LeafNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class ACorcheteNode : public LeafNode {
    public:
        ACorcheteNode():LeafNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class CCorcheteNode : public LeafNode {
    public:
        CCorcheteNode():LeafNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class ALlaveNode : public LeafNode {
    public:
        ALlaveNode():LeafNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class CLlaveNode : public LeafNode {
    public:
        CLlaveNode():LeafNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class ComaNode : public LeafNode {
    public:
        ComaNode():LeafNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class DPuntoNode : public LeafNode {
    public:
        DPuntoNode():LeafNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class PuntoNode : public LeafNode {
    public:
        PuntoNode():LeafNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class PComaNode : public LeafNode {
    public:
        PComaNode():LeafNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};
/**********************************
 *
 *      Seccion de no terminales 
 *
 *********************************/
 /**********************************
 *
 *      Seccion de n-arios
 *
 *********************************/

class IfNode: public BlockNode{
    public:
        IfNode():BlockNode() {}  
        virtual void accept(NodeVisitor *nv){nv->visit(this);}  
};

class ElIfNode: public BlockNode{
    public:
        ElIfNode():BlockNode() {}  
        virtual void accept(NodeVisitor *nv){nv->visit(this);}  
};

class ForNode: public BlockNode{
    public:
        ForNode():BlockNode() {}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};
//Return
class ReturnNode: public BlockNode{
    public:
        ReturnNode():BlockNode() {}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};
//Print
class PrintNode: public UnaNode{
    public:
        PrintNode():UnaNode() {}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}     
};
//global
class GlobalNode: public BlockNode{
    public:
        GlobalNode():BlockNode() {} 
        virtual void accept(NodeVisitor *nv){nv->visit(this);}      
};
//fun
class FuncionNode: public BlockNode{
    public:
        FuncionNode():BlockNode() {}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};
//exec
class ExecNode: public BlockNode{
    public:
        ExecNode():BlockNode() {}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};


/**********************************
 *
 *      Seccion de binarios 
 *
 *********************************/
class WhileNode: public BinNode{
    public: 
        WhileNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};
 //is
/*class IsNode: public BinNode{
    public: 
        IsNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};*/
//and
class AndNode: public BinNode{
    public: 
        AndNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class AmpersonNode: public BinNode{
    public: 
        AmpersonNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

//or
class OrNode: public BinNode{
    public: 
        OrNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class PipeNode: public BinNode{
    public: 
        PipeNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

//por
class PorNode: public BinNode{
    public: 
        PorNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};
//mas
class MenosNode: public BinNode{
    public: 
        MenosNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};
//menos
class MasNode: public BinNode{
    public: 
        MasNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};
//div
class DivNode: public BinNode{
    public: 
        DivNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

//igual
class IgualNode: public BinNode{
    public: 
        IgualNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class MasIgualNode: public BinNode{
    public: 
        MasIgualNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class MenosIgualNode: public BinNode{
    public: 
        MenosIgualNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class AsIgualNode: public BinNode{
    public: 
        AsIgualNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class DiaIgualNode: public BinNode{
    public: 
        DiaIgualNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class DDiaIgualNode: public BinNode{
    public: 
        DDiaIgualNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class PorIgualNode: public BinNode{
    public: 
        PorIgualNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class AmpIgualNode: public BinNode{
    public: 
        AmpIgualNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class PipeIgualNode: public BinNode{
    public: 
        PipeIgualNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class CircIgualNode: public BinNode{
    public: 
        CircIgualNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class DMayorIgualNode: public BinNode{
    public: 
        DMayorIgualNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class DMenorIgualNode: public BinNode{
    public: 
        DMenorIgualNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class DAstIgualNode: public BinNode{
    public: 
        DAstIgualNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class MenorMayorNode: public BinNode{
    public: 
        MenorMayorNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};
//dif
class DifNode: public BinNode{
    public: 
        DifNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};
//menor
class MenorNode: public BinNode{
    public: 
        MenorNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};
//mayor
class MayorNode: public BinNode{
    public: 
        MayorNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};
//menorigual
class MenIgNode: public BinNode{
    public: 
        MenIgNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};
//mayorigual
class MayIgNode: public BinNode{
    public: 
        MayIgNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};
class NIgNode: public BinNode{
    public: 
        NIgNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class DIgNode: public BinNode{
    public: 
        DIgNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class DMayorNode: public BinNode{
    public: 
        DMayorNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class DMenorNode: public BinNode{
    public: 
        DMenorNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class DDiagNode: public BinNode{
    public: 
        DDiagNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class DAsteriscosNode: public BinNode{
    public: 
        DAsteriscosNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};


//modulo
class ModNode: public BinNode{
    public: 
        ModNode():BinNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};
/*********************************
 *
 * Seccion de unarios
 *
 *********************************/

//del
class DelNode: public UnaNode{
    public: 
        DelNode():UnaNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};
//not
class NotNode: public UnaNode{
    public: 
        NotNode():UnaNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class EnetildeNode: public UnaNode{
    public: 
        EnetildeNode():UnaNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class CircunflejoNode: public UnaNode{
    public: 
        CircunflejoNode():UnaNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

//with
class WithNode: public UnaNode{
    public: 
        WithNode():UnaNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};
//as
class AsNode: public UnaNode{
    public: 
        AsNode():UnaNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};
//in
class InNode: public UnaNode{
    public: 
        InNode():UnaNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};
//notin
class NotInNode: public UnaNode{
    public: 
        NotInNode():UnaNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};
//is
class IsNode: public UnaNode{
    public: 
        IsNode():UnaNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};
//isnot
class IsNotNode: public UnaNode{
    public: 
        IsNotNode():UnaNode(){}
        virtual void accept(NodeVisitor *nv){nv->visit(this);}
};

class HermanosNode: public BlockNode{
	public:
		HermanosNode():BlockNode(){}
		virtual void accept(NodeVisitor *nv){nv->visit(this);}
};
#endif /* COMPOSITE */
