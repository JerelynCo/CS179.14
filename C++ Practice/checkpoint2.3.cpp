#include <iostream>
using namespace std;

void swap(int *a, int *b) {
	if ( !a || !b ){
		return;
	}
	int temp = *a;
	*a = *b;
	*b = temp;

}

int main() {
	int a = 0, b = 1;
	swap(&a, &b);
	cout << a;
	cout << b;
}