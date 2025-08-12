#include <bits/stdc++.h>
using namespace std;

int main() {
   long long n, c, ans;
   ans = 0;
   cin >> n;
   cin >> c;
   for (int i = 1; i < n; i++) {
       long long x;
        cin >> x;
        if (c > x)
            ans += c - x;
        else
            c = x;
   }
   cout << ans;
}
