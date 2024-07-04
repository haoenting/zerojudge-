#include <bits/stdc++.h>
using namespace std;
int main(){
    int F=1, T=1, Y=0, E=5, N=0;
    while(F<10){
        int O = 0;
        while(O<10){
            if(F == O+1)
                continue;
            int R = 0;
            while(R<10){

                int T = 1;
                while(T < 10){
                    if(R == T || R + T+T <9)
                        continue;

                    int Y =0;
                    while(Y < 10){
                        if(T == Y)
                            continue;

                        int SIX = F*100+O*10+R+1;
                        if(R+T+T>9 && SIX <1000){
                            cout<<F<<O<<R<<T<<Y;
                            cout<<" + ";
                            cout<<T<<E<<N;
                            cout<<" = ";
                            cout<<SIX<<T<<Y<<endl;
                        }
                        E = 5;

                        
                    }
                    T++;
                }
                R++;
            }
            O++;
        }
        F++;
    }
    //R+2T >= 10
    return 0;
}