#include <bits/stdc++.h>
using namespace std;
int main(){
    long long N;

    while(cin >> N){
        // 因為xor只有在不一樣才會變成1
        // 所以當N是0，i是1，這樣xor才會變成1
        // 而N+i也才會變成1
        // 所以只要計算N有幾個0，可以讓i進位幾次就好
        long long ans = 0, two = 2;
        while(N != 0){
            if(N % 2 == 0)
                ans++;
            N/=2;
        }
        if(ans == 0)
            cout<<"0"<<endl;
        while(ans > 1){
            two  = two << 1;
            ans --;
        }
        cout<< two << endl;
    }
    return 0;
}