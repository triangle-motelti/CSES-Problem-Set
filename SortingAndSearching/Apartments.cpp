#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n, m, k;
    cin >> n >> m >> k;
    
    //if (n > m) {
    //    ll def = n - m;
    //    n -= def;
    //    cout<<n<<endl;
    //}
    
    vector<ll> a(n);
    ll i = 0;
    while (i < n) {
        cin >> a[i];
        i++;
    }
    
    vector<ll> b(m);
    ll x = 0;
    while (x < m) {
        cin >> b[x];
        //cout<<b[x]<<" ";
        x++;
    }
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll w = 0, j = 0, res = 0;

    while (w < n && j < m) {
        if (abs(a[w] - b[j]) <= k) {
            res++;
            w++;
            j++;
        }
        else if (b[j] < a[w] - k)
            j++;
        else
            w++;
    }

    cout<<res<<"\n";
    
    
    
}
