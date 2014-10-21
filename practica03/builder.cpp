class ASTBuilder {
	public :
	virtual void makeSiblings (Node * n, Node * ns) = 0;
	virtual Node * bSTRINGNode () = 0;
	virtual Node * bOPERADORNode () = 0;
	virtual Node * bIDENTIFICADORNode () = 0;
	virtual Node * bPRINTNode () = 0;
	virtual Node * bFALSENode () = 0;
	virtual Node * bCLASSNode () = 0; 
	virtual Node * bFINALLYNode () = 0;
	virtual Node * bISNode () = 0;
	virtual Node * bRETURNNode () = 0;
	virtual Node * bNONENode () = 0;
	virtual Node * bCONTINUENode () = 0;
	virtual Node * bFORNode () = 0;
	virtual Node * bLAMBDANode () = 0;
	virtual Node * bTRYNode () = 0;
	virtual Node * bTRUENode () = 0;
	virtual Node * bDEFNode () = 0;
	virtual Node * bFROMNode () = 0;
	virtual Node * bNONLOCALNode () = 0;
	virtual Node * bWHILENode () = 0;
	virtual Node * bANDNode () = 0;
	virtual Node * bDELNode () = 0;
	virtual Node * bGLOBALNode () = 0;
	virtual Node * bNOTNode () = 0;
	virtual Node * bWITHNode () = 0;
	virtual Node * bASNode () = 0;
	virtual Node * bELIFNode () = 0;
	virtual Node * bIFNode () = 0;
	virtual Node * bORNode () = 0;
	virtual Node * bYIELDNode () = 0;
	virtual Node * bASSERTNode () = 0;
	virtual Node * bELSENode () = 0;
	virtual Node * bIMPORTNode () = 0;
	virtual Node * bPASSNode () = 0;
	virtual Node * bBREAKNode () = 0;
	virtual Node * bEXCEPTNode () = 0;
	virtual Node * bINNode () = 0;
	virtual Node * bRAISENode () = 0;
	virtual Node * bEXECNode () = 0;
	virtual Node * bNIGUALNode () = 0;
	virtual Node * bDIGUALNode () = 0;
	virtual Node * bMAIGUALNode () = 0;
	virtual Node * bMEIGUALNode () = 0;
	virtual Node * bMAYORNode () = 0;
	virtual Node * bMENORNode () = 0;
	virtual Node * bENETILDENode () = 0;
	virtual Node * bCIRCUNFLEJONode () = 0;
	virtual Node * bPIPENode () = 0;
	virtual Node * bAMPERSONNode () = 0;
	virtual Node * bDMAYORNode () = 0;
	virtual Node * bDMENORNode () = 0;
	virtual Node * bPORCENNode () = 0;
	virtual Node * bDDIAGNode () = 0;
	virtual Node * bDIAGNode () = 0;
	virtual Node * bDASTERISCONode () = 0;
	virtual Node * bASTERISCONode () = 0;
	virtual Node * bMENOSNode () = 0;
	virtual Node * bMASNode () = 0;
	virtual Node * bATNode () = 0;
	virtual Node * bIGUALNode () = 0;
	virtual Node * bMENOSMAYORNode () = 0;
	virtual Node * bMASIGUALNode () = 0;
	virtual Node * bMENOSIGUALNode () = 0;
	virtual Node * bASTIGUALNode () = 0;
	virtual Node * bDIAIGUALNode () = 0;
	virtual Node * bDDIAIGUALNode () = 0;
	virtual Node * bPORIGUALNode () = 0;
	virtual Node * bAMPIGUALNode () = 0;
	virtual Node * bPIPEIGUALNode () = 0;
	virtual Node * bCIRCIGUALNode () = 0;
	virtual Node * bDMAYORIGUALNode () = 0;
	virtual Node * bDMENORIGUALNode () = 0;
	virtual Node * bDASTIGUALNode () = 0;
	virtual Node * bMENORMAYORNode () = 0;
	virtual Node * bDIDIAGNode () = 0;
	virtual Node * bENTERONode () = 0;
	virtual Node * bFLOTANTENode () = 0;


};

void MASTBuilder :: makeSiblings(Node * n , Node * ns){
	n−>makeSiblings(ns);
}

Node * MASTBuilder :: bSTRINGNode(){
	return new bSTRINGNode;
}

Node * MASTBuilder :: bOPERADORNode(){
	return new bOPERADORNode;
}

Node * MASTBuilder :: bIDENTIFICADORNode(){
	return new bIDENTIFICADORNode;
}

Node * MASTBuilder :: bPRINTNode(){
	return new bPRINTNode;
}

Node * MASTBuilder :: bFALSENode(){
	return new bFALSENode;
}

Node * MASTBuilder :: bCLASSNode(){
	return new bCLASSNode;
}

Node * MASTBuilder :: bFINALLYNode(){
	return new bFINALLYNode;
}

Node * MASTBuilder :: bISNode(){
	return new bISNode;
}

Node * MASTBuilder :: bRETURNNode(){
	return new bRETURNNode;
}

Node * MASTBuilder :: bNONENode(){
	return new bNONENode;
}

Node * MASTBuilder :: bCONTINUENode(){
	return new bCONTINUENode;
}

Node * MASTBuilder :: bFORNode(){
	return new bFORNode;
}

Node * MASTBuilder :: bLAMBDANode(){
	return new bLAMBDANode;
}

Node * MASTBuilder :: bTRYNode(){
	return new bTRYNode;
}

Node * MASTBuilder :: bTRUENode(){
	return new bTRUENode;
}

Node * MASTBuilder :: bDEFNode(){
	return new bDEFNode;
}

