#include <iostream>
#include <vector>
using namespace std;

int main(){
	int a[5];
	int *b = new int[5];
	vector<int> c;
	for ( int i = 0; i < 5; ++i )
		 c.push_back(i);
	cout << "a: " << sizeof(a)
		 << "\nb: " << sizeof(b)
		 << "\nc: " << sizeof(c);
}