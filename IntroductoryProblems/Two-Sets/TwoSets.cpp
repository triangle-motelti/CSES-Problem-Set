#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main() {
    ll n;cin>>n;
    
    // for (ll i = 1; i <= n; i++)
    //     cout<<i<<endl;
        
    vector<int> a, b;
    ll c = 0, d = 0;
    for (ll x = n; x >= 1; --x) {
        if (c > d) {
            a.push_back(x);
            d += x;
        }
        else {
            b.push_back(x);
            c += x;
        }
    }
    if (c == d) {
        cout<<"YES"<<endl;
        cout<<a.size()<<endl;
        for (int x : a) {
          cout<<x<<" ";
        }
        cout<<endl;
         cout<<b.size()<<endl;
        for (int x : b) {
            cout<<x<<" ";
        }
    }
    else
        cout<<"NO"<<endl;
    
}

