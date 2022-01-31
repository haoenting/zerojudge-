#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
    int num;
    int ary[32];
    for (int x = 0; x < 32; x++) {
        ary[x] = pow(2, x);
    }
    while (scanf("%d", &num) != EOF) {
        int n = 1;
        for (int x = 0; x < 32; x++) {
            if (ary[x] == num) {
                printf("Yes\n");
                n = 0;
                break;
            }
        }
        if (n == 1)printf("No\n");
    }
    return 0;
}
