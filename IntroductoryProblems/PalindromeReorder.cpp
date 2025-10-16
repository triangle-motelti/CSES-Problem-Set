#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    string n; 
    cin >> n;

    map<char, int> alph;

    for (auto c : n) {
        alph[c]++;
    }
    int odd = 0;
    for (auto& [ch, count] : alph) {
        if (count % 2 != 0) {
            odd++;
        }
    }
    if (odd > 1) {
        cout<<"NO SOLUTION"<<endl;
	return 0;
    }

    vector<char> chars;
    for (auto& [ch, count] : alph) {
        chars.push_back(ch);
    }
    sort(chars.begin(), chars.end());

    string f;
    string m;
    string s;

    for (char ch : chars) {
        int count = alph[ch];
        int half = count / 2;
    
        for (int i = 0; i < half; i++) {
            f += ch;
        }
    
        if (count % 2 != 0) {
            m += ch;
        }
    
        for (int i = 0; i < half; i++) {
            s += ch;
        }
    }

    reverse(s.begin(), s.end());

    string result = f + m + s;

    cout << result << endl;

    return 0;
}

