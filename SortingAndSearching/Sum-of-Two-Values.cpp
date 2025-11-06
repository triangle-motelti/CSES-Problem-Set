// Time limit: 1.00 s
// Memory limit: 512 MB
//
// You are given an array of 'n' integers, and your task is to find two values (at distinct positions) whose sum is 'x'.
//
// Input Format
// The first input line has two integers 'n' and 'x' — the array size and the target sum.
// The second line has 'n' integers a1, a2, ..., an — the array values.
//
// Output Format
// Print two integers — the positions of the values. If there are several solutions, you may print any of them. If there are no solutions, print IMPOSSIBLE.
//
// Constraints
// 1 ≤ n ≤ 2 * 10^5
// 1 ≤ x, ai ≤ 10^9
//
// Example
// Input:
// 4 8
// 2 7 5 1
//
// Output:
// 2 4


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n, x; cin>>n>>x;

    vector<ll> arr(n);
    for (ll i = 0; i < n; i++) {
        cin>>arr[i];
    }

    map<ll, ll> s;

    for (ll i = 0; i < n; i++) {
        ll y = x - arr[i];

        if (s.count(y)) {
            cout<<s[y]+1<<" "<<i+1<<endl;
            return 0;
        }

        s[arr[i]] = i;
    }

    cout<<"IMPOSSIBLE"<<endl;
}

