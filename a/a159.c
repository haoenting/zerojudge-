#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    int num1;
    scanf("%d", &num1);
    while (num1 > 0) {
        int num,sum1=0,sum2=0;
        int a[4];
        for (int x = 0; x < 4; x++) {
            scanf("%1d%1d%1d%1d",&a[0],&a[1],&a[2],&a[3]);
            sum1 += a[1] + a[3];
            sum2 += a[0] * 2 / 10 + a[0] * 2 % 10;
            sum2 += a[2] * 2 / 10 + a[2] * 2 % 10;
        }
        if ((sum1+sum2)%10==0)printf("Valid\n");
        else printf("Invalid\n");
        num1-- ;
    }
    return 0;
}
