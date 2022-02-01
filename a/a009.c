#define SIZE 1005
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
    char ary[SIZE];
    scanf("%s", ary);
    int x = 0;
    while (ary[x] != NULL) {
        printf("%c", ary[x] - 7);
        x++;
    }
    return 0;
}
