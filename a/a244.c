#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {
    int num;
    scanf("%d", &num);
    for (int x = 0; x < num; x++) {
        long long int a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);
        if (a == 1)printf("%lld\n", b+c);
        else if(a==2)printf("%lld\n", b-c);
        else if(a==3)printf("%lld\n", b*c);
        else printf("%lld\n", b/c);
    }
    //system("pause");
    return 0;
}
