#include <stdio.h>
#include <string.h>
char ary1[305], ary2[305];
int main() {
	char n;
	scanf("%s %c", ary1, &n);
	int total = strlen(ary1); 
	int y = 0;
	for (int x = 0; x < total; x++) {
		if (ary1[x] != n) {
			ary2[y] = ary1[x];
			y++;
		}
	}
	y--;
	int boo = 0;
	for (int z = 0; z <= y; z++,y--) {
		if (ary2[z] != ary2[y]) {
			boo = 1;
			break;
		}
	}
	if (boo == 0)
		printf("Yes");
	else
		printf("No");
	return 0;
}
