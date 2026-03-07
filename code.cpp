// https://atcoder.jp/contests/abc214/tasks/abc214_b
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
  int s, t;
  cin >> s >> t;

  int count = 0;
  for (int i = 0; i <= s; ++i) {
    for (int j = 0; j <= s; ++j) {
      for (int k = 0; k <= s; ++k) {
        long long int sum = i + j + k;
        long long int mulp = i * j * k;
        if (sum <= s && mulp <= t) count++;
      }
    }
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

/*
    Problem:
    Count the number of triples (a, b, c) such that

        1) a + b + c <= S
        2) a * b * c <= T

    -------------------------------------------------

    Key observation: Maximum value of a, b, c

    Since a, b, c are non-negative integers and

        a + b + c <= S

    If any variable becomes greater than S, the sum
    will automatically exceed S.

    Example:
        a = S + 1, b = 0, c = 0
        => a + b + c = S + 1 > S  (invalid)

    Therefore the possible range is:

        0 <= a <= S
        0 <= b <= S
        0 <= c <= S

    -------------------------------------------------

    Possible valid cases of (a,b,c):

        (S,0,0) -> S + 0 + 0 <= S
        (0,S,0) -> 0 + S + 0 <= S
        (0,0,S) -> 0 + 0 + S <= S

    If one variable is S, the others must be 0.
    Otherwise the sum will exceed S.

    More generally:
        any triple is valid as long as
        a + b + c <= S

    -------------------------------------------------

    Brute force idea:

        Try all triples from [0..S]

        for a = 0..S
        for b = 0..S
        for c = 0..S

    Then check both conditions:

        if (a + b + c <= S && a * b * c <= T)
            count++

    Since we use AND condition,
    both conditions must be true.

    -------------------------------------------------

    Complexity:

        S <= 100

        Total iterations:
            100^3 = 1,000,000

        which is easily fast enough.
*/

/*
        My another logic
        (amar ei idea ashche but gpt diye generate kore disi eita)
        ========================
        void solve() {
    int s, t;
    cin >> s >> t;

    int cnt = 0;

    for (int a = 0; a <= s; a++) {

        // check with global 0 (b=0,c=0)
        if (a + 0 + 0 > s) break;

        for (int b = 0; b <= s; b++) {

            // check with global 0 (c=0)
            if (a + b + 0 > s) break;

            for (int c = 0; c <= s; c++) {

                if (a + b + c > s) break;

                if (1LL * a * b * c <= t)
                    cnt++;
            }
        }
    }

    cout << cnt << endl;
}


s
Note (কেন এটা কাজ করবে — proof সহ)
/*
    Optimization idea:

    Condition:
        a + b + c <= S

    We iterate a,b,c from 0..S.

    -------------------------------------------------

    Case 1: outer loop (a)

        if (a + 0 + 0 > S)

    Since b,c >= 0

        a + b + c >= a

    If a > S:
        a + b + c > S  for every b,c

    Therefore no valid triple exists for this a
    and we can safely break the loop.

    -------------------------------------------------

    Case 2: second loop (b)

        if (a + b + 0 > S)

    Since c >= 0

        a + b + c >= a + b

    If a + b > S:
        a + b + c > S for all c

    So this b and all larger b will be invalid.
    Hence we break the loop.

    -------------------------------------------------

    Case 3: third loop (c)

        if (a + b + c > S)

    Since c increases in the loop,
    the sum will only increase further.

    Therefore all next c values will also be invalid.

    So we break.

    -------------------------------------------------

    This technique is called:
        "pruning the search space"

    -------------------------------------------------

    Complexity:

        Worst case: S^3
        But many loops terminate early due to break.

        S <= 100
        => at most about 1e6 operations
        => easily fits in time.
*/

*/