#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n;cin>>n;

    set<ll> s;
    
    while (n--) {
        ll a;
        cin >> a;
        s.insert(a);
    }

    ll res = s.size();
    cout<<res<<endl;
}

