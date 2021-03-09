#include <stdio.h>
#include <iostream>
using namespace std;

void max (int A,int B);

int main (){
	int N1,N2,N3;
	cout<< "Introduzca el valor de primer operando: "<< endl;
	cin>>N1;
	cout<< "Introduzca el valor de segundo operando: "<< endl;
	cin>>N2;
	cout<< "Introduzca el valor de tercer operando: "<< endl;
	cin>>N3;
	int max1= max (N1,N2);
	int max2= max(max1,N3);
	return 1;
}
void max (int A, int B){
	if (A>B){
		cout<<"El mayor es: "<<A<<endl;
		}
		else if (A<B){
			cout<<"El mayor es: "<<B<<endl;
		}
		else if (B<max2)
		cout<<"El mayor es:"<<max2<<endl;
	}
