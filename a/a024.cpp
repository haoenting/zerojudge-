#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    if(a > b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    if(a == 1 || b % a == 0){
        cout<<a<<endl;
        return 0;
    }
    while(true){
        b %= a; 
        if(b == 0){
            cout<<a<<endl;
            return 0;
        }
        a %= b;
        if(a == 0){
            cout<<b<<endl;
            return 0;
        }
    }
    return 0;
}