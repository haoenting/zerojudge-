#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int check;
    map<string, int> MAP;
    while(cin>>s>>check){
        if(check == 0 && MAP[s] ==0)
            cout<<s<<endl;
            MAP[s]++;
    }
    return 0;
}