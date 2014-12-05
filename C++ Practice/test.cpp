#include <iostream>
using namespace std;

struct Vec { 
	float x, y; 
};
int main(){
	Vec pts[10];
	float *p = (float*)pts;
	cout << p[1];
	
}