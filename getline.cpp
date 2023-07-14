#include<iostream>
#include<string>
using std::cout;
using std::string;
using std::getline;
using std::istream;
using std::cin;

int main(){
	string v1;
	cout<<"Escriba una linea:"; //std::cin>>v1;
	//cin.ignore(numeric_limits<int>::max(), '\n');
	getline(std::cin, v1, '\n');
	cout<<v1;
	
}