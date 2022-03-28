#define _CRT_SECURE_NO_WARNINGS
#define SIZE 100005
#include <iostream>
using namespace std;
int prime[SIZE];
int isPrime[SIZE];
int ans[SIZE];
int main() {
	isPrime[0] = 2;
	int n = 1;
	for (int x = 3; x < SIZE; x += 2) {
		int num = 2;
		if (prime[x] == 0) {
			isPrime[n] = x;
			n++;
			while (num * x < SIZE) {
				prime[num * x] = 1;
				num++;
			}
		}
	}
	int N = 0;
	for (int y = 0; y < n-1; y++) {
		if (isPrime[y + 1] - isPrime[y] == 2) {
			ans[N] = isPrime[y + 1];
			N++;
		} 
	}

	cin >> n;
	for (int x = 0; x <= n; x++) {
		if (ans[x] > n) {
			cout <<  x << endl;
			break;
		}
	}
	return 0;
}
