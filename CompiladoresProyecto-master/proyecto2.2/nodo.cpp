/************************************************
 * @file nodo.cpp
 *
 * @brief 
 *
 * @author Vilchis Domínguez Miguel Alonso 
 *          <mvilchis@ciencias.unam.mx>
 *
 * Copyright (C) 2014
 *
 *************************************************/
#include <iostream>
class Nodo {
    public:
        void setFChild();
        
};
class LeafNode: public Nodo {

};
class INode: public Nodo {

};
class BlackNode: public Nodo{
};
class BinNode: public Nodo {


};

class NodoBool: public Nodo {
    public:
        bool valor;


};
class NodoIf: public Nodo {
    public:
        Nodo *elseNodo;
        Nodo *ifNodo;
        NodoBool *check;
        
};
    int main()
    {
        return 0;
    }

