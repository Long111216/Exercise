#include <iostream>
using namespace std;
#include <string>
#include <stdio.h>

class employee
{
private:
    int day,month,year;
   
public:
    int etype;
    char status[20];
    employee()
    {
    day=0;
    month=0;
    year=0;
    etype;
    }
   
    void years (int c)
    {
    year=year+c;
    }


    void days(int a)
    {
        day=a;
    if (day>30)
     {
        month=month+1;
        day=day-30;
     }

    }

    void months(int b)
    {
        month=b;
        if(month>12)
        {
        year=year+1;
        month=month-12;
        }
    }
   
    void show(int type)
    {
        cout<<"Loai nhan vien: "<<endl;
        if (type==1)
        {
            cout<<"Giam doc"<<endl;
        }
        if(type==2)
        {
            cout<<"Thu ky"<<endl;
        }
        if(type==3)
        {
            cout<<"Nhan vien"<<endl;
        }
        cout<<"Ngay thue"<<endl;
        cout<<day<<" : "<<month<<" : "<<year<<endl;
   
   
    }
};

int main()
{   
    int em,day,month,year,type;
    employee emp[25];
    enum types{Giamdoc,Thuky,Nhanvien};
    cout<<"Nhap so luong nhan vien"<<endl;
    cin >> em;
    for(int e=0;e<em;e++)
    {
        cout<<"Nhap trang thai cua nhan vien"<<endl;
        cout<<"1-Giam doc\n";
        cout<<"2-Thu ky\n";
        cout<<"3-Nhan vien\n";
        cin>>type;

        cout<<"Nhap ngay thue"<<endl;
        cout<<"Nhap ngay"<<endl;
        cin>>day;
        cout<<"Nhap thang"<<endl;
        cin>>month;
        cout<<"Nhap nam"<<endl;
        cin>>year;
   
    emp[e].days(day);
    emp[e].months(month);
    emp[e].years(year);
    emp[e].show(type);
    }
}
