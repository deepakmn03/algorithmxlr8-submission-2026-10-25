#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(nullptr){}
};

ListNode* solve(ListNode* head){
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast!=nullptr && fast->next!=nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main() {
    int n;
    cin >> n;
    vector<int> values(n);
    for (int i = 0; i < n; i++) cin >> values[i];

    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    for(int i=0;i<n;i++){
        ListNode* node = new ListNode(values[i]);
        if(head==nullptr){
            head=tail=node;
        }
        else{
            tail->next = node;
            tail = node;
        }
    }

    ListNode* middle = solve(head);
    cout<<"[";
    while(middle!=nullptr){
        cout<<middle->val;
        if(middle->next!=nullptr) cout<< ",";
        middle = middle->next;
    }
    cout<<"]";
    // cout<<"\n";


    // Write your solution here.
    // Build the linked list from values, find its middle node (the
    // second of two middles if the length is even), and print the
    // middle node onward, space-separated.

    return 0;
}
