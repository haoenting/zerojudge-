#include <iostream>
using namespace std;

int add(int n) {
	int sum = n;
	bool re ((n > 0)&&(sum+=add(n-1)));
	return sum;
}
int main() {
	int n;
	cin >> n;
	cout << add(n);
	return 0;
}
