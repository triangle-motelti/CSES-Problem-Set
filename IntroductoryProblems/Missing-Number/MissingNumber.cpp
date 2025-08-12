#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    arr.back() = 0;
    sort(arr.begin(), arr.end() - 1);
    for(int i = 0; i < n; i++) {
        if (arr[i] != i + 1){
            cout<<i + 1;
            return 0;
        }
    }
}
