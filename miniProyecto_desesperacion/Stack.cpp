/**
    Stack.cpp
    Provee una estructura de datos tipo Stack

    @author José de Jesús Vargas Muñoz
    @version 1.0 13/08/2014
*/

#include <iostream>

/**
    Clase StackNode, para representar un nodo de la pila
*/
class StackNode
{
public:

    int elem;
    StackNode* next;

    /**
        Constuctor
        @param El entero contenido en el nodo
    */
    StackNode(int number);
    
};


/**
    Constuctor
    @param El entero contenido en el nodo
*/
StackNode::StackNode(int number)
{
    next = NULL;
    elem = number;
}


/**
    Clase Stack, estructura de datos
*/
class Stack
{

private:
    StackNode *first;
    int nData;

public:

    /**
        Constructor sin parámetros
    */
    Stack();

    /**
        Comprueba si la pila está vacía
        @return bool Indicando si la pila está vacía
    */
    bool isEmpty();


    /**
        Borra todos los elementos de la pila
    */
    void clean();


    /**
        Agrega un elemento a la pila
        @param int El entero a agregar 
    */
    void push(int);


    /**
        Remueve el elemento en el tope de la pila
        @return El valor recién eliminado
    */
    int pop();


    /**
        Indica el elemento en el tope de la pila, sin eliminarlo
        @return int El elemento al tope de la pila
    */
    int top();


    /**
        Devuelve el tamaño de la pila
        @return int Número de elementos
    */
    int size();


    /**
        Muestra en pantalla el contenido de la pila
    */
    void printStack();
};


/**
    Constructor sin parámetros
*/
Stack::Stack()
{
    first = NULL;
    nData = 0;
}


/**
    Comprueba si la lista está vacía
    @return bool Indicando si la lista está vacía
*/
bool Stack::isEmpty()
{
    return (first == NULL);
}


/**
    Borra todos los elementos de la pila
*/
void Stack::clean()
{
    StackNode *current = first;
    while (current != NULL)
    {
        StackNode *nextNode = current->next;
        delete(current);
        current = nextNode;
    }
    nData = 0;
}


/**
    Agrega un elemento a la pila
    @param int El entero a agregar 
*/
void Stack::push(int n)
{
    StackNode *sn = new StackNode(n);
    sn->next = first;
    first = sn;
    nData++;
}


/**
    Remueve el elemento en el tope de la pila
    @return El valor recién eliminado
*/
int Stack::pop()
{
    if (isEmpty())
        return -1;

    int value = first->elem;
    StackNode* nextTop = first->next;
    delete(first);
    first = nextTop;
    nData--;
    return value;
}


/**
    Indica el elemento en el tope de la pila, sin eliminarlo
    @return int El elemento al tope de la pila
*/
int Stack::top()
{
    return (isEmpty()) ? -1 : first->elem;
}


/**
    Devuelve el tamaño de la pila
    @return int Número de elementos
*/
int Stack::size()
{
    return nData;
}


/**
    Muestra en pantalla el contenido de la pila
*/
void Stack::printStack()
{
    if (isEmpty())
    {
        std::cout << "Pila vacía" << std::endl;
    }
    StackNode *current = first;
    while (current != NULL)
    {
        std::cout << "# " << current->elem << std::endl;
        current = current->next;
    }
}