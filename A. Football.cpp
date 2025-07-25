// Problem: A. Football
// Contest: Codeforces Beta Round 77 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/96/A
//
// Date: Sat 26 Jul 2025 12:17:43 AM IST
// File: /home/hirdyansh/codespace/cf/A. Football.cpp

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Your code goes here

  bool ans = false;
  string num;
  cin >> num;
  int last = num[0];
  int count = 1;

  for (int i = 1; i < size(num); ++i) {
    if (num[i] == last) {
      count++;
      if (count == 7) {
        ans = true;
        break;
      }
    } else if (num[i] != last) {
      last = num[i];
      count = 1;
    }
  }

  ans ? cout << "YES" << endl: cout << "NO" << endl;

    return 0;
}
