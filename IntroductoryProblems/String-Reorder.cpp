// Time limit: 1.00 s
// Memory limit: 512 MB
//
// Your task is to rearrange the characters of a given string so that no two adjacent characters are the same. 
// Among all possible valid rearrangements, find the lexicographically smallest one.
//
// If it is impossible to create such a string, print -1.
//
// Input
// The only line contains a string of length n consisting of uppercase English letters (A–Z).
//
// Output
// Print the lexicographically smallest rearranged string such that no two adjacent characters are the same. 
// If no valid rearrangement exists, print -1.
//
// Constraints
// 1 ≤ n ≤ 10^6
//
// Example
// Input:
// HATTIVATTI
//
// Output:
// AHATITITVT


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    map<char, ll> alp;
    string s; cin>>s;

    for (char c : s)
        alp[c]++;
        
    ll n = s.size();

    ll mx = 0;
    for (auto &p : alp)
        mx = max(mx, p.second);
    
    if (mx > (n + 1) / 2) {
        cout<<-1<<endl;
        return 0;
    }

    string ans = "";
    char last = 0;

    for (int i = 0; i < n; i++) {
        for (auto &p : alp) {
            if (p.second == 0 || p.first == last)
                continue;

            p.second--;

            ll m = 0, left = 0;
            for (auto &q : alp) {
                m = max(m, q.second);
                left += q.second;
            }

            if (m <= (left + 1) / 2) {
                ans += p.first;
                last = p.first;
                break;
            }
            else
                p.second++;
        }
    }

    cout<<ans<<endl;
}
