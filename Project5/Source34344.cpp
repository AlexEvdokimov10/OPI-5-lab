#include <cmath>
#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	int a, b;
	cin >> a;
	double x = a,rez;
	int sum = 0;
	for (int i = 1; i < 11; i++) {
		sum = sum + log(i*x);
	}
	rez = (sum + cos(x)) / (pow(x, 2) + 2);
	cout << rez << endl;
	system ("pause");
	return 0;
}
