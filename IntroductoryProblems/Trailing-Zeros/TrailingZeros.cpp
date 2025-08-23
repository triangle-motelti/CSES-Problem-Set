#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ll n;
	cin>>n;

	ll ans = 0;
	while (n >= 5) {
        ans +=  n / 5;
        n /= 5;
    }
    
    cout<<ans<<endl;
}
