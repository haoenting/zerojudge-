#define SIZE 1000005
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>

using namespace std;
int main() {
    int num;
    int ary[SIZE];
    while (cin >> num && num != EOF) {
        for (int x = 0; x < num; x++) {
            cin >> ary[x];
        }
        sort(ary, ary + num);
        for (int x = 0; x < num; x++) {
            cout << ary[x] << ' ';
        }
        cout << endl;
    }
    return 0;
}
