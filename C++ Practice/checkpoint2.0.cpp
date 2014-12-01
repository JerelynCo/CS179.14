#include <iostream>
using namespace std;
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	int a = 0, b = 1;
	swap(&a, &b);
	cout << a; //what does this return?
}
//swapped