#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    size_t len = s.size();
    size_t n = 1, c = 1;
    for(int i = 0; i < len - 1; i++) {
        if (s[i] == s[i + 1])
            n++;
        else
            n = 1;
        if (n > c)
            c = n;
    }
    cout<<c<<"\n";
}

