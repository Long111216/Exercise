#include<iostream>
#include<conio.h>
using namespace std;

class date{
 private:
  int month, day, year;
  char c;
 public:
  void setDate(){
   cout << "Nhap ngay thang nam" << endl;
   cin >> day>>c>>month>>c>>year;
  }
  void getDate(){
   cout << "Ngay nhap la" << endl;
   cout << day << c << month << c << year << endl;
  }
};

int main(){
 date d1;
 d1.setDate();
 d1.getDate();
}

