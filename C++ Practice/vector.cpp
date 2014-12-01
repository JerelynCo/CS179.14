#include <iostream>
#include <vector>

using namespace std;
int main(){
	vector<int> a;
	vector<float> b;
	for(int i = 0; i < 10; i++){
		a.push_back(i);
		cout << "\na: " << a[i];
	}
	for(int i = 0; i < a.size(); ++i) {
		b.push_back(a[i] * 1.5f);
		cout << "\nb: " << b[i];
	}
	a.clear();

}