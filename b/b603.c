#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main() {
    int x1, y1, x2, y2;
    while (scanf("%d %d %d %d", &x1, &y1, &x2, &y2) != EOF) {
        int y = y2 - y1;
        int x = x2 - x1;
        int a = y / x;
        if (x < 0) {
            a *= -1;
            x *= -1;
        }
        int b = -2 * x1 * a;
        int c = a * x1 * x1 + x * y1;
        if (x%2==0&&a % 2 == 0 && b % 2 == 0 && c % 2 == 0) {
            x /= 2;
            a /= 2;
            b /= 2;
            c /= 2;
        }
        printf("%dy = %dx^2 + %dx + %d\n", x, a,b, c);

    }
    return 0;
}
