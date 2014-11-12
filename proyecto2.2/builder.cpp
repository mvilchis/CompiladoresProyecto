#include "composite.cpp"
/*  Fernández Martínez José Ismael
    Trinidad Hernández Norma Verónica
    Vilchis Domínguez Miguel Alonso
    Práctica 03
    Oct 2014
*/

class MASTBuilder:public ASTBuilder{
public:
	Node* bINTNode(int v){
		return new IntNode(v);
	}
	Node* bSTRINGNode(string v){
		return new StringNode(v);
	}
	Node* bBOOLNode(bool v){
		return new BoolNode(v);
	}
	Node* bCONTINUENode(){
		return new ContinueNode;
	}
	Node* bPASSNode(){
		return new PassNode;
	}
	Node* bBREAKNode(){
		return new BreakNode;
	}
	Node* bFLOATNode(float v){
		return new FloatNode(v);
	}
	Node* bIDENTACIONNode(){
		return new IdentacionNode;
	}
	Node* bIFNode(NodeList* l){
		INode* n = new IfNode;
		Niterador *it = l->getIterador();
		while(it->hasNext())
			n->addSChild(it->next());
		return n;
	}
	Node* bFORNode(NodeList* l){
		INode* n = new ForNode;
		Niterador *it = l->getIterador();
		while(it->hasNext())
			n->addSChild(it->next());
		return n;
	}
	Node* bRETURNNode(NodeList* l){
		INode* n = new ReturnNode;
		Niterador *it = l->getIterador();
		while(it->hasNext())
			n->addSChild(it->next());
		return n;
	}
	Node* bPRINTNode(NodeList* l){
		INode* n = new PrintNode;
		Niterador *it = l->getIterador();
		while(it->hasNext())
			n->addSChild(it->next());
		return n;
	}
	Node* bGLOBALNode(NodeList* l){
		INode* n = new GlobalNode;
		Niterador *it = l->getIterador();
		while(it->hasNext())
			n->addSChild(it->next());
		return n;
	}
	Node* bFUNCIONNode(NodeList* l){
		INode* n = new FuncionNode;
		Niterador *it = l->getIterador();
		while(it->hasNext())
			n->addSChild(it->next());
		return n;
	}
	Node* bEXECNode(NodeList* l){
		INode* n = new FuncionNode;
		Niterador *it = l->getIterador();
		while(it->hasNext())
			n->addSChild(it->next());
		return n;
	}
	Node* bWHILENode(Node* n1, Node* n2){
		INode* n = new WhileNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
	Node* bISNode(Node* n1, Node* n2){
		INode* n = new IsNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
	Node* bANDNode(Node* n1, Node* n2){
		INode* n = new AndNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
	Node* bORNode(Node* n1, Node* n2){
		INode* n = new OrNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
	Node* bPORNode(Node* n1, Node* n2){
		INode* n = new PorNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
	Node* bMENOSNode(Node* n1, Node* n2){
		INode* n = new MenosNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
	Node* bMASNode(Node* n1, Node* n2){
		INode* n = new MasNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
	Node* bDIVNode(Node* n1, Node* n2){
		INode* n = new DivNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
	Node* bIGUALNode(Node* n1, Node* n2){
		INode* n = new IgualNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
	Node* bDIFNode(Node* n1, Node* n2){
		INode* n = new DifNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
	Node* bMENORNode(Node* n1, Node* n2){
		INode* n = new MenorNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
	Node* bMAYORNode(Node* n1, Node* n2){
		INode* n = new MayorNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
	Node* bMENIGNode(Node* n1, Node* n2){
		INode* n = new MenIgNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
	Node* bMAYIGNode(Node* n1, Node* n2){
		INode* n = new MayIgNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
	Node* bMODNode(Node* n1, Node* n2){
		INode* n= new ModNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
	Node* bDELNode(Node* c){
		INode* n = new DelNode;
		n->setFChild(c);
		return n;
	}
	Node* bNOTNode(Node* c){
		INode* n = new NotNode;
		n->setFChild(c);
		return n;
	}
	Node* bWITHNode(Node* c){
		INode* n = new WithNode;
		n->setFChild(c);
		return n;
	}
	Node* bASNode(Node* c){
		INode* n = new AsNode;
		n->setFChild(c);
		return n;
	}
};