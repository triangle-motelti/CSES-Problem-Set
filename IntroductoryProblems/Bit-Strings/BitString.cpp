#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n;
    cin>>n;
    ll ans = 1;
    ll mod = 1000000007;
    for (ll i = 0; i < n; i++) {
        ans *= 2;
		ans %= mod;
    }
    cout<<ans<<"\n";
}
