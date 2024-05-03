#include <bits/stdc++.h>
using namespace std;
int main(){
    int total, booms[1000], start;
    cin >> total;
    for(int i = 0; i < total; i++){
        cin >> booms[i];
    }
    cin >> start;

    queue<int> myQueue;
    myQueue.push(start);

    while(!myQueue.empty()){
        int current = myQueue.front();
        myQueue.pop();
        
        if(booms[current] == 2){
            if(current - 1 >= 0)
                myQueue.push(current - 1);
            if(current + 1 <= total)
                myQueue.push(current + 1);
        }
        else if(booms[current] >2){
            if(current - booms[current] >= 0)
                myQueue.push(current - booms[current]);
            if(current + booms[current] <= total)
                myQueue.push(current + booms[current]);
            if(current - 2*booms[current] >= 0)
                myQueue.push(current - 2*booms[current]);
            if(current + 2*booms[current] <= total)
                myQueue.push(current + 2*booms[current]);
                
        }
        booms[current] = 0;
    }
    for(int i = 0; i < total; i++){
        cout << booms[i];
        if(i!= total - 1)
            cout << " ";
    }cout<< endl;
    return 0;
}