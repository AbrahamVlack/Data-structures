//rangos utilizado en switch
#include<iostream>
using std::cout;
using std::endl;

int main(){
	int num;
	cout<<"Digite:"; std::cin>>num;
	switch(num){
		case 1 ... 10: // min ... max 
		cout<<"rango entre 1 y 10"<<endl;
		break;
		case 11 ... 20:
		cout<<"rango entre 11 y 20"<<endl;
		break;
		case 21 ... 30:
		cout<<"rango entre 21 y 30"<<endl;
		break;
	}
	
}