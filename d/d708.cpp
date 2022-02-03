#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main() {
    int n,num,ans=0;
    cin >> n;
    while (n > 1) {
        cin >> num;
        ans ^= num;

        n--;
    }
    cout << ans;

    return 0;
}
