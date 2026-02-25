// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/C

// #include<bits/stdc++.h>
// using namespace std;

// bool isWonder(int n){
//     string s="";
//     while(n>0){
//         s.push_back((n%2)+'0');
//         n/=2;
//     }
//     string s2=s;
//     reverse(s2.begin(),s2.end());
//     if(s2==s){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     if(n%2==1){
//         if(isWonder(n)==true){
//             cout<<"YES"<<"\n";
//         }
//         else{
//             cout<<"NO"<<"\n";
//         }
//     }
//     else{
//         cout<<"NO"<<"\n";
//     }
// }




#include<bits/stdc++.h>
using namespace std;
string s="";
void is_wonder(unsigned long long int n){
    if(n==0){
        return;
    }
    else{
        long long int k=n%2;
        s.push_back(k+'0');
        is_wonder(n/2);
    }
}

int main(){
    unsigned long long int n;
    cin>>n;
    if(n&1==1){
        is_wonder(n);
        string s2=s;
        reverse(s2.begin(),s2.end());
        if(s==s2){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
    else{
        cout<<"NO"<<"\n";
    }
    return 0;
}