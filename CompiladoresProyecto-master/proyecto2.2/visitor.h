/*  Fernández Martínez José Ismael
    Trinidad Hernández Norma Verónica
    Vilchis Domínguez Miguel Alonso
    Práctica 03
    Oct 2014
*/
class Node;
class LeafNode;
class Niterador;
class NodeList;
class LNodeList;
class VNodeList;
class INode;
class BlockNode;
class BinNode;
class UnaNode;
class IntNode;
class StringNode;
class BoolNode;
class ContinueNode;
class PassNode;
class BreakNode;
class FloatNode;
class IdentacionNode;
class IfNode;
class ForNode;
class ReturnNode;
class PrintNode;
class GlobalNode;
class FuncionNode;
class ExecNode;
class WhileNode;
class IsNode;
class AndNode;
class OrNode;
class PorNode;
class MenosNode;
class MasNode;
class DivNode;
class IgualNode;
class DifNode;
class MenorNode;
class MayorNode;
class MenIgNode;
class MayIgNode;
class ModNode;
class DelNode;
class NotNode;
class WithNode;
class AsNode;
class PrintVisitor;
class MASTBuilder;
class NodeVisitor{
protected:
	NodeVisitor(){}
public:
	virtual void visit(IntNode*) = 0;
	virtual void visit(StringNode*) = 0;
	virtual void visit(BoolNode*) = 0;
	virtual void visit(ContinueNode*) = 0;
	virtual void visit(PassNode*) = 0;
	virtual void visit(BreakNode*) = 0;
	virtual void visit(FloatNode*) = 0;
	virtual void visit(IdentacionNode*) = 0;
	virtual void visit(IfNode*) = 0;
	virtual void visit(ForNode*) = 0;
	virtual void visit(ReturnNode*) = 0;
	virtual void visit(PrintNode*) = 0;
	virtual void visit(GlobalNode*) = 0;
	virtual void visit(FuncionNode*) = 0;
	virtual void visit(ExecNode*) = 0;
	virtual void visit(WhileNode*) = 0;
	virtual void visit(IsNode*) = 0;
	virtual void visit(AndNode*) = 0;
	virtual void visit(OrNode*) = 0;
	virtual void visit(PorNode*) = 0;
	virtual void visit(MenosNode*) = 0;
	virtual void visit(MasNode*) = 0;
	virtual void visit(DivNode*) = 0;
	virtual void visit(IgualNode*) = 0;
	virtual void visit(DifNode*) = 0;
	virtual void visit(MenorNode*) = 0;
	virtual void visit(MayorNode*) = 0;
	virtual void visit(MenIgNode*) = 0;
	virtual void visit(MayIgNode*) = 0;
	virtual void visit(ModNode*) = 0;
	virtual void visit(DelNode*) = 0;
	virtual void visit(NotNode*) = 0;
	virtual void visit(WithNode*) = 0;
	virtual void visit(AsNode*) = 0;
};
class ASTBuilder{
public:
	virtual Node * bINTNode () = 0;
	virtual Node * bOPERADORNode () = 0;
	virtual Node * bBOOLNode () = 0;
	virtual Node * bCONTINUENode () = 0;
	virtual Node * bPASSNode () = 0;
	virtual Node * bBREAKNode () = 0; 
	virtual Node * bFLOATNode () = 0;
	virtual Node * bIDENTACIONNode () = 0;
	virtual Node * bIFNode () = 0;
	virtual Node * bFORNode () = 0;
	virtual Node * bRETURNNode () = 0;
	virtual Node * bPRINTNode () = 0;
	virtual Node * bGLOBALNode () = 0;
	virtual Node * bFUNCIONNode () = 0;
	virtual Node * bEXECNode () = 0;
	virtual Node * bWHILENode () = 0;
	virtual Node * bISNode () = 0;
	virtual Node * bANDNode () = 0;
	virtual Node * bORNode () = 0;
	virtual Node * bPORNode () = 0;
	virtual Node * bMENOSNode () = 0;
	virtual Node * bMASNode () = 0;
	virtual Node * bDIVNode () = 0;
	virtual Node * bIGUALNode () = 0;
	virtual Node * bMENORNode () = 0;
	virtual Node * bMAYORNode () = 0;
	virtual Node * bMENIGNode () = 0;
	virtual Node * bMAYIGNode () = 0;
	virtual Node * bMODNode () = 0;
	virtual Node * bDELNode () = 0;
	virtual Node * bNOTNode () = 0;
	virtual Node * bWITHNode () = 0;
	virtual Node * bASNode () = 0;
};