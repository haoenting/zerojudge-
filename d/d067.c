#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
    int year;
    scanf("%d", &year);
    if (year % 400 == 0)
        printf("a leap year"); 
    else if (year % 100 == 0)
        printf("a normal year");
    else if (year % 4 == 0)
        printf("a leap year");
    else printf("a normal year");
    return 0;
}
