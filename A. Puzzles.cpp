// Problem: A. Puzzles
// Contest: Codeforces Round 196 (Div. 2)
// URL: https://codeforces.com/problemset/problem/337/A
//
// Date: Mon 28 Jul 2025 01:26:47 AM IST
// File: /home/hirdyansh/codespace/cf/A. Puzzles.cpp

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;

  vector<int> arr(m);
  for (int i = 0; i < m; ++i) {
    cin >> arr[i];
  }

  sort(arr.begin(), arr.end());

  int ans = INT_MAX;

  for (int i = 0; i < m-n+1; ++i) {
    ans = min(ans, arr[i+n-1] - arr[i]);
  }

  cout << ans << endl;

  return 0;
}
