// https://codeforces.com/problemset/problem/633/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;

    for(int x=0; x*a<=c; x++){
        int rem = c - a*x;
        if(rem % b == 0){
            cout<<"Yes";
            return 0;
        }
    }

    cout<<"No";
}
