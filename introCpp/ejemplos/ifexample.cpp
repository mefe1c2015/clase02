#include <iostream>
using namespace std;

int main ()
{
  
  int a,b;
  
  cout << "Ingrese un numero entero a" << endl;
  cin >> a; // asigna el entero a la variable a
  cout << "a=" << a << endl;
  cout << "Ingrese otro numero entero b" << endl;
  cin >> b;
  cout << "b=" << b << endl;
  
  if(a>b){                                   // Si a>b hace algo
    cout << "a es mayor que b!" << endl;
  } else {                                   // si !(a>b) hace otra cosa
    cout << "a es menor o igual que b!" << endl;
  }
  
  return 0;
}
