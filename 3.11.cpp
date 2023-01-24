#include <iostream>
#include <string>
#include "MotorVehicle.h"
using namespace std;




int main() {
  MotorVehicle carro{"logitic", "alinol", 2000, "rojo", 4};
  cout<<carro.getmarca()<<endl;
  cout<<carro.getcombustible()<<endl;
  cout<<carro.getedad()<<endl;
  cout<<carro.getcolor()<<endl;
  cout<<carro.getcapasidad()<<endl;
  
  

}
