#include <stdio.h>
int main() {
	int day;
	scanf("%d", &day);
	if (day > 0)
		printf("%d", day * 2 - 1);

	else
		printf("%d", day * (-2));
		
	return 0;
}
