#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
    int num;
    while (scanf("%d", &num) &&num!=0) {
        int sum = 0;
        for (int x=1; x <= num; x++) {
            sum += pow(x, 2);
        }
        printf("%d\n", sum);
    }
    return 0;
}
