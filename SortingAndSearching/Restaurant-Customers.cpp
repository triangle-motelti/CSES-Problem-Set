// There is a restaurant that records the arrival and leaving times of its customers.
// Each customer arrives at time 'a' and leaves at time 'b'.
//
// You are given the arrival and leaving times of 'n' customers.
//
// Find the maximum number of customers that were in the restaurant at the same time.
//
// Input Format
// The first line of input contains a single integer 'n' — the number of customers.
// The next 'n' lines each contain two integers 'a' and 'b' — the arrival and leaving times of a customer.
//
// Output Format
// Print a single integer — the maximum number of customers present in the restaurant at any time.
//
// Constraints
// 1 ≤ n ≤ 2 * 10^5
// 1 ≤ a < b ≤ 10^9
//
// Example
// Input:
// 3
// 5 8
// 2 4
// 3 9
//
// Output:
// 2

// Time limit: 1.00 s
// Memory limit: 512 MB



#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n; cin>>n;

    vector<pair<ll, ll>> x;

    for (ll i = 0; i < n; i++) {
        ll a, b;cin>>a>>b;
        
        x.push_back(make_pair(a, 1));
        x.push_back(make_pair(b, -1));
    }

    sort(x.begin(), x.end());

    ll a = 0, b = 0;
    for (ll i = 0; i < (ll)x.size(); i++) {
        a += x[i].second;
        if (a > b)
            b = a;
    }

    cout<<b<<endl;
}

