#include <iostream>
using namespace std;

class complex
{
	float n;
	float m;
public:
	void input(float real, float imag)
	{
		n = real;
		m = imag;

	}
	friend complex sum(complex, complex);

	void show(complex);
};
complex sum(complex c1, complex c2)
{
	complex c3;
	c3.n = c1.n + c2.n;
	c3.m = c1.m + c2.m;
	return(c3);

}
void complex::show(complex c)
{
	cout << c.n << " + j " << c.m << "\n";
}
int main()
{
	float a, b, c, d;
	complex A, B, C;
	cout << "ENTER THE FIRST NUMBERS : ";
	cin >> a >> b;
	cout << "ENTER SECOND NUMBERS : ";
	cin >> c >> d;
	A.input(a, b);
	B.input(c,d);

	C = sum(A, B);

	cout << "A = ";A.show(A);
	cout << "B = ";B.show(B);
	cout << "C = ";C.show(C);

	return 0;

}