#include "composite.cpp"
/*  Fernández Martínez José Ismael
    Trinidad Hernández Norma Verónica
    Vilchis Domínguez Miguel Alonso
    Práctica 03
    Oct 2014
*/

class MASTBuilder:public ASTBuilder{
public:


//*STRING 
	Node* bSTRINGNode(string v){
		return new StringNode(v);
	}
//IDENTIFICADOR 
	Node* bIDENTIFICADORNode(string v){
		return new IdentificadorNode(v);
	}
//PRINT 
	Node* bPRINTNode(NodeList* l){
		Node* n = new PrintNode;
		Niterador *it = l->getIterador();
		while(it->hasNext())
			n->addSChild(it->next());
		return n;
	}

	Node* bPRINTNode(Node* c){
		Node* n = new PrintNode;
		n->setFChild(c);
		return n;
	}
//FALSE 
	Node* bFALSENode(){
		return new FalseNode;
	}
//IS 
	/*Node* bISNode(Node* n1, Node* n2){
		Node* n = new IsNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
	Node* bISNode(){
		return new IsNode;
	}*/
//RETURN
	Node* bRETURNNode(NodeList* l){
		Node* n = new ReturnNode;
		Niterador *it = l->getIterador();
		while(it->hasNext())
			n->addSChild(it->next());
		return n;
	}
	Node* bRETURNNode(){
		return new ReturnNode;
	}
	Node* bRETURNNode(Node* c){
		Node* n = new ReturnNode;
		n->setFChild(c);
		return n;	
	}
 
//CONTINUE 
	Node* bCONTINUENode(){
		return new ContinueNode;
	}
//FOR 
	Node* bFORNode(NodeList* l){
		Node* n = new ForNode;
		Niterador *it = l->getIterador();
		while(it->hasNext())
			n->addSChild(it->next());
		return n;
	}

	Node* bFORNode(Node* c1, Node* c2, Node* c3) {
		Node* n = new ForNode;
		n->addSChild(c1);
		n->addSChild(c2);
		n->addSChild(c3);
		return n;
	}

