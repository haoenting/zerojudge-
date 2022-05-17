#include <stdio.h>
int main() {
	int A, B;
	int a, b;
	scanf("%d %d", &A, &B);
	scanf("%d %d", &a, &b);
	int time1 = A * 60 + B;
	int time2 = a * 60 + b;
	if (time2 > time1) {
		int time = time2 - time1;
		printf("%d %d", time / 60, time % 60);
	}
	else {
		int time = 1440 - time1 + time2;
		printf("%d %d", time / 60, time % 60);
	}
	return 0;
}
