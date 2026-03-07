#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

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
  int n;
  cin >> n;
  vector<int> v(n, 0);
  map<int, int> mp;
  for (int i = 0; i < n; ++i) {
    /* code */
    cin >> v[i];
    mp[v[i]] = i;
  }

  if (n == 1) {
    cout << v[0] << endl;
  } else {
    if (mp[n] == 0) {
      int k = n - 1;
      int index = 1;

      for (int i = 1; i < n; i++) {
        if (v[i] == k) {
          k--;
          index++;
        } else {
          break;
        }
      }
      reverse(v.begin() + index, v.begin() + mp[k] + 1);
      for (int i = 0; i < n; ++i) {
        cout << v[i] << " ";
      }
      cout << endl;

    } else {
      reverse(v.begin(), v.begin() + (mp[n] + 1));
      for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
      }
      cout << endl;
    }
  }
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
