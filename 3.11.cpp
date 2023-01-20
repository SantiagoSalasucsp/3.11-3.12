#include <iostream>
#include <string>
using namespace std;

class MotorVehicle {

public:
  MotorVehicle(string marca_, string combustible_,int edad_, string color_, int capasidad_){
  marca=marca_;
  combustible=combustible_;
  edad=edad_;
  color=color_;
  capasidad=capasidad_; 
  };

void setmarca(string marca_) {
    marca = marca_;
    }
string getmarca() {
    return marca;
    };


void setcombustible(string combustible_){
  combustible=combustible_;
}
string getcombustible() {
  return combustible;
}

void setedad(int edad_){
  edad = edad_;
}
int getedad() {
  return edad;
}


void setcolor(string color_){
  color=color_;
}
string getcolor(){
  return color;
}

void setcapasidad(int capasidad_){
  capasidad=capasidad_;
}
int getcapasidad(){
  return capasidad;
}



private:
  string marca;
  string combustible;
  int edad;
  string color;
  int capasidad;
};



int main() {
  MotorVehicle carro{"logitic", "alinol", 2000, "rojo", 4};
  cout<<carro.getmarca()<<endl;
  cout<<carro.getcombustible()<<endl;
  cout<<carro.getedad()<<endl;
  cout<<carro.getcolor()<<endl;
  cout<<carro.getcapasidad()<<endl;
  
  

}
