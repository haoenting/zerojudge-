#include<iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    for (int x = 1; x <= num;x++) {
        for (int y = num - x; y > 0;y--) {
            cout << "_";
        }
        for (int z = 1; z < 2 * x; z ++) {
            cout << "*";
        }
        for (int y = num - x; y > 0; y--) {
            cout << "_";
        }
        cout << endl;
    }
    return 0;
}
