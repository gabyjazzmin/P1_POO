#include <iostream>
#include "algo.h"
#include <fstream>
#include <string.h> 
#include <stdlib.h>
using namespace std;

void lectura(){
  ifstream archEntrada;
  ofstream archSalida;

  archEntrada.open("entrada.txt");
  archSalida.open("salida.txt");
  int cont=0;
  string clave;
  string sTodos;
while(!archEntrada.eof()){
  getline(archEntrada,sTodos);
  
  if(cont<1){
      for(int x=0; x<sTodos.length(); x++){
        if(sTodos[x]!=' ')
          clave+=sTodos[x];
      }
  }
  else{
  algo Algo(sTodos, clave);
  cout<<Algo.convertir()<<endl;
  archSalida << Algo.convertir()<<endl;
  }
 cont++;
}

 archEntrada.close();
  archSalida.close();
}

int main() {

  lectura();
  return 0;
}
