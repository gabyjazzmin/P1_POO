#ifndef algo_h
#define algo_h
#include <string.h>
#include <cmath>
using namespace std;

class algo {
    private:
        string sDefinition;

        string numeroEnClave;


        int iNum1;
        int iNum2;

    public:
        algo(string _numeroEnClave, string _sDefinition);

        double convertir();
};

algo::algo(string _numeroEnClave, string _sDefinition) {
    numeroEnClave=_numeroEnClave;
    sDefinition=_sDefinition;
}

double algo:: convertir(){
 
int num1, num2=0;
string sNum1, sNum2; 
char operacion;
bool cambia2=false;
for(int i=0; i<numeroEnClave.length(); i++){
  if(sDefinition[0] == numeroEnClave[i]){
    if(!cambia2)
        sNum1 += '0';
      else
        sNum2 += '0';
  }
  else if(sDefinition[1] == numeroEnClave[i]){
    if(!cambia2)
        sNum1 += '1';
      else
        sNum2 += '1';
  }
  if(sDefinition[2] == numeroEnClave[i]){
    if(!cambia2)
        sNum1 += '2';
      else
        sNum2 += '2';
  }
  else if(sDefinition[3] == numeroEnClave[i]){
    if(!cambia2)
        sNum1 += '3';
      else
        sNum2 += '3';
  }
  if(sDefinition[4] == numeroEnClave[i]){
    if(!cambia2)
        sNum1 += '4';
      else
        sNum2 += '4';
  }
  else if(sDefinition[5] == numeroEnClave[i]){
    if(!cambia2)
        sNum1 += '5';
      else
        sNum2 += '5';
  }
  if(sDefinition[6] == numeroEnClave[i]){
    if(!cambia2)
        sNum1 += '6';
      else
        sNum2 += '6';
  }
  if(sDefinition[7] == numeroEnClave[i]){
    if(!cambia2)
        sNum1 += '7';
      else
        sNum2 += '7';
  }
  else if(sDefinition[8] == numeroEnClave[i]){
    if(!cambia2)
        sNum1 += '8';
      else
        sNum2 += '8';
  }
   else if(sDefinition[9] == numeroEnClave[i]){
    if(!cambia2)
        sNum1 += '9';
      else
        sNum2 += '9';
  }
  if(sDefinition[10] == numeroEnClave[i]){
    operacion='+';
    cambia2=true;
  }
  else if(sDefinition[11] == numeroEnClave[i]){
    operacion='-';
    cambia2=true;
  }
  if(sDefinition[12] == numeroEnClave[i]){
    operacion='*';
    cambia2=true;
  }
  else if(sDefinition[13] == numeroEnClave[i]){
    operacion='/';
    cambia2=true;
  }
}

switch(operacion){
  case '+':
  return stoi(sNum1)+stoi(sNum2);
  break;
  case '-':
  return stoi(sNum1)-stoi(sNum2);
  break;
  case'*':
  return stoi(sNum1)*stoi(sNum2);
  break;
  case '/':
  return stoi(sNum1)/stoi(sNum2);
  break;
}
return 0;
}

#endif
