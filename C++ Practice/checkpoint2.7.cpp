#include <iostream>
#include <vector>
using namespace std;

int sum(const int *elements, const int n) {
	int s = 0;
	for ( int i = 0; i < n; ++i )
		s += elements[i];
	return s;
}

int main(){
	vector<int> a;
	a.push_back(0);
	a.push_back(1);
	int *p = &(a[0]);
	int n = a.size();
	a.clear();
	int total = sum(p, n);
	cout << total;
}

//Answer: 1

