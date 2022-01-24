#define SIZE 100005
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int prime[SIZE];
int ispri[SIZE];
int num = 0;
void pri() {
    for (int x = 2; x*2 < SIZE; x++) {
        prime[2 * x] = 1;
    }
    for (int y = 3; y < SIZE; y += 2) {
        if (prime[y] == 0) {
            for (int z = 3; y * z < SIZE; z += 2) {
                prime[y * z] = 1;
            }
            ispri[num] = y;
            num++;
        }
    }
}

int main() {
    pri();
    int a;
    while (scanf("%d", &a) != EOF) {
        if (a % 2 == 0&&a!=2)printf("非質數\n");
        else if (a < SIZE) {
            if (prime[a] == 1)
                printf("非質數\n");
            else printf("質數\n");
        }
        else {
            int x = 0;
            while (ispri[x] <= sqrt(a)) {
                if (a % ispri[x] == 0) {
                    a = 0;
                    break;
                }
                x++;
            }
            if (a == 0)printf("非質數\n");
            else printf("質數\n");
        }
    }
    return 0;
}
