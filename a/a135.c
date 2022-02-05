#define SIZE  105
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    char ary[SIZE];
    int num = 1;
    while (scanf("%s", ary)&& ary[0]!='#') {
        printf("Case %d: ", num);
        if (strcmp(ary, "HELLO")==0)
            printf("ENGLISH\n");
        else if (strcmp(ary, "HOLA")==0)
            printf("SPANISH\n");
        else if (strcmp(ary, "HALLO")==0)
            printf("GERMAN\n");
        else if (strcmp(ary, "BONJOUR")==0)
            printf("FRENCH\n");
        else if (strcmp(ary, "CIAO")==0)
            printf("ITALIAN\n");
        else if (strcmp(ary, "ZDRAVSTVUJTE")==0)
            printf("RUSSIAN\n");
        else printf("UNKNOWN\n");
        num++;
    }
    return 0;
}
