// https://codeforces.com/problemset/problem/271/A
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
  int n;
  cin >> n;

  for (int i = n + 1; i <= 9123; ++i) {
    string s = to_string(i);

    set<char> st;
    for (int j = 0; j < 4; ++j) {
      st.insert(s[j]);
    }

    if (st.size() == 4) {
      cout << i << endl;
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
}
  return 0;
}
