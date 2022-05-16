#include <iostream>
using namespace std;
int run(double a, long long int b) {
	if (b == 1)
		return a;
	else if (b % 2 == 1) {
		double num = a;
		b--;
		return run(a, b) * num;
	}
	else 
		return run(a * a, b / 2);
}
int main() {
	double a;
	long long int b;
	cin >> a >> b;
	if (a == -1) {
		if (b % 2 == 0)
			cout << a*(-1) << endl;
		else cout << a << endl;
	}
	else if (a == 1|| b  == 1)
		cout << a << endl;
	else 
		cout << run(a,b) << endl;
	return 0;
}
