#include<iostream>


struct nodo
{
	int data;
	struct nodo* siguiente;
};

struct nodo* cabeza;
void insertar(int x);
void imprimir();

int main()
{
	cabeza = NULL;
	insertar(10);
	insertar(9);
	insertar(8);
	insertar(7);
	insertar(6);
	imprimir();
	
}

void insertar(int x)
{
	nodo* temp = new nodo();
	temp->data = x;
	temp->siguiente = NULL;
	
	if(cabeza!=NULL)
	{
		temp->siguiente = cabeza;
	}
	
	cabeza = temp;
}

void imprimir()
{
	struct nodo* temp;
	temp = cabeza;
	while(temp!=NULL)
	{
		std::cout<<temp->data<<std::endl;
		temp = temp->siguiente;
	}
}