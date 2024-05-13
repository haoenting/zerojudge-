#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int check;
    unordered_set<string> mySet;
    while(cin>>s>>check){
        if(check == 0 && mySet.find(s) == mySet.end())
            mySet.insert(s);
    }
    for (auto it = mySet.begin(); it != mySet.end(); ++it) {
        cout << *it << endl;
    }
    return 0;
}