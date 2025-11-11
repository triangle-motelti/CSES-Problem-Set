// Time limit: 1.00 s
// Memory limit: 512 MB
//
// You are given a playlist of a radio station since its establishment. 
// The playlist has a total of 'n' songs.
// What is the longest sequence of successive songs where each song is unique?
//
// Input Format
// The first input line contains an integer 'n' — the number of songs.
// The next line has 'n' integers k1, k2, ..., kn — the id number of each song.
//
// Output Format
// Print the length of the longest sequence of unique songs.
//
// Constraints
// 1 ≤ n ≤ 2 * 10^5
// 1 ≤ ki ≤ 10^9
//
// Example
// Input:
// 8
// 1 2 1 3 2 7 4 2
//
// Output:
// 5


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;cin>>n;

    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
        cin>>arr[i];

    map<ll, ll> last;
    ll ans = 0, l = 0;
    for (ll r = 0; r < n; r++) {
        if (last.count(arr[r]))
            l = max(l, last[arr[r]] + 1);
        last[arr[r]] = r;
        ans = max(ans, r - l + 1);
    }

    cout<<ans<<"\n";
}

