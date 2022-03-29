#include <iostream>
using namespace std;
void run(int A) {
	for (int x = 1; x < A; x++) {
		for (int y = 1; y <= x; y++) {
			cout << x ;
		}
		cout << endl;
	}
	for (int x = A; x > 0; x--) {
		for (int y = x; y > 0; y--) {
			cout << x;
		}
		cout << endl;
	}
	cout << endl ;
}
int main() {
	int n;
	cin >> n;
	int A, F;
	while (n > 0) {
		cin >> A >> F;
		while (F > 0) {
			run(A);
			F--;
		}

		n--;
	}
	return 0;
}
