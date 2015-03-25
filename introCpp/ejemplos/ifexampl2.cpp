#include <iostream>
using namespace std;

int main ()
{
  
  int c,d;
  
  cout << "Ingrese un numero entero c" << endl;
  cin >> c;
  cout << "c=" << c << endl;
  cout << "Ingrese otro numero entero d" << endl;
  cin >> d;
  cout << "d=" << d << endl;
  
  
  if(c>d){                                   // Si c>d hace algo
    cout << "c es mayor que d!" << endl;
  } else if(c<d){                                   // si !(c>d) && c<d hace otra cosa
    cout << "c es menor que d!" << endl;
  } else {                                   // Si !(c>d) && !(c<d) hace una tercera cosa
    cout << "c es igual que d!" << endl;
  }
  
  return 0;
}
