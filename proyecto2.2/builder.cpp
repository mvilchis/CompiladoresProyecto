#include "composite.cpp"
/*  Fernández Martínez José Ismael
    Trinidad Hernández Norma Verónica
    Vilchis Domínguez Miguel Alonso
    Práctica 03
    Oct 2014
*/

class MASTBuilder:public ASTBuilder{
public:


//STRING 
	Node* bSTRINGNode(string v){
		return new StringNode(v);
	}
// IDENTIFICADOR 
	Node* bIDENTIFICADORNode(string v){
		return new IdentificadorNode(v);
	}
//PRINT 
	Node* bPRINTNode(NodeList* l){
		INode* n = new PrintNode;
		Niterador *it = l->getIterador();
		while(it->hasNext())
			n->addSChild(it->next());
		return n;
	}
//FALSE 
	Node* bFALSENode(){
		return new FalseNode;
	}
//IS 
	Node* bISNode(Node* n1, Node* n2){
		INode* n = new IsNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//RETURN
	Node* bRETURNNode(NodeList* l){
		INode* n = new ReturnNode;
		Niterador *it = l->getIterador();
		while(it->hasNext())
			n->addSChild(it->next());
		return n;
	}
 
//CONTINUE 
	Node* bCONTINUENode(){
		return new ContinueNode;
	}
//FOR 
	Node* bFORNode(NodeList* l){
		INode* n = new ForNode;
		Niterador *it = l->getIterador();
		while(it->hasNext())
			n->addSChild(it->next());
		return n;
	}
//TRUE
	Node* bTRUENode(){
		return new TrueNode;
	}

//WHILE
	Node* bWHILENode(Node* n1, Node* n2){
		INode* n = new WhileNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//AND 
	Node* bANDNode(Node* n1, Node* n2){
		INode* n = new AndNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//DEL
	Node* bDELNode(Node* c){
		INode* n = new DelNode;
		n->setFChild(c);
		return n;
	}
//GLOBAL

//NOT
	Node* bNOTNode(Node* c){
		INode* n = new NotNode;
		n->setFChild(c);
		return n;
	}
//WITH
	Node* bWITHNode(Node* c){
		INode* n = new WithNode;
		n->setFChild(c);
		return n;
	}
//AS
	Node* bASNode(Node* c){
		INode* n = new AsNode;
		n->setFChild(c);
		return n;
	}
//ELIF 
	Node* bELIFNode(NodeList* l){
		INode* n = new ElifNode;
		Niterador *it = l->getIterador();
		while(it->hasNext())
			n->addSChild(it->next());
		return n;
	}
//IF 
	Node* bIFNode(NodeList* l){
		INode* n = new IfNode;
		Niterador *it = l->getIterador();
		while(it->hasNext())
			n->addSChild(it->next());
		return n;
	}
//OR 
	Node* bORNode(Node* n1, Node* n2){
		INode* n = new OrNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//ELSE 
//PASS
	Node* bPASSNode(){
		return new PassNode;
	}
//BREAK
	Node* bBREAKNode(){
		return new BreakNode;
	}
//IN 
//EXEC
	Node* bEXECNode(NodeList* l){
		INode* n = new FuncionNode;
		Niterador *it = l->getIterador();
		while(it->hasNext())
			n->addSChild(it->next());
		return n;
	}
//NIGUAL
	Node* bNIGNode(Node* n1, Node* n2){
		INode* n = new NIgNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//DIGUAL
	Node* bDIGNode(Node* n1, Node* n2){
		INode* n = new DIgNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//MAIGUAL
	Node* bMAYIGNode(Node* n1, Node* n2){
		INode* n = new MayIgNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//MEIGUAL
	Node* bMENIGNode(Node* n1, Node* n2){
		INode* n = new MenIgNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//MAYOR
	Node* bMAYORNode(Node* n1, Node* n2){
		INode* n = new MayorNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//MENOR
	Node* bMENORNode(Node* n1, Node* n2){
		INode* n = new MenorNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//ENETILDE
	Node* bENETILDENode(Node *n){
		return new EnetildeNode(n);
	}
//CIRCUNFLEJO
	Node* bCIRCUNFLEJONode(Node *n){
		return new CircunflejoNode(n);
	}
//PIPE
	Node* bPIPENode(Node* n1, Node* n2){
		INode* n= new PipeNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//AMPERSON
	Node* bAMPERSONNode(Node* n1, Node* n2){
		INode* n= new AmpersonNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//DMAYOR
	Node* bDMAYORNode(Node* n1, Node* n2){
		INode* n= new DMayorNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//DMENOR
	Node* bDMENORNode(Node* n1, Node* n2){
		INode* n= new DMenorNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//PORCEN
	Node* bMODNode(Node* n1, Node* n2){
		INode* n= new ModNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//DDIAG
	Node* bDDIAGNode(Node* n1, Node* n2){
		INode* n= new DDiagNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//DIAG
	Node* bDIVNode(Node* n1, Node* n2){
		INode* n = new DivNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//DASTERISCO
	Node* bDASTERISTICOSNode(Node* n1, Node* n2){
		INode* n = new DAsteriscosNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//ASTERISCO
	Node* bPORNode(Node* n1, Node* n2){
		INode* n = new PorNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//MENOS
	Node* bMENOSNode(Node* n1, Node* n2){
		INode* n = new MenosNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//MAS
	Node* bMASNode(Node* n1, Node* n2){
		INode* n = new MasNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//APAREN
	Node* bAPARENNode(){
		return new AParenNode;
	}
//CPAREN
	Node* bCPARENNode(){
		return new CParenNode;
	}
//ACORCHETE
	Node* bACORCHETENode(){
		return new ACorcheteNode;
	}
//CCORCHETE
	Node* bCCORCHETENode(){
		return new CCorcheteNode;
	}
//ALLAVE
	Node* bALLAVENode(){
		return new AllaveNode;
	}
//CLLAVE
	Node* bCLLAVENode(){
		return new CllaveNode;
	}
//COMA
	Node* bCOMANode(){
		return new ComaNode;
	}
//DPUNTO
	Node* bDPUNTONode(){
		return new DPuntoNode;
	}
//PUNTO
	Node* bPUNTONode(){
		return new PuntoNode;
	}
//PCOMA
	Node* bPCOMANode(){
		return new PComaNode;
	}
//IGUAL
	Node* bIGUALNode(Node* n1, Node* n2){
		INode* n = new IgualNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//MASIGUAL
	Node* bMASIGUALNode(Node* n1, Node* n2){
		INode* n = new MasIgualNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//MENOSIGUAL
	Node* bMENOSIGUALNode(Node* n1, Node* n2){
		INode* n = new MenosIgualNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//ASTIGUAL
	Node* bASIGUALNode(Node* n1, Node* n2){
		INode* n = new AsIgualNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//DIAIGUAL
	Node* bDIAIGUALNode(Node* n1, Node* n2){
		INode* n = new DiaIgualNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//DDIAIGUAL
	Node* bDDIAIGUALNode(Node* n1, Node* n2){
		INode* n = new DDiaIgualNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//PORIGUAL
	Node* bPORIGUALNode(Node* n1, Node* n2){
		INode* n = new PorIgualNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//AMPIGUAL
	Node* bAMPIGUALNode(Node* n1, Node* n2){
		INode* n = new AmpIgualNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//PIPEIGUAL
	Node* bPIPEIGUALNode(Node* n1, Node* n2){
		INode* n = new PipeIgualNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//CIRCIGUAL
	Node* bCIRCIGUALNode(Node* n1, Node* n2){
		INode* n = new CircIgualNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//DMAYORIGUAL
	Node* bDMAYORIGUALNode(Node* n1, Node* n2){
		INode* n = new DMayorIgualNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//DMENORIGUAL
	Node* bDMENORIGUALNode(Node* n1, Node* n2){
		INode* n = new DMenorIgualNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//DASTIGUAL
	Node* bDASTIGUALNode(Node* n1, Node* n2){
		INode* n = new DAstIgualNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//MENORMAYOR
	Node* bAMPIGUALNode(Node* n1, Node* n2){
		INode* n = new AmpIgualNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//NEWLINE
	Node* bNEWLINENode(){
		return new NewLineNode;
	}
//ENTERO 
	Node* bINTNode(int v){
		return new IntNode(v);
	}
//FLOTANTE
	Node* bFLOATNode(float v){
		return new FloatNode(v);
	}
//INDENT 
	Node* bIDENTACIONNode(){
		return new IdentacionNode;
	}
//DEDENT
	Node* bDENTACIONNode(){
		return new DentacionNode;
	}

	
	
	Node* bBOOLNode(bool v){
		return new BoolNode(v);
	}
	
//Funcion	
	Node* bFUNCIONNode(NodeList* l){
		INode* n = new FuncionNode;
		Niterador *it = l->getIterador();
		while(it->hasNext())
			n->addSChild(it->next());
		return n;
	} 
};
