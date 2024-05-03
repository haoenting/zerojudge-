#include <bits/stdc++.h>
using namespace std;
int main(){
    int F=1, O=0, R=0,T=1, Y=0, E=0, N=0, S=1, I=0, X=0;
    // F*1000+O*1000+R*100+T*210+Y+ E * 20 + N*2 
    // = S*1000+I*1000+X*100+ T*10 + Y
    while(F<10){
        while(O<10){

                while(Y<10){
                    if(Y == N)
                        continue;

                    Y++;
                }   
            O++;
        }
        F++;
    }

    return 0;
}