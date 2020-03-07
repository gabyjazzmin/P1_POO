#include <iostream>
using namespace std;
#include "algo.h"

int main() {
    string numero1, numero2;
    char operador;

    for (int i = 0; i < 5; ++i) {
      cin >> numero1;
      cin >> operador;
      cin >> numero2;

      algo Algo(numero1, operador, numero2);
      cout << Algo.convertir() << endl;
    }
    
}