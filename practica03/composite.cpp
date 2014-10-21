#include <iostream>
#include <vector>
#include <list>

using namespace std;

//Componente
class Node{};

class LeafNode: public Node{
	
};

class NodeList{
    //virtual bool empty()=0;
};

class LNodeList: public NodeList{

};

class VNodeList: public NodeList{
public:
	VNodeList(int nls){}
};

class INode: public Node{
private:
	NodeList* chen;
public:
	INode(int nls):Node(){chen = new VNodeList(nls);}
	INode():Node(){chen=new LNodeList();}
	void AddFChild(Node n){

	}
	void AddSChild(Node n){

	}

	void SetFChild(Node n){

	}
	void SetSChild(Node n){

	}
	
};

class BlockNode: public INode {
    public:
        BlockNode():INode() {}
        //Implementar agregar hijos
        
};
class BinNode: public INode {
    public:
        BinNode():INode(2) {}
        //Implementar set hijos
};
class intNode : public LeafNode {
    public:
        int valor;
        intNode(int valor):LeafNode(){this->valor=valor;}
        //virtual void accept(NodeVisitor *nv) {
        //nv.visit(this);
};
/*********************************
 *
 *      Seccion de terminales
 *
 *********************************/
String
Identificador
False
Continue
True

/**********************************
 *
 *      Seccion de no terminales 
 *
 *********************************/
class ifNode: public BlockNode {
    public:
        ifNode():BlockNode() {}
       
};
class forNode: public BlockNode {
    public:
        forNode():BlockNode() {}
       
};
Return
class WhileNode: public BinNode {
    public: 

}
/*********************************
 *
 * Seccion de unarios
 *
 *********************************/
Print

int main(){
	return 0;
}
