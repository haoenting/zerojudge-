#define SIZE 100005
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
    int m, n;
    while (scanf("%d %d", &m, &n)!=EOF) {
        int ary[SIZE];
        for (int x = 1; x <= m; x++) {
            scanf("%d", &ary[x]);
        }
        int a, b;
        while (n != 0) {
            scanf("%d %d", &a, &b);
            int sum = 0;
            while (a <= b) {
                sum += ary[a];
                a++;
            }
            printf("%d\n", sum);
            n--;
        }
    }
    return 0;
}
