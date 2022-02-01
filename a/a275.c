#define SIZE 1000005
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
using namespace std;
int main() {
    char ary1[SIZE], ary2[SIZE];
    while (scanf("%s", ary1)) {
        if (strcmp(ary1, "STOP!!") == 0)
            break;
        scanf("%s", ary2);
        int sum = 0, x = 0;
        while (ary1[x] != NULL) {
             sum += (int)ary1[x];
             x++;
        }
        x = 0;
        while(ary2[x]!=NULL){
            sum -= (int)ary2[x];
            x++;
        }
        if (sum== 0)
            printf("yes\n");
        else printf("no\n");
   }
    return 0;
}
