#include<iostream>
using std::cout;
using std::endl;

struct nodo{
	int data;
	nodo* izq;
	nodo* der;
};

struct nodo* new_nodo(int x)
{
	nodo* temp = new nodo();	
	temp->data = x;
	temp->izq = NULL;
	temp->der = NULL;
	
	return temp;
};

struct nodo* raiz;

int main()
{
	raiz = NULL;
	nodo* temp = new_nodo(1);
	raiz = temp;
	
	nodo* temp2 = new_nodo(2);
	temp->izq = temp2;
	
	nodo* temp3 = new_nodo(3);
	temp->der = temp3;
	
	cout<<"Raiz: ";
	cout<<temp->data;
	cout<<"\nizq :";
	cout<<temp->izq->data;
	cout<<"\nder :";
	cout<<temp->der->data;
	
}
