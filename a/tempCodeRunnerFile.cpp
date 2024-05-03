#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
int main(){
    string s;
    while(getline(cin,s)){
        int size = s.size()-1;
        if(size ==1){
            cout<<s[0]<<endl;
            continue;
        }

        while(s[size]=='0')
            size --;
        for(int i = size;i>= 0;i--){
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}