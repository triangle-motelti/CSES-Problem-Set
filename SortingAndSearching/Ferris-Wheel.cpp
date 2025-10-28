#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n, w;
    cin>>n>>w;
    
    vector<ll> g(n);
    ll x = 0;
    while (x < n) {
        cin >> g[x];
        x++;
    }
    sort(g.begin(), g.end());
    ll a = 0; 
    ll b = n - 1;
    ll ans = 0;

    while (a <= b) {
        if (g[a] + g[b] <= w) {
            a++;
        }
        b--;
        ans++;
    }

    cout<<ans<<endl;
}

