#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while(getline(cin,s)){
        int size = s.size()-1;
        bool check = false;
        for(int i = size;i>= 0;i--){
            if(!check){
                if(s[i] !='0')
                    check = true;
            }
            if(check)
                cout<<s[i];
        }
        if(!check)
            cout<<"0";
        cout<<endl;
    }
    return 0;
}