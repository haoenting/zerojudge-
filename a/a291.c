#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {
    int a[4],b[4],num;
    while (scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]) != EOF) {      
        scanf("%d", &num);
        for (int y = 0; y < num; y++) {
            for (int x = 0; x < 4; x++) {
                b[x] = a[x];
            }
            int in[4], m = 0, n = 0;
            scanf("%d %d %d %d", &in[0], &in[1], &in[2], &in[3]);
            for (int z = 0; z < 4; z++) {
                if (b[z] == in[z]) {
                    m++;
                    b[z] = 10;
                    in[z] = 11;
                }
            }
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    if (in[j] == b[i]) {
                        n++;
                        b[i] = 10;
                        in[j] = 11;
                    }
                }
            }
            printf("%dA%dB\n", m, n);
        }
    }
    //system("pause");
    return 0;
}