Node * MASTBuilder :: bFROMNode(){
	return new bFROMNode;
}

Node * MASTBuilder :: bNONLOCALNode(){
	return new bNONLOCALNode;
}

Node * MASTBuilder :: bWHILENode(){
	return new bWHILENode;
}

Node * MASTBuilder :: bANDNode(){
	return new bANDNode;
}

Node * MASTBuilder :: bDELNode(){
	return new  bDELNode;
}

Node * MASTBuilder :: bGLOBALNode(){
	return new bGLOBALNode;
}

Node * MASTBuilder :: bNOTNode(){
	return new bNOTNode;
}

Node * MASTBuilder :: bWITHNode(){
	return new bWITHNode;
}

Node * MASTBuilder :: bASNode(){
	return new bASNode;
}

Node * MASTBuilder :: bELIFNode(){
	return new bELIFNode;
}

Node * MASTBuilder :: bIFNode(){
	return new bIFNode;
}

Node * MASTBuilder :: bORNode(){
	return new bORNode;
}

Node * MASTBuilder :: bYIELDNode(){
	return new bYIELDNode;
}

Node * MASTBuilder :: bASSERTNode(){
	return new bASSERTNode;
}

Node * MASTBuilder :: bELSENode(){
	return new bELSENode;
}

Node * MASTBuilder :: bIMPORTNode(){
	return new bIMPORTNode;
}

Node * MASTBuilder :: bPASSNode(){
	return new bPASSNode;
}

Node * MASTBuilder :: bBREAKNode(){
	return new bBREAKNode;
}

Node * MASTBuilder :: bEXCEPTNode(){
	return new bEXCEPTNode;
}

Node * MASTBuilder :: bINNode(){
	return new bINNode;
}

Node * MASTBuilder :: bRAISENode(){
	return new bRAISENode;
}

Node * MASTBuilder :: bEXECNode(){
	return new bEXECNode;
}

Node * MASTBuilder :: bNIGUALNode(){
	return new bNIGUALNode;
}

Node * MASTBuilder :: bDIGUALNode(){
	return new  bDIGUALNode;
}

Node * MASTBuilder :: bMAIGUALNode(){
	return new bMAIGUALNode:
}

Node * MASTBuilder :: bMEIGUALNode(){
	return new bMEIGUALNode;
}

Node * MASTBuilder :: bMAYORNode(){
	return new bMAYORNode;
}

Node * MASTBuilder :: bMENORNode(){
	return new bMENORNode;
}

Node * MASTBuilder :: bENETILDENode(){
	return new bENETILDENode;
}

Node * MASTBuilder :: bCIRCUNFLEJONode(){
	return new bCIRCUNFLEJONode;
}

Node * MASTBuilder :: bPIPENode(){
	return new bPIPENode;
}

Node * MASTBuilder :: bAMPERSONNode(){
	return new bAMPERSONNode;
}

Node * MASTBuilder :: bDMAYORNode(){
	return new bDMAYORNode;
}

Node * MASTBuilder :: bDMENORNode(){
	return new bDMENORNode;
}

Node * MASTBuilder :: bPORCENNode(){
	return new bPORCENNode;
}

Node * MASTBuilder :: bDDIAGNode(){
	return new bDDIAGNode;
}

Node * MASTBuilder :: bDIAGNode(){
	return new bDIAGNode;
}

Node * MASTBuilder :: bDASTERISCONode(){
	return new bDASTERISCONode;
}

Node * MASTBuilder :: bASTERISCONode(){
	return new bASTERISCONode;
}

Node * MASTBuilder :: bMENOSNode(){
	return new bMENOSNode;
}

Node * MASTBuilder :: bMASNode(){
	return new bMASNode;
}

Node * MASTBuilder :: bATNode(){
	return new bATNode;
}

Node * MASTBuilder :: bIGUALNode(){
	return new bIGUALNode;
}

Node * MASTBuilder :: bMENOSMAYORNode(){
	return new bMENOSMAYORNode;
}

Node * MASTBuilder :: bMASIGUALNode(){
	return new bMASIGUALNode;
}

Node * MASTBuilder :: bMENOSIGUALNode(){
	return new bMENOSIGUALNode;
}

Node * MASTBuilder :: bASTIGUALNode(){
	return new bASTIGUALNode;
}

Node * MASTBuilder :: bDIAIGUALNode(){
	return new bDIAIGUALNode;
}

Node * MASTBuilder :: bDDIAIGUALNode(){
	return new bDDIAIGUALNode;
}

Node * MASTBuilder :: bPORIGUALNode(){
	return new bPORIGUALNode;
}

Node * MASTBuilder :: bAMPIGUALNode(){
	return new bAMPIGUALNode;
}

Node * MASTBuilder :: bPIPEIGUALNode(){
	return new bPIPEIGUALNode;
}

Node * MASTBuilder :: bCIRCIGUALNode(){
	return new bCIRCIGUALNode;
}

Node * MASTBuilder :: bDMAYORIGUALNode(){
	return new bDMAYORIGUALNode;
}

Node * MASTBuilder :: bDMENORIGUALNode(){
	return new bDMENORIGUALNode;
}

Node * MASTBuilder :: bDASTIGUALNode(){
	return new bDASTIGUALNode;
}

Node * MASTBuilder :: bMENORMAYORNode(){
	return new bMENORMAYORNode;
}

Node * MASTBuilder :: bENTERONode(){
	return new bENTERONode;
}

Node * MASTBuilder :: bFLOTANTENode(){
	return new bFLOTANTENode;
}

Node * MASTBuilder :: bDIDIAGNode(){
	return new bDIDIAGNode;
}
