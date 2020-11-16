#include <iostream>
#include <vector>
#include "prime.h"
using namespace std;

int main (){
  int numero_ingresado;
  bool primo;
  vector<int> lista_primos;
  cout << "El programa presente muestra todos los numeros primos anteriores al que introduzca" << endl;
  cout << "Introduzca un número natural: ";
  cin >> numero_ingresado;
  for(int i = 2); i <= numeroIngresado; ++i) {
    if(IsPrime(i) == true) {
      lista_primos.emplace_back(i);
    }
  }
  cout << "1  ";
    for(int i = 0; i < lista_primos.size() ; ++i) {
      cout << lista.primos(i) << "  ";
      }
    cout << endl;
  return 0;
 }
