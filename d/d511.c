#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
    int a, b, c,sum=0;
    for (int x = 0; x < 5; x++) {
        scanf("%d %d %d", &a, &b, &c);
        for (int y = 0; y < 2; y++) {
            int d;
            if (a > b) {
                d = a;
                a = b; 
                b = d;
            }
            if (b > c) {
                d = b;
                b = c;
                c = d;
            }
        }
        if (a + b > c)
            sum++;
    }
    printf("%d", sum);
    return 0;
}
