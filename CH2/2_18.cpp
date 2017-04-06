#include <iostream>
using namespace std;

int main() 
{
	int a = 0, b = 1;
	int *p = &a;
	p = &b;
	*p = 2;
	cout << "Value of a is " << a << endl;
	cout << "Address of a is " << &a << endl;
	cout << "Value of b is " << b << endl;
	cout << "Address of b is " << &b << endl;
	cout << "Value of p is " << p << endl; 
	cout << "Value of *p is " << *p << endl;
	return 0;
}
