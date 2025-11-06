// Time limit: 1.00 s
// Memory limit: 512 MB
//
// There are 'n' sticks with some lengths. Your task is to modify the sticks so that each stick has the same length.
// You can either lengthen or shorten each stick. Both operations cost 'x' where 'x' is the difference between the new and original length.
// What is the minimum total cost?
//
// Input Format
// The first input line contains an integer 'n' — the number of sticks.
// Then there are 'n' integers p1, p2, ..., pn — the lengths of the sticks.
//
// Output Format
// Print one integer — the minimum total cost.
//
// Constraints
// 1 ≤ n ≤ 2 * 10^5
// 1 ≤ pi ≤ 10^9
//
// Example
// Input:
// 5
// 2 3 1 5 2
//
// Output:
// 5



#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n; cin>>n;

    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
        cin>>arr[i];

    sort(arr.begin(), arr.end());

    // for (ll i = 0; i < n; i++)
    //     cout<<arr[i]<<" ";

    // cout<<endl;


    ll sum = 0;

    for (ll i = 0; i < n; i++) {
        sum += arr[i];
    }

    // cout<<sum<<endl;

    ll x = arr[n/2];

    // cout<<x<<endl;

        ll d = 0;
    for (ll i = 0; i < n; i++) {
       d += abs(arr[i] - x);
    }

    cout<<d<<endl;

    // cout<<ans<<endl;

    // ll max = *max_element(arr.begin(), arr.end());
    // ll min = arr[0];

    // cout<<max<<" "<<min<<endl;
}
