#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {
    int day, sum = 0,buy;
    scanf("%d", &day);
    for (int x = 1; x <= day; x++) {
        scanf("%d", &buy);
        sum += buy * x;
    }
    printf("%d", sum);
    //system("pause");
    return 0;
}
