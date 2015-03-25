#include <iostream>
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
  
  for(int i=0; i<c; i++){
    cout << "Contando hasta " << c << " ... " << i+1 << endl;
  }
  
  return 0;
}
