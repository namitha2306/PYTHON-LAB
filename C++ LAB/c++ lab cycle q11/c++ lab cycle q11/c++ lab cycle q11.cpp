#include<iostream>
using namespace std;


class second;
class first
{
	int value1;
public:
	void indata( int a)
	{ 
		value1 = a;
	}
	void display(void) 
	{
		cout << value1 << "\n";
	}
	friend void exchange(first&, second&);
		
};
class second
{
	int value2;
public:
	void indata(int a)
	{
		value2 = a; 
	}
	void display(void) {
		cout << value2 << "\n";
	}
	friend void exchange(first&, second& );
};
void exchange(first &x, second &y )
{
	int temp = x.value1;
	x.value1 = y.value2;
	y.value2 = temp;
}
int main()
{
	int a, b;
	first C1;
	second C2;
	cout << "Enter first number : ";
		cin >> a;
	cout << "Enter second number : ";
	cin >> b;

	C1.indata(a);
	C2.indata(b);
	cout << "Valued before swapping are : " << "\n";
	C1.display();
	C2.display();

	exchange(C1, C2);
	cout << "Values after swapping are : " << "\n";
	C1.display();
	C2.display();

	return 0;
}