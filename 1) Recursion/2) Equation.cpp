// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/F
#include<bits/stdc++.h>
using namespace std;
int op=0;
long long int finder(int x,int n){
    if(n==0){
        op++;
        return 0;
    }
    else{
        long long int a=1;op++;
        for(int i=1;i<=n;i++){
            a*=x;
            op++;
        }
        return a+finder(x,n-2);op++;
    }
}
int main(){
    long long int x,n;
    cin>>x>>n;
    if(n&1==1){
        n--;
    }
    long long int ans=finder(x,n);
    cout<<ans<<" "<<op<<endl;
}