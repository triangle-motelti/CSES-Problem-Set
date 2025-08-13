#include <bits/stdc++.h>
using namespace std;

int main() {
	size_t n;
	cin>>n;
	size_t arr[n];
	if (n == 2 || n == 3) {
	    cout<<"NO SOLUTION";
	    return 0;
	}
	for (size_t i = 0; i < n; i++) {
	    arr[i] = i + 1;
	}
	for(size_t i = 0; i < n; i++) {
	    if (i % 2 != 0)
	        cout<<arr[i]<<" ";
	}
	for(size_t i = 0; i < n; i++) {
	    if (i % 2 == 0)
	        cout<<arr[i]<<" ";
	}
}

