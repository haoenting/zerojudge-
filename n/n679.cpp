#include<bits/stdc++.h>
using namespace std;
int main(){
    int N, A, B;
    cin >> N >> A >> B;

    int ans[N], i = 0;
    for(int j = 0; j < N; j++)
        ans[j] = 0;
    while(A<=B){
        cout<<A<<" "<<i << ":";
        if(A > 1000000 && A / 1000000 % 7 == 0){
            A += 999999;
        }
        if(A > 100000 && A / 100000 % 7 == 0){
            A += 99999;
        }
        if(A > 10000 && A / 10000 % 7 == 0){
            A += 9999;
        }
        if(A > 1000 && A / 1000 % 7 == 0){
           A += 999;
        }
        if(A > 100 && A / 100 % 7 == 0){
          A += 99;
        }
        if(A > 10 && A / 10 % 7 == 0)
            A += 9;
        if(A % 7 == 0 || A % 10 == 7) {
            A++;
        }
        
        
        A++;
        if(i == N)
            i = 0;
        for(int j = 0; j < N; j++)
            cout << ans[j] << " ";
        cout<<endl;
    }
    for(int i = 0; i < N; i++){
        cout << ans[i] << " ";
    }

    return 0;
}