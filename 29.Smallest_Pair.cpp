// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define yes cout << "Yes" << endl
#define no cout << "No" << endl;

using ll = long long;
using ull = unsigned long long;
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
  ll n;
  cin >> n;
  vector<ll> v(n + 1, 0);
  for (ll i = 1; i <= n; ++i) {
    /* code */
    cin >> v[i];
  }
  ll mn = LLONG_MAX;
  for (ll i = 1; i <= n; ++i) {
    for (ll j = i + 1; j <= n; j++) {
      ll sum = v[i] + v[j] - i + j;
      mn = min(mn, sum);
    }
  }
  cout << mn << endl;
}

int main() {
  fast_io();

  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  // solve();

  return 0;
}
