// Time limit: 1.00 s
// Memory limit: 512 MB
//
// Given an array of 'n' integers, your task is to find the maximum sum of values in a contiguous, nonempty subarray.
//
// Input Format
// The first input line has an integer 'n' — the size of the array.
// The second line has 'n' integers x1, x2, ..., xn — the array values.
//
// Output Format
// Print one integer — the maximum subarray sum.
//
// Constraints
// 1 ≤ n ≤ 2 * 10^5
// -10^9 ≤ xi ≤ 10^9
//
// Example
// Input:
// 8
// -1 3 -2 5 3 -5 2 2
//
// Output:
// 9

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n; cin>>n;

    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
        cin>>arr[i];

    ll ans = arr[0];
    ll c = arr[0];

    for (ll x = 1; x < n; x++) {
        c = max(arr[x], c + arr[x]);
        ans = max(ans, c);
    }

    cout<<ans<<endl;
}

