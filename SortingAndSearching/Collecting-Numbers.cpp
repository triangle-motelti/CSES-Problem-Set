// Time limit: 1.00 s
// Memory limit: 512 MB
//
// You are given an array that contains each number between 1 ... n exactly once. 
// Your task is to collect the numbers from 1 to n in increasing order.
// On each round, you go through the array from left to right and collect as many numbers as possible. 
// What will be the total number of rounds?
//
// Input Format
// The first line has an integer 'n' — the array size.
// The next line has 'n' integers x1, x2, ..., xn — the numbers in the array.
//
// Output Format
// Print one integer — the number of rounds.
//
// Constraints
// 1 ≤ n ≤ 2 * 10^5
//
// Example
// Input:
// 5
// 4 2 1 5 3
//
// Output:
// 3


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n; cin>>n;

    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
        cin>>arr[i];

    vector<ll> pos(n + 1);
    for (ll i = 0; i < n; i++)
        pos[arr[i]] = i;

    ll x = 1;
    for (ll i = 1; i < n; i++) {
        if (pos[i] > pos[i + 1])
            x++;
    }

    cout<<x<<endl;

}

