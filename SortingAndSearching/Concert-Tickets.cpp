#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n, m;
    cin>>n>>m;
    
    // vector<ll> h(n);
    multiset<ll> h;
    ll i = 0;
    while (i < n) {
        ll x = 0;
        cin >> x;
        h.insert(x);
        i++;
    }
    // sort(h.begin(), h.end());
    // vector<ll> t(m);
    // ll x = 0;
    // while (x < m) {
    //     cin >> t[x];
    //     x++;
    // }
    
    ll y = 0, w = 0;
    
    while (y < m) {
        ll t;cin>>t;

        auto it = h.upper_bound(t);

        if (it == h.begin())
            cout << -1 << endl;
        else {
            --it;
            cout << *it << endl;
            // w = (it - h.begin()) + 1;
            h.erase(it);
        }
        y++;
    }
    


}
