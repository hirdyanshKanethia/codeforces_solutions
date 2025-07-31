// Problem: A. Submission is All You Need
// Contest: Codeforces Round 1040 (Div. 2)
// URL: https://codeforces.com/contest/2130/problem/A
//
// Date: Thu 31 Jul 2025 08:18:46 PM IST
// File: /home/hirdyansh/codespace/cf/A. Submission is All You Need.cpp

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  
  while (t--) {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
      cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    int ans = 0;
    int temp = arr[0];
    for (int i = 0; i < n; ++i) {
      if (arr[i] < 0) {
        continue;
      }
    //
    //   if (arr[i] == 0) {
    //     int j;
    //     for (j = i+1; j < n; ++j) {
    //       if (arr[j] == 1) {
    //         arr[j] = -1;
    //         ans += 2;
    //         break;
    //       } else if (arr[j] > 1) {
    //         ans += 1;
    //         break;
    //       }
    //     }
    //     continue;
    //   }
    //   ans += arr[i];
    // }
    
      if (arr[i] == 0) {
        ans += 1;
      } else {
        ans += arr[i];
      }
    }

    cout << ans << endl;
  }

  return 0;
}
