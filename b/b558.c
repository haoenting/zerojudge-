#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
    int ary[505];
    ary[1] = 1;
    for (int x = 1; x < 505; x++) {
        ary[x + 1] = ary[x] + x;
    }
    int num;
    while (scanf("%d",&num) != EOF) {
        printf("%d\n", ary[num]);
    }
    return 0;
}
