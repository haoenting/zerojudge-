#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a=0, current = 1;
    while(a<=n){
        cout<<"2^"<<a<<" = "<<current<<endl;
        current = current<<1;
        a++;
    }
    return 0;
}