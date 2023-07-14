#include<iostream>

struct nodo
{
	int data;
	struct nodo* siguiente;
	
};
struct nodo* top;
void push(int x);
void pop();
void ele_top();
void imprimir();
void empty();

int main()
{
	top =  NULL;
	push(5);
	push(4);
	push(3);
	push(2);
	imprimir();
	pop();
	imprimir();
	push(1);
	imprimir();
	empty();
	ele_top();
}

void push(int x)
{
	struct nodo* temp;
	temp = (nodo*)malloc(sizeof(nodo*));
	temp->data = x;
	temp->siguiente = NULL;
	if(top!=NULL)
	{
		temp->siguiente = top;
		top = temp;
		return;
	}
	top = temp;
}

void pop()
{
	if(top==NULL)
	{
		std::cout<<"\nThe list is already empty";
		return;
	}
	struct nodo* aux = top;
	top = aux->siguiente;
	delete aux;
}

void imprimir()
{
	nodo* temp = top;
	while(temp!=NULL)
	{
		std::cout<<temp->data<<std::endl;
		temp = temp->siguiente;
	}
	std::cout<<std::endl;
}

void ele_top()
{
	std::cout<<top->data;
}

void empty()
{
	if(top==NULL)
	{
		std::cout<<"TRUE"<<std::endl;
		return;
	}
	std::cout<<"FALSE"<<std::endl;
	
}
