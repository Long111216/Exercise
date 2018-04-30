#include <iostream>
#include <conio.h>
using namespace std;

class employee{
 private:
  int emp_num;
  float emp_comp;
 public:
  void entData(){
   cout << "Nhap so nhan vien ";
   cin >> emp_num;
   cout << "Nhap luong nhan vien " ;
   cin >> emp_comp;
  }
  void display(){
   cout << "So nhan vien " << emp_num << endl;
   cout << "Luong nhan vien " << emp_comp << endl;
  }
};

int main()
{
 employee emp1, emp2, emp3;
 cout << "Nhap du lieu cho nhan vien 1" << endl;
 emp1.entData();
 cout << "Nhap du lieu cho nhan vien 2" << endl;
 emp2.entData();
 cout << "Nhap du lieu cho nhan vien 3" << endl;
 emp3.entData();
 cout << "Tong so du lieu duoc nhap la:" << endl;
 emp1.display();
 emp2.display();
 emp3.display();
}

