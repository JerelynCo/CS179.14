#include <iostream>
using namespace std;
int main() {
	int a = 0;
	//int c = 1;
	int *b = &a;
	cout << "a: " << a << endl; // 0
	cout << "&a: " << &a << endl; //address
	cout << "b: " << b << "\n"; //0
	cout << "*b: " << *b << "\n"; //address

	*b = 34;
	//cout << "<<*b = 0xBEEF;>>" << endl;
	cout << "a: " << a << "\n"; //34
	cout << "&a: " << &a << endl; //address
	cout << "*b: " << *b << "\n"; //34
	cout << "b: " << b << endl; //address
	//cout << c << "       " << &c;

	// cout << endl<< endl;

	// int d = 3;
	// int *p = &d;
	// p += 1;
	// cout << &d<< endl;
	// cout << p;
}

//0xBEEF