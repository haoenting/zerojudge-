#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
    double num1,num2;
    char name;
    scanf("%lf", &num1);
    scanf("%lf %c", &num2, &name);
    if (name == 'U') 
        num1 /= 30.9;
    else if (name == 'J') 
        num1 /= 0.28;
    else if (name == 'E') 
        num1 /= 34.5;

    if (num1 < num2)
        printf("No Money");
    else {
        double num = num1 - num2;
        if (num<0.05) {
            num =0;
        }
        printf("%c %.2lf", name, num);
    }
    return 0;
}
