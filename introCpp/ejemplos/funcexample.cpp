#include<iostream>
#include<iomanip> ///////////// para manipular la escritura en pantalla
#include<math.h>
using namespace std;

double sumaP(double p, int nMax){  // Define una funcion que calcula por la fuerza una suma p
    double sum = 0;
    for(int i=0; i<nMax; ++i){
        sum += pow(p,i);
    }
    return sum;
};

int main (){
    cout << "Error en una serie p " << endl << endl;
    double p = 0.9;
    double eSum = 1/(1-p);
    
    cout << "p            = "  << p << endl;
    cout << "suma exacta  = "  << eSum << endl << endl;
    
    cout << "====================================" << endl;
    cout << "         Suma por la fuerza         " << endl;
    cout << "    NMax        Suma        Ratio   " << endl;
    cout << "====================================" << endl;
    
    for(double x = 0.4; x<=2.4; x+=0.2){ 
        double dMax = pow(10,x);       // Funcion pow de la libreria matematica: 10^x
        int nMax = static_cast<int>(dMax); // Cast: interpreta un double como un int
        double pSum = sumaP(p,nMax);       // Usa la función sumaP
        cout << setw(10) << nMax << "  "
             << setw(10) << setprecision(8) << pSum << "  "
             << setw(10) << setprecision(8) << eSum/pSum << endl;
    }
    cout << "====================================" << endl << endl;
}
