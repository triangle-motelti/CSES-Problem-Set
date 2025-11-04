// There is a movie festival where 'n' movies will be shown.
// Each movie has a starting time 'a' and an ending time 'b'.
//
// You know the starting and ending times of all 'n' movies.
//
// You can only watch one movie at a time, and you must watch each movie from start to finish.
//
// Find the maximum number of movies you can watch entirely.
//
// Input Format
// The first line of input contains a single integer 'n' — the number of movies.
// The next 'n' lines each contain two integers 'a' and 'b' — the starting and ending times of a movie.
//
// Output Format
// Print a single integer — the maximum number of movies you can watch entirely.
//
// Constraints
// 1 ≤ n ≤ 2 * 10^5
// 1 ≤ a < b ≤ 10^9
//
// Example
// Input:
// 3
// 3 5
// 4 9
// 5 8
//
// Output:
// 2
//
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

        x.push_back(make_pair(a, b));
    }



     sort(x.begin(), x.end(), [](pair<ll, ll> p1, pair<ll, ll> p2) {
        return p1.second < p2.second;
    });

    ll ans = 0;
    ll last_end = 0;

    for (ll i = 0; i < n; i++) {
        if (x[i].first >= last_end) {
            ans++;
            last_end = x[i].second;
        }
    }

    cout<<ans<<endl;


}

