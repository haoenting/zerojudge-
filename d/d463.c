#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {     
    unsigned long long int num;
    while (scanf("%llu",&num) != EOF) {
        
            printf("%.0lf\n", pow(num, 1 / 3.0));
    }
    return 0;
}
