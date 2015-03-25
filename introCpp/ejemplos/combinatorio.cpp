#include <iostream>
#include <math.h>    //permite usar las librerias matematicas
using namespace std;


long factorial(int n){ //Funcion factorial que sirve para n<=12. (es muy mala)
  int i;
  long resultado=1;
  for(i=2;i<=n;i++){
    resultado=resultado*i;  //loop
  }
  return resultado;  //es valor que devuelve la funcion
}


long combi_version_1(int n, int k){ //Hace uso de la funcion factorial definida antes => solo funciona si n y k son menores que 12!
  long numerador = factorial(n);
  long denominador = factorial(k)*factorial(n-k);
  
  if(denominador > 0){ //si el denominador es mayor que cero hace el calculo del cociente.
     long resultado = numerador/denominador;
     return resultado;  //da el valor que devuelve la funcion
  }
  else{//si el denominador no es mayor que cero devuelve -1 (podria ser cualquier otro numero).
    return -1;
  }
}


long combi_version_2(long n, long k){ //Esta es otra posible implementacion usando la relacion de recurrencia C(n,k+1) = C(n,k)*(n-k)/(k+1)
  long resultado = 1;
  for(long i=0;i<k;i++){
    resultado = resultado*(n-i)/(i+1);
  }
  return resultado;  //da el valor que devuelve la funcion
}


int main(){
  int n,k;
  double cociente;
  cout << "\nEste programa calcula el coeficiente binomial C(n,k) usando dos metodos diferentes\n";
  cout << "  1. por definicion: C(n,k) = n!/(k!*(n-k)!) [este metodo anda bien si n,k <= 12]\n";
  cout << "  2. usando la relacion de recurrencia C(n,k+1) = C(n,k)*(n-k)/(k+1) [este metodo funciona hasta valores un poco mas altos]\n";
  cout << "\nEntre n: ";
  cin >> n;
  cout << "Entre k: ";
  cin >> k;
  
  if( n<k ){ //El if es un condicional. Si la condicion entre parentesis es verdadera se ejecuta el codigo entre las llaves.
    cout << "\nERROR n<k!\nNo se calculara el coeficiente. Hasta luego.\n\n";
    return 1; // sale con error
  }
  
  cout << "\nVersion 1: " << combi_version_1(n,k) << endl;
  cout << "Version 2: " << combi_version_2(n,k) << endl << endl;
  
  return 0;
}
