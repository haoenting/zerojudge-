#include <iostream>
#include<string.h>

using namespace std;
char ary[10000005];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	for (int x = 0; x < n; x++) {
		int count = 0, sum = 0;
		
		cin >> ary;
		int total = strlen(ary);
		for (int num = 0; num < total; num++) {
			if (ary[num] == 'p')
				count++;
			else if (ary[num] == 'q' && count > 0) {
				sum++;
				count--;
			}
		}
		cout << sum << endl;
	}
	return 0;
}
