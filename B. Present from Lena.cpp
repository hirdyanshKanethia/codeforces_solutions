// Problem: B. Present from Lena
// Contest: Codeforces Beta Round 89 (Div. 2)
// URL: https://codeforces.com/problemset/problem/118/B
//
// Date: Sat 26 Jul 2025 10:36:42 PM IST
// File: /home/hirdyansh/codespace/cf/B. Present from Lena.cpp

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  for (int i = 0; i <= n; i++) {
    for (int j = i; j < n; j++) {
      cout << "  ";
    }

    for (int j = 0; j <= i; j++) {
      if (j > 0) cout << " ";
      cout << j;
    }

    for (int j = i - 1; j >= 0; j--) {
      cout << " "<< j ;
    }

    cout << endl;
  }

  for (int i = n - 1; i >= 0; i--) {
    for (int j = i; j < n; j++) {
      cout << "  ";
    }

    for (int j = 0; j <= i; j++) {
      if (j > 0) cout << " ";
      cout << j;
    }

    for (int j = i - 1; j >= 0; j--) {
      cout << " "<< j ;
    }

    cout << endl;
  }

  return 0;
}
