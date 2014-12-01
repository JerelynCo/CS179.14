#include <iostream>
using namespace std;
int main() {
	int a = 0;
	int *b = &a;
	cout << "a: " << a << endl;
	cout << "&a: " << &a << endl;
	cout << "b: " << b << "\n";
	cout << "*b: " << *b << "\n";

	*b = 34;
	cout << "<<*b = 0xBEEF;>>" << endl;
	cout << "a: " << a << "\n";
	cout << "&a: " << &a << endl;
	cout << "*b: " << *b << "\n";
	cout << "b: " << b;
}

//0xBEEF