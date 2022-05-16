#define SIZE 105
#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	while (cin >> a >> b >> c >> d) {
		long long int m[SIZE][SIZE], n[SIZE][SIZE];
		if (b != c) {
			printf("Error\n");
			continue;
		}
		else {
			for (int x = 0; x < a; x++) {
				for (int y = 0; y < b; y++) {
					cin >> m[x][y];
				}
			}
			for (int x = 0; x < c; x++) {
				for (int y = 0; y < d; y++) {
					cin >> n[x][y];
				}
			}
			for (int x = 0; x < a; x++) {
				for (int z = 0; z < d; z++) {
					long long int sum = 0;
					for (int y = 0; y < b; y++) {
						sum += m[x][y] * n[y][z];
					}
					cout << sum;
					if (z != d - 1)
						cout << ' ';
				}
				cout << endl;
			}
		}
	}
	return 0;
}
