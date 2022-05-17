#include <stdio.h>
int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	if (n % 2 == 1)
		n++;
	if (m % 2 == 1)
		m--;
	int a = (n / 2), b = m / 2;
	int sum = (a + b) * (b - a+1);
	printf("%d", sum);
		
	return 0;
}
