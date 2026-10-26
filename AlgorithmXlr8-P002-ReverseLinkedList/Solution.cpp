#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x): val(x), next(NULL){}
};

ListNode* solve(ListNode* head){
    ListNode* prev = nullptr;
    ListNode* curr = head;
    ListNode* nextNode;
    while(curr!=nullptr){
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}

int main() {
    int n;
    cin >> n;
    vector<int> values(n);
    for (int i = 0; i < n; i++) cin >> values[i];
    ListNode* head = nullptr;
    ListNode* tmp=nullptr;
    for(int i=0;i<n;i++){
        ListNode* node = new ListNode(values[i]);
        if(head==nullptr){
            head = tmp = node;
        }
        else {
            tmp->next=node;
            tmp = node;
        }
    }
    head = solve(head);
    if(n==0) cout<<"[(empty)]";
    else {
     cout << "[";
     while(head!=nullptr){
        cout<<head->val;
        head = head->next;
        if(head!=nullptr) cout<<",";
    }
    cout << "]";
    }



    // Write your solution here.
    // Build the linked list from values, reverse it in place, and print
    // the reversed list space-separated (or "(empty)" if empty).

    return 0;
}
