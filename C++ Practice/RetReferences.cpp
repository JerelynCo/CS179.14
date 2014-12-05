#include <iostream>
using namespace std;

int a = 1;
int& getFoo();
int main() {
	getFoo() = 5;
	cout << a;
}