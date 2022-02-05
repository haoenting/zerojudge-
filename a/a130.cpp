#define SIZE  1005
#include <iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
struct WEB {
    char name[SIZE];
    int num;
};
int main() {
    int total,current=1;
    cin >> total;
    while (current<=total) {
        WEB web[SIZE];
        int max = 0;
        for (int x = 0; x < 10; x++) {
            cin >> web[x].name >> web[x].num;
            if (web[x].num > max)
                max = web[x].num;
        }
        cout << "Case #"<< current<<":" << endl;
        for (int x = 0; x < 10; x++) {
            if (web[x].num == max)
                cout << web[x].name <<endl;
        }
        current++;
    }
    return 0;
}
