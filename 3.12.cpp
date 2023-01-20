#include <iostream>
#include <string>
using namespace std;

class Date {
public:
  Date(int day_, int month_, int year_) {
    if (day_>0&&day_<=30)
      day = day_;
    year = year_;
    if (month >= 0 && month <= 13) {
      month = month_;
    }
  }


  void setday(int day_) {
    day = day_; 
    }

  int getday() const{
    return day;
      }
    

  void setmonth(int month_) {
    if (month_ <= 12 && 1 <= month_) {
      month = month_;
    }
  }

  int getmonth() const {
    return month; 
    }

  void setyear(int year_) {
    year = year_; 
    }

  int getyear() const {
    return year; 
    };

  

private:
  int month;
  int day;
  int year;
};

int main(){
  Date dia{18,2,2023};

  cout<<dia.getday()<<"/"<<dia.getmonth()<<"/"<<dia.getyear()<<endl;
}
