#include <stdio.h>
#include <string.h>
int main() {
	int n;
	scanf("%d", &n);
	int sum = 0,k;
	for (int x = 1; x <= n; x++) {
		scanf("%d", &k);
		sum += k * x;
	}
	printf("%d", sum);
	return 0;
}
