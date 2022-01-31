#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
    int a, b;
    char act;
    while (scanf("%d %c %d", &a,&act,&b) != EOF) {
        if (act == '+')printf("%d\n", a + b);
        else if (act == '-')printf("%d\n", a - b);
        else if (act == '*')printf("%d\n", a * b);
        else printf("%d\n", a / b);
    }
    return 0;
}
