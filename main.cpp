#include <iostream>
using namespace std;
#include "algo.h"
#include <fstream>
#include <string.h> 

void lectura(){
  ifstream archEntrada;
  ofstream archSalida;

  archEntrada.open("entrada.txt");
  archSalida.open("salida.txt");

while(!archEntrada.eof()){
    string numero1, numero2;
    char operador;

    for (int i = 0; i < 5; ++i) {
      cin >> numero1;
      cin >> operador;
      cin >> numero2;

      algo algo(numero1, operador, numero2);
      cout  << algo.convertir() << endl;
   }
  
  }
  archEntrada.close();
  archSalida.close();
}
int main() {

  lectura();
  return 0;
}
