#define SIZE  1000005
#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdbool.h>
int main() {
    char ary[SIZE];
    bool select = false;
    while (fgets(ary, SIZE, stdin) != NULL) {
        int sum = 0, num = 0;
        while (ary[num] != NULL) {
            if (isalpha(ary[num])) {
                if (select == false) {
                    select = true;
                    sum++;
                }
            }
            else select = false;
            num++;
        }
        num = 0;
        printf("%d\n", sum);
    }
    return 0;
}
