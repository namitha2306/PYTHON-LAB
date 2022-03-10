
#include<iostream>
using namespace std;
class test
{
	int code;
	static int count;
public:
	void setcode(void)
	{
		code = ++count;
	}
	void showcode(void)
	{
		cout << "object number:" << code << "\n";
	}
	static void showcount(void)
	{
		cout << "count:" << count << "\n";
	}
};
int test::count;
int main()
{
	test c1, c2;
	c1.setcode();
	c2.setcode();
	test::showcount();
	test c3;
	c3.setcode();
	test::showcount();

	c1.showcode();
	c2.showcode();
	c3.showcode();

	return 0;
}