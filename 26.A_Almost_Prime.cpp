// https://codeforces.com/problemset/problem/26/A
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

vector<int> is_primes(3001, 1);
vector<int> primes;

// ---------- Fast IO ----------
void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
}

void sieve(int n) {
  primes.push_back(2);
  for (int i = 2; i * i < n; ++i) {
    if (is_primes[i] == 1) {
      for (int j = i * i; j < n; j += i) {
        if (is_primes[j] == 1) {
          is_primes[j] = 0;
        }
      }
    }
  }
  for (int i = 3; i < n; ++i) {
    if (is_primes[i] == 1) {
      primes.push_back(i);
    }
  }
}

void solve() {
  // Write your solution here
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 1; i <= n; ++i) {
    int k = i;
    int count = 0;
    for (int j = 0; j < primes.size(); ++j) {
      if (primes[j] > k) {
        break;
      } else if (k % primes[j] == 0) {
        count++;
        while (k % primes[j] == 0) {
          k /= primes[j];
        }
      }
    }
    if (count == 2) {
      ans++;
    }
  }
  cout << ans << endl;
}

int main() {
  fast_io();

  // int t;
  // cin >> t;

  // while (t--) {
  //   solve();
  // }
  sieve(3001);
  solve();

  return 0;
}
