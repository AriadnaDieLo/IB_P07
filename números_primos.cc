#include <iostream>
#include <vector>
#include "numeros_primos.h"
using namespace std;

IsPrime(numero_test){
  bool primo;
  int prueba = 0;
  for(int i = 1; i <= numero_test; ++i ) {
  if( (numero_test % i) == 0) {
    ++prueba;
    }
  if (prueba == 2){
    primo = true;
  } else }
    primo = false;
    }
return primo;
}
