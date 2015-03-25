#include <iostream>
#include <math.h>    //permite usar las librerias matematicas
using namespace std;

const double pi=3.1415926535; //define constante global

long factorial(int n){ //define una funcion que puede ser usada en el main o en otra funcion
	int i;
	long resultado=1;
	for(i=2;i<=n;i++) resultado=resultado*i;  //loop
	return resultado;  //da el valor que devuelve la funcion
}

double stirling(int n_int){ //define una funcion que puede ser usada en el main o en otra funcion
	double n=n_int;
	double resultado;
	resultado=pow(n,n)*exp(-n)*sqrt(2*pi*n);
        return resultado; //da el valor que devuelve la funcion
}

int main(){
	int n;
	double cociente;
	cout << "Entre un numero natural: ";
	cin >> n;
	cociente = factorial(n)/stirling(n);
	cout << "\nExacto: "<<factorial(n)<<"\nStirling: "<<stirling(n);
	cout << "\nFactorial exacto/Aproximado: " << cociente << endl;
	return 0;
}
