// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J
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
  int n;
  cin >> n;
  map<ll, int> mp;
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    mp[x]++;
  }
  int c = 0;
  for (auto each : mp) {
    if (each.second % 2 == 1) {
      cout << "Lucky" << endl;
      break;
    } else {
      cout << "Unlucky" << endl;
      break;
    }
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
