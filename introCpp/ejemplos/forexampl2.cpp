#include <iostream>
#include <string>
using namespace std;

int main ()
{
  
  int c;
  cout << "Ingrese un numero entero c positivo menor que 10 ;)" << endl;
  cin >> c;
  cout << "Ingreso " << c << endl;
  
  if(c<0 || c>=10){
    cout << "Positivo y menor que 10!" << endl;
    return 0;
  }
  

  for(int i=1; i<=c; i++){
  
    if(i==3){
      cout << "OLE!" << endl;
      continue;               //Si i es 3, entra al if y termina la interacion del loop
    }
  
    cout << "Contando hasta " << c << " ... " << i << endl;
  }

  char aux;
  cout << "Ingrese \"y\" para continuar - ctrl+c para abortar"  << endl;
  cin >> aux;
  
  int n = 0;
  
  while(true){
    cout << "n vale: " << n << endl;
    
    if(n>=20){
      cout << "n llego a 20, salgo del loop..." << endl;
      break;
    }
    n++;
  }
  
  return 0;
}
