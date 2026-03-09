// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/H
#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    if (s.find("010") != string::npos || s.find("101") != string::npos)
      cout << "Good\n";
    else
      cout << "Bad\n";
  }

  return 0;
}
