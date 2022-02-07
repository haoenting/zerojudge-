#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main() {
    int num,year;
    cin >> num;
    while (num > 0) {
        cin >> year;
        if (year % 400 == 0)
            cout << "a leap year" << endl;
        else if(year%100==0)
            cout << "a normal year" << endl;
        else if(year%4==0)
            cout << "a leap year" << endl;
       else cout << "a normal year" << endl;
        num--;
    }
        return 0;
}
