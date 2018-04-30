#include <iostream>
using namespace std;
class serial
{
	static int count;
public:
	int number;
serial()
{
	static int count = 1;
	number = count;
	++count;
}
void show()
{
	cout<< "so doi tuong la" <<number<< "/n";
}
};
int main()
{
	serial a[5];
	for (int j = 0;  j<5; j++)
	{
		a[j].show();
	}
	return 0;
}

