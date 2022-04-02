#include <iostream>
using namespace std;
int main() {
	int K, W, S, E;
	cin >> K >> W >> S >> E;
	int sum = 20;
	if (K > 2) {
		sum += (K - 2) * 5;
	}
	sum += (W / 2) * 5;
	if (E > 18) {
		while (E != S) {
			if (E == 23)sum += 225;
			else if (E == 22)sum += 215;
			else if (E == 21)sum += 205;
			else if (E == 20)sum += 195;
			else sum += 185;
			E--;
			if (E == 18)break;
		}
	}
	cout << sum;
	return 0;
}
