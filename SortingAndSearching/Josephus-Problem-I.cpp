// Time limit: 1.00 s
// Memory limit: 512 MB
//
// Consider a game where there are 'n' children (numbered 1, 2, ..., n) in a circle. 
// During the game, every other child is removed from the circle until there are no children left. 
// In which order will the children be removed?
//
// Input Format
// The only input line has an integer 'n'.
//
// Output Format
// Print 'n' integers — the removal order.
//
// Constraints
// 1 ≤ n ≤ 2 * 10^5
//
// Example
// Input:
// 7
//
// Output:
// 2 4 6 1 5 3 7


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct Node {
    ll data;
    Node* next;
};

int main() {
    ll n; cin>>n;

    Node* head = new Node{1, nullptr};
    Node* prev = head;
    for (ll i = 2; i <= n; i++) {
        Node* newNode = new Node{i, nullptr};
        prev->next = newNode;
        prev = newNode;
    }
    prev->next = head;

    Node* curr = head;
    while (curr->next != curr) {
        Node* toDelete = curr->next;
        cout << toDelete->data << " ";
        curr->next = toDelete->next;
        delete toDelete;
        curr = curr->next;
    }

    cout<<curr->data<<endl;
    delete curr;

}
