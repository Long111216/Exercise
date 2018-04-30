#include<iostream>
using namespace std;
class fraction
{
private:
	int a, b, c, d, e, f;
public:
	void getdata()
	{
		cout << "Enter first fraction (a/b) ="; cin >> a; cin >> b;
		cout << "Enter second fraction (c/d) ="; cin >> c; cin >> d;
	}
	void showdata()
	{
		if (b == d)
		{
			e = a + c;
			f = b;
		}
		else if (b != d)
		{
			e = a * d + c * b;
			f = b * d;
		}
		cout << "The sum of fraction is = " << e << "/" << f << "\n";
	}
};
int main()
{
	char choice;
	fraction f;
	do {
		f.getdata();
		f.showdata();
		cout << "Do you want to continue (y,n)?";
		cin >> choice;
	} while (choice == 'y');
	system("pause");
	return 0;
}
