#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {
    int num,ary[100005];
    while (scanf("%d", &num) != EOF) {
        int x = 0;
        while (num != 0) {
            ary[x] = num % 2;
            num /= 2;
            x++;
        }
        for (int y = x-1; y >= 0; y--) {
            printf("%d", ary[y]);
        }
        printf("\n");
    }
    //system("pause");
    return 0;
}
