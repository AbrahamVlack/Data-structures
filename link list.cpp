#include<iostream>
using std::cout;
using std::endl;

struct nodo
{
	int data;
	struct nodo* siguiente;
};

int main()
{
	struct nodo* cabeza;
	cabeza = NULL;
	
	struct nodo* temp;
	temp = new nodo(); // (*nodo) malloc(sizeof(nodo))
	
	cabeza = temp;
	temp->data = 3; // (*temp).data
	temp->siguiente = NULL;
	
	cout<<temp->data<<endl;
	cout<<temp->siguiente;
	
	struct nodo* temp2 = new nodo();
	(*temp2).data = 4;
	(*temp2).siguiente = NULL;
	
	temp2 = cabeza;
	temp2 = temp2->siguiente;
	
}

