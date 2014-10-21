#include <iostream>
#include <vector>
#include <list>

using namespace std;

//Componente
class Node{};

class LeafNode: public Node{
	
};

class NodeList{
	virtual bool empty()=0;
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
	//INode():Node(),chen(new LNodeList())
	void AddFChild(Node n){

	}
	void AddSChild(Node n){

	}

	void SetFChild(Node n){

	}
	void SetSChild(Node n){

	}
	
};






int main(){
	return 0;
}