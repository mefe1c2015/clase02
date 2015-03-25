#include <iostream>
using namespace std;

int main ()
{
  // declara variables:
  int a, b;
  int result;
  bool comp;
  double c;

  // hace asignaciones y operaciones aritmeticas:
  a = 5;
  b = 2;
  a = a + 1;
  result = a * b;

  // imprime el resultado:
  cout << result << endl;

  //usa operadores compuestos
  a=5;
  a+=3;
  
  // imprime a:
  cout << "a=" << a << endl;
  
  //usa operadores de incremento
  a=5;
  a++;
  
  // imprime a:
  cout << "a=" << a << endl;
  
  
  //usa operadores de comparacion
  a=5;
  b=7;
  
  comp = b>a;
  
  // imprime
  cout << "b>a?" << comp << endl;
  
  comp = b==a;
  
  // imprime a:
  cout << "b==a?" << comp << endl;

  
  
  // termina:
  return 0;
}
