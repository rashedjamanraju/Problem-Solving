// https://codeforces.com/problemset/problem/102/B
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define yes cout << "Yes" << endl
#define no cout << "No" << endl;

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
  string s;
  cin >> s;
  long long int count = 0;
  while (s.size() > 1) {
    unsigned long long int new_n = 0;
    for (int i = 0; i < s.size(); i++) {
      new_n += ((unsigned long long int)s[i] - (unsigned long long int)'0');
    }
    count++;
    s = to_string(new_n);
  }
  cout << count << endl;
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
