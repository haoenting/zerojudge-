#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {
    int num;
    scanf("%d", &num);
    for (int x = 0; x < num; x++) {
        int a, b, matrix[15][15], matric[15][15];
        scanf("%d %d", &a, &b);
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                scanf("%d", &matrix[i][j]);
                matric[a - i - 1][b - j - 1] = matrix[i][j];
            }
        }

        int T = 0;
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                if (matrix[i][j] != matric[i][j]) {
                    T = 1;
                    break;
                }
            }
        }
        if (T == 1)printf("keep defending\n");
        else
            printf("go forward\n");

    }
    //system("pause");
    return 0;
}
