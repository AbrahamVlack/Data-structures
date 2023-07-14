#include<iostream>
using std::cout;
using std::endl;

void push(int* pointer, int A[], int valor);
void pop(int* pointer);
void mostrar_top(int* pointer, int A[]);
void empty(int* pointer); 
void print(int* pointer, int A[]);

int main()
{
	int A[10];
	int* ptr;
	int top = -1;
	ptr = &top;
	push(ptr, A, 1);
	push(ptr, A, 2);
	push(ptr, A, 3);
	push(ptr, A, 4);
	push(ptr, A, 5);
	push(ptr, A, 6);
	push(ptr, A, 7);
	push(ptr, A, 8);
	push(ptr, A, 9);
	print(ptr, A);
	pop(ptr);
	print(ptr, A);
	push(ptr, A, 9);
	push(ptr, A, 10);
	
	
	mostrar_top(ptr,A);
	empty(ptr);
}

void push(int* pointer, int A[], int valor)
{
	if(*pointer>10)
	{
		cout<<"\nError: Stack overflow";
		return;
	}
	
	*pointer = *pointer+1;
	A[*pointer] = valor;
	return;
}

void pop(int* pointer)
{
	*pointer = *pointer-1;
}

void print(int* pointer, int A[])
{
	for(int i=0; i <= *pointer; i++)
	cout<<A[i]<<endl;
	
	cout<<endl;
}

void mostrar_top(int* pointer, int A[])
{
	cout<<A[*pointer];
	cout<<endl;
}

void empty(int* pointer)
{
	if(* pointer==-1)
	{
		cout<<"\nLa lista esta vacia";
		return;
	}
	else
	cout<<"\nLa lista no esta vacia";
}