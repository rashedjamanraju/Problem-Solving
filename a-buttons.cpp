// https://atcoder.jp/contests/abc124/tasks/abc124_a
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<long long>;

const int MOD = 1e9 + 7;
const double PI = 3.141592653589793;

// ---------- Fast IO ----------
void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
}

void solve() {
  // Write your solution here
  int x, y;
  cin >> x >> y;
  int mx=max(x,y);
  int mn=min(x,y);
  if(mx-mn==0){
  	cout<<2*mx<<endl;
  }
  else{
  	cout<<mx+(mx-1)<<endl;
  }
}

int main() {
  fast_io();

  // int t;
  // cin >> t;

  // while (t--) {
  //   solve();
  // }

  solve();

  return 0;
}
