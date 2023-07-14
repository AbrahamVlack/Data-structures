#include<iostream>

struct nodo
{
	int data;	
	struct nodo* siguiente;
};
struct nodo* front;
struct nodo* back;

void enquere(int x);
void dequere();
void print();
void primero();
void empty();//build


int main()
{
	front = NULL;
	back = NULL;
	enquere(1);
	enquere(2);
	enquere(3);
	print();
	dequere();
	print();
	primero();
}

void enquere(int x)
{
	struct nodo* temp = (nodo*)malloc(sizeof(nodo*));
	temp->data = x;
	temp->siguiente = NULL;
	if(front!=NULL)
	{
		back->siguiente = temp;
		back = temp;
		return;
	}
	front = temp;
	back = temp;
}

void dequere()
{
	struct nodo* temp = front;
	if(front==NULL)return;
	
	front = temp->siguiente;
	delete temp;
}

void print()
{
	struct nodo* temp = front;
	while(temp!=NULL)
	{
		std::cout<<temp->data<<std::endl;
		temp = temp->siguiente;
	}
	std::cout<<std::endl;
}

void primero()
{
	std::cout<<front->data<<std::endl;
}
