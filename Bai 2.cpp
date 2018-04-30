#include <iostream>
#include <conio.h>
using namespace std;
class tolBooth
{
private:
    unsigned int numberofcar;
    double amout;
public:
    tolBooth()
    {
	numberofcar = 0;
	amout = 0;
    }
    void PayCar()
    {
	numberofcar++;
	amout = amout + 0.5;
    }
    void nopayCar()
    {
	++numberofcar;
    }
    void display()
    {
	cout<<"Tong so xe"<<numberofcar<<endl;
	cout<<"Tong tien thu"<<amout<<endl;
    }
};
int main()
{
tolBooth bot;
char Key;
do
    {
    Key = getch();
    }
    while(Key!='p' && Key!='n' && Key!=27);
return 0;
}
     
