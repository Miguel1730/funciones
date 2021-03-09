#include <stdio.h>
#include <iostream>
using namespace std;

void max (int,int);

int main (){
	int N1,N2;
	cout<< "Introduzca el valor de primer operando: "<< endl;
	cin>>N1;
	cout<< "Introduzca el valor de segundo operando: "<< endl;
	cin>>N2;
	max (N1,N2);
	return 1;
}
void max (int A, int B){
	if (A>B){
		cout<<"El mayor es: "<<A<<endl;
		}
		else if (A<B){
			cout<<"El mayor es: "<<B<<endl;
		}
		else
		cout<<"Ambos son iguales"<<endl;
	}
