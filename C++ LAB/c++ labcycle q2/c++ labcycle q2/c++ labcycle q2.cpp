// c++ labcycle q2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
using namespace std;
class Area{
public:
void area(int);
void area(int, int);
void area(float, float);
void area(double);
void area(double, double);
};
void area(int r) {
	cout << "Area of circle is " << 3.14 * r * r;
}
void area(int l, int w) {
	cout << "Area of rectangle is " << l * w;
}
void area(float b, float h) {
	cout << "Area of a right triangle is " << 0.5 * b * h;
}
void area(double a) {
	cout << "Area of a square is " << a * a;
}
void area(double c, double d) {
	cout << "Area of a parallellogram is " << c * d;
}
int main() {
	int r,l,w;
	float b, h;
	double a, c, d;
	int ch;
	do {
		cout << "\n ====================CALCULATION OF AREA OF DIFFERENT SHAPES================";
		cout << "\n 1.AREA OF A CIRCLE";
		cout << "\n 2.AREA OF A RIGHT TRIANGLE";
		cout << "\n 3.AREA OF A RECTANGLE";
		cout << "\n 4.AREA OF A SQUARE";
		cout << "\n 5.AREA OF A PARALLELLOGRAM";
		cout << "\n 6.EXIT PROGRAM";
		cout << "\n ENTER YOUR CHOICE : ";
		cin >> ch;

		switch (ch)
		{
		case 1:
		{
			cout << "\n Enter radius of circle";
			cin >> r;
			area(r);
			break;
		}
		case 2:
		{
			cout << "\n Enter base and height of triangle";
			cin >> b >> h;
			area(b, h);
			break;
		}
		case 3:
		{
			cout << "\n Enter length and breadth of rectangle";
			cin >> l >> w;
			area(l, w);
			break;
		}
		case 4:
		{
			cout << "\n Enter side kength of square";
			cin >> a;
			area(a);
			break;
		}
		case 5:
		{
			cout << "\n Enter length and height of parallellogram";
			cin >> c >> d;
			area(c, d);
			break;}
		case 6: {
			exit(0);
		}

		default:
			cout << "\n Please enter a valid number";
			break;
		}
		
	} while (ch != 6);
	return 0;
}

	