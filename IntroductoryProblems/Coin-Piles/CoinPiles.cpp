#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main() {
	ll n;cin>>n;
	while (n--) {
		ll a, b;
		cin>>a;cin>>b;
		if ((2*a >= b) && (2* b >= a) && ((a + b) % 3 == 0))
			cout<<"YES"<<endl;
		else	
			cout<<"NO"<<endl;
	}
}

