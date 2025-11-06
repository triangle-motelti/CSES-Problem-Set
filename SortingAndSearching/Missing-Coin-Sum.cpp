// Time limit: 1.00 s
// Memory limit: 512 MB
//
// You have 'n' coins with positive integer values. What is the smallest sum you cannot create using a subset of the coins?
//
// Input Format
// The first line has an integer 'n' — the number of coins.
// The second line has 'n' integers x1, x2, ..., xn — the value of each coin.
//
// Output Format
// Print one integer — the smallest coin sum.
//
// Constraints
// 1 ≤ n ≤ 2 * 10^5
// 1 ≤ xi ≤ 10^9
//
// Example
// Input:
// 5
// 2 9 1 2 7
//
// Output:
// 6


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ll n; cin>>n;

	vector<ll> arr(n);
	for (ll i = 0; i < n; i++)
	    cin>>arr[i];

	sort(arr.begin(), arr.end());

	ll ans = 1;
	for (ll i : arr) {
	    if (i > ans)
	        break;
	    ans += i;
	}
	cout<<ans<<endl;


}
