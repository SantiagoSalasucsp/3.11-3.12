#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

int main(){
  Date dia{18,2,2023};

  cout<<dia.getday()<<"/"<<dia.getmonth()<<"/"<<dia.getyear()<<endl;
}
