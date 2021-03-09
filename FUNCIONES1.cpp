#include <stdio.h>
#include <iostream>
using namespace std;

void suma(int A,int B);

int main(){
	int N1,N2;
	cout <<"Introduzca el valor de primer operando: "<<endl;
	    cin>>N1;
	cout <<"Introduzca el valor de segundo operando: "<<endl;
		cin>>N2;
		suma(N1,N2);
		return 1;
}
void suma(int A,int B){
	int C = A + B;
	cout<<" El resultado de la suma es : \n" << C  << endl;
}
