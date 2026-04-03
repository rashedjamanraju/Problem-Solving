// Problem
// Link:https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/B

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()

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

// ------------ GCD ------------
int __gcd(int a, int b) {
  while (b != 0) {
    int r = a % b;
    a = b;
    b = r;
  }
  return a;
}

// ---------- 4 Direction Neighbours ----------
vector<pii> get4Neighbours(int x, int y, int n, int m) {
  int dx[] = {-1, 1, 0, 0};
  int dy[] = {0, 0, -1, 1};

  vector<pii> nb;

  for (int i = 0; i < 4; i++) {
    int nx = x + dx[i];
    int ny = y + dy[i];

    if (nx >= 0 && nx < n && ny >= 0 && ny < m) nb.push_back({nx, ny});
  }

  return nb;
}

// ---------- 8 Direction Neighbours ----------
vector<pii> get8Neighbours(int x, int y, int n, int m) {
  int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
  int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

  vector<pii> nb;

  for (int i = 0; i < 8; i++) {
    int nx = x + dx[i];
    int ny = y + dy[i];

    if (nx >= 0 && nx < n && ny >= 0 && ny < m) nb.push_back({nx, ny});
  }

  return nb;
}

bool is_ok(vector<double>& v, int split, double mid) {
  int split_count = 0;
  for (int i = 0; i < v.size(); ++i) {
    /* code */
    split_count += (v[i] / mid);
    if (split_count >= split) {
      return true;
    }
  }
  if (split_count >= split) {
    return true;
  } else {
    return false;
  }
}

double bs(vector<double>& v, double mx, int k) {
  double start = 0;
  double end = mx;
  double ans = end;
  int x = 100;
  while (x--) {
    double mid = start + (end - start) / 2;
    if (is_ok(v, k, mid)) {
      ans = mid;
      start = mid;
    } else {
      end = mid;
    }
  }
  return ans;
}

void solve() {
  // Write your solution here
  int n, k;
  cin >> n >> k;
  vector<double> ropes(n, 0);
  double mx = -1e9;
  for (int i = 0; i < n; ++i) {
    /* code */
    cin >> ropes[i];
    mx = max(mx, ropes[i]);
  }

  double ans = bs(ropes, mx, k);
  cout << fixed << setprecision(10) << ans << "\n";
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
