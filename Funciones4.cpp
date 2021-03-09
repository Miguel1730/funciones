#include <stdio.h>
#include <iostream>
using namespace std;

int factorial (int);
int main(){
	int N1;
	cout<<"Intoduzca el valor del numero: "<< endl;
	cin>>N1;
	int fact = factorial(N1);
	cout<<"El factoial es: "<<fact<<endl;

	return 1;
}
int factorial (int A){
	int i;
	int resultado = 1;
	for (i = 1; i <=A; i++){
		resultado *=i;
	}
	return resultado;
}