	Node* bFORELSENode(Node* n1, Node* n2){
		Node* n= new ForElseNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//TRUE
	Node* bTRUENode(){
		return new TrueNode;
	}

//WHILE
	Node* bWHILENode(Node* n1, Node* n2){
		Node* n = new WhileNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}

	Node* bWHILEELSENode(Node* n1, Node* n2){
		Node* n= new WhileElseNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//AND 
	Node* bANDNode(Node* n1, Node* n2){
		Node* n = new AndNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//DEL
	Node* bDELNode(Node* c){
		Node* n = new DelNode;
		n->setFChild(c);
		return n;
	}
//GLOBAL
	Node* bGLOBALNode(NodeList* l){
		Node* n = new GlobalNode;
		Niterador *it = l->getIterador();
		while(it->hasNext())
			n->addSChild(it->next());
		return n;
	}
//NOT
	Node* bNOTNode(Node* c){
		Node* n = new NotNode;
		n->setFChild(c);
		return n;
	}
//WITH
	Node* bWITHNode(Node* c){
		Node* n = new WithNode;
		n->setFChild(c);
		return n;
	}
//AS
	Node* bASNode(Node* c){
		Node* n = new AsNode;
		n->setFChild(c);
		return n;
	}
//ELIF 
	Node* bELIFNode(NodeList* l){
		Node* n = new ElIfNode;
		Niterador *it = l->getIterador();
		while(it->hasNext())
			n->addSChild(it->next());
		return n;
	}
//IF 
	Node* bIFNode(NodeList* l){
		Node* n = new IfNode;
		Niterador *it = l->getIterador();
		while(it->hasNext())
			n->addSChild(it->next());
		return n;
	}

	Node* bIFNode(Node* c1, Node* c2, Node* c3) {
		Node* n = new IfNode;
		n->addSChild(c1);
		n->addSChild(c2);
		if(c3!=NULL) n->addSChild(c3);
		return n;
	}

	Node* bIFELSENode(Node* n1, Node* n2){
		Node* n= new IfElseNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//OR 
	Node* bORNode(Node* n1, Node* n2){
		Node* n = new OrNode;
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
		Node* n = new FuncionNode;
		Niterador *it = l->getIterador();
		while(it->hasNext())
			n->addSChild(it->next());
		return n;
	}
//NIGUAL
	Node* bNIGNode(Node* n1, Node* n2){
		Node* n = new NIgNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
	Node* bNIGNode(){
		return new NIgNode;
	}
//DIGUAL
	Node* bDIGNode(Node* n1, Node* n2){
		Node* n = new DIgNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
	Node* bDIGNode(){
		return new DIgNode;
	}
//MAIGUAL
	Node* bMAYIGNode(Node* n1, Node* n2){
		Node* n = new MayIgNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
	Node* bMAYIGNode(){
		return new MayIgNode;
	}
//MEIGUAL
	Node* bMENIGNode(Node* n1, Node* n2){
		Node* n = new MenIgNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
	Node* bMENIGNode(){
		return new MenIgNode;
	}
//MAYOR
	Node* bMAYORNode(Node* n1, Node* n2){
		Node* n = new MayorNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
	Node* bMAYORNode(){
		return new MayorNode;
	}
//MENOR
	Node* bMENORNode(Node* n1, Node* n2){
		Node* n = new MenorNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
	Node* bMENORNode() {
	return new MenorNode;
	}
//ENETILDE
	Node* bENETILDENode(Node* c){
		Node* n = new EnetildeNode;
		n->setFChild(c);
		return n;
	}
//CIRCUNFLEjo
	Node* bCIRCUNFLEJONode(Node* n1, Node* n2){
		Node* n = new CircunflejoNode;
		n->setFChild(n1);
		n->setFChild(n2);
		return n;
	}
//PIPE
	Node* bPIPENode(Node* n1, Node* n2){
		Node* n= new PipeNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//AMPERSON
	Node* bAMPERSONNode(Node* n1, Node* n2){
		Node* n= new AmpersonNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//DMAYOR
	Node* bDMAYORNode(Node* n1, Node* n2){
		Node* n= new DMayorNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//DMENOR
	Node* bDMENORNode(Node* n1, Node* n2){
		Node* n= new DMenorNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//PORCEN
	Node* bMODNode(Node* n1, Node* n2){
		Node* n= new ModNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
	Node* bMODNode(){
		return new ModNode;
	}
//DDIAG
	Node* bDDIAGNode(Node* n1, Node* n2){
		Node* n= new DDiagNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
	Node* bDDIAGNode(){
		return new DDiagNode;
	}
//DIAG
	Node* bDIVNode(Node* n1, Node* n2){
		Node* n = new DivNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
	Node* bDIVNode(){
		return new DivNode;
	}
//DASTERISCO
	Node* bDASTERISTICOSNode(Node* n1, Node* n2){
		Node* n = new DAsteriscosNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
//ASTERISCO
	Node* bPORNode(Node* n1, Node* n2){
		Node* n = new PorNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
	Node* bPORNode(){
		return new PorNode;
	}
//MENOS
	Node* bMENOSNode(Node* n1, Node* n2){
		Node* n = new MenosNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}

	Node* bMENOSNode(){
		return new MenosNode;
	}
//MAS
	Node* bMASNode(Node* n1, Node* n2){
		Node* n = new MasNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}

	Node* bMASNode(){
		return new MasNode;
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
		return new ALlaveNode;
	}
//CLLAVE
	Node* bCLLAVENode(){
		return new CLlaveNode;
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
		Node* n = new IgualNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}

	Node* bIGUALNode(){
		return new IgualNode;
	}
//MASIGUAL
	Node* bMASIGUALNode(Node* n1, Node* n2){
		Node* n = new MasIgualNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}

	Node* bMASIGUALNode(){
		return new MasIgualNode;
	}
//MENOSIGUAL
	Node* bMENOSIGUALNode(Node* n1, Node* n2){
		Node* n = new MenosIgualNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}

	Node* bMENOSIGUALNode(){
		return new MenosIgualNode;
	}
//ASTIGUAL
	Node* bASIGUALNode(Node* n1, Node* n2){
		Node* n = new AsIgualNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}

	Node* bASIGUALNode(){
		return new AsIgualNode;
	}
//DIAIGUAL
	Node* bDIAIGUALNode(Node* n1, Node* n2){
		Node* n = new DiaIgualNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}

	Node* bDIAIGUALNode(){
		return new DiaIgualNode;
	}
//DDIAIGUAL
	Node* bDDIAIGUALNode(Node* n1, Node* n2){
		Node* n = new DDiaIgualNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}

	Node* bDDIAIGUALNode(){
		return new DDiaIgualNode;
	}
//PORIGUAL
	Node* bPORIGUALNode(Node* n1, Node* n2){
		Node* n = new PorIgualNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}

	Node* bPORIGUALNode(){
		return new PorIgualNode;
	}
//AMPIGUAL
	Node* bAMPIGUALNode(Node* n1, Node* n2){
		Node* n = new AmpIgualNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}

	Node* bAMPIGUALNode(){
		return new AmpIgualNode;
	}
//PIPEIGUAL
	Node* bPIPEIGUALNode(Node* n1, Node* n2){
		Node* n = new PipeIgualNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}

	Node* bPIPEIGUALNode(){
		return new PipeIgualNode;
	}
//CIRCIGUAL
	Node* bCIRCIGUALNode(Node* n1, Node* n2){
		Node* n = new CircIgualNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}

	Node* bCIRCIGUALNode(){
		return new CircIgualNode;
	}
//DMAYORIGUAL
	Node* bDMAYORIGUALNode(Node* n1, Node* n2){
		Node* n = new DMayorIgualNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
	Node* bDMAYORIGUALNode(){
		return new DMayorIgualNode;
	}
//DMENORIGUAL
	Node* bDMENORIGUALNode(Node* n1, Node* n2){
		Node* n = new DMenorIgualNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}

	Node* bDMENORIGUALNode(){
		return new DMenorIgualNode;
	}
//DASTIGUAL
	Node* bDASTIGUALNode(Node* n1, Node* n2){
		Node* n = new DAstIgualNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}

	Node* bDASTIGUALNode(){
		return new DAstIgualNode;
	}
//MENORMAYOR
	Node* bMENORMAYORNode(Node* n1, Node* n2){
		Node* n = new MenorMayorNode;
		n->setFChild(n1);
		n->setSChild(n2);
		return n;
	}
	Node* bMENORMAYORNode(){
		return new MenorMayorNode;
	}
//NEWLINE
	Node* bNEWLINENode(){
		return new NewLineNode;
	}
//*ENTERO 
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
//In
	Node* bINNode(){
		return new InNode;
	}
//notin
	Node* bNOTINNode(){
		return new NotInNode;
	}
//Is
	Node* bISNode(){
		return new IsNode;
	}
//isnot
	Node* bISNOTNode(){
		return new IsNotNode;
	}
	
	
	//Node* bBOOLNode(bool v){
	//	return new BoolNode(v);
	//}
	Node* bFUNCIONNode(NodeList* l){
		Node* n = new FuncionNode;
		Niterador *it = l->getIterador();
		while(it->hasNext())
			n->addSChild(it->next());
		return n;
	}

	Node* bFUNCIONNode(Node* a, Node* b, Node* c){
		Node* n = new FuncionNode;
		n->addSChild(a);
		n->addSChild(b);
		n->addSChild(c);
		return n;
	}
	Node* bHERMANOSNode(Node* a, Node* b){
		//LNodeList* lnp = new LNodeList();
		Node* n = new HermanosNode;
		Niterador *it=a->getChild();
		while (it->hasNext())
			n->addSChild(it->next());
		it= b->getChild();
		while (it->hasNext())
			n->addSChild(it->next());
		return n;
	}
	Node* bHERMANOSNode(Node* a){
		//LNodeList* l = new LNodeList();
		Node* n = new HermanosNode;
			n->addSChild(a);
		return n;
	}
	Node* bHERMANOSNode(){
		Node* n = new HermanosNode;
		return n;
	}
	Node* bHERMANOSNode(NodeList* l){
		Node* n = new HermanosNode;
		Niterador *it = l->getIterador();
		while(it->hasNext())
			n->addSChild(it->next());
		return n;
	
	}

	Node* bARGNode() {
		Node* n = new ArgNode;
		return n;
	}

	Node* bARGNode(Node* a, Node* b) {
		Node* n = new ArgNode;
		Niterador *it=a->getChild();
		while (it->hasNext())
			n->addSChild(it->next());
		it= b->getChild();
		while (it->hasNext())
			n->addSChild(it->next());
		return n;
	}

	Node* bARGNode(Node* c) {
		Node* n = new ArgNode;
		n->addSChild(c);
		return n;
	}



};
