#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
    char ary[50];
    scanf("%s", ary);
    if (ary[0] == '-') {
        for (int x = 1; ary[x] != NULL; x++)
            printf("%c", ary[x]);
    }
    else printf("%s", ary);
    return 0;
}
