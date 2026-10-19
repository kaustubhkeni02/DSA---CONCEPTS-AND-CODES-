#include <bits/stdc++.h>
using namespace std;

class ListNode
{

public:
    int val;
    ListNode *next;
    ListNode *back;

    ListNode(int val1)
    {
        val = val1;
        next = nullptr;
        back = nullptr;
    }

    ListNode(int val1, ListNode *next1, ListNode *back1)
    {
        val = val1;
        next = next1;
        back = back1;
    }
};

ListNode *convertarrtoLL(vector<int> &arr)
{
    ListNode* head = new ListNode(arr[0]);
    ListNode* prev = head;

    for(int i = 1 ; i < arr.size() ; i++){
        ListNode* newnode = new ListNode(arr[i] , nullptr , prev);
        prev->next = newnode;
        prev = newnode;
    }

    return head;
}
// using stack -> time complexity = O(2N) and space complexity = O(N) because we are using extra space for stack
ListNode* reverseDLLusingstack(ListNode* head){
    stack<int> st;
    ListNode* mover = head;

    while(mover != nullptr){
        st.push(mover->val);
        mover = mover->next;
    }

    ListNode* temp = head;

    while(temp != nullptr){
        temp->val = st.top();
        st.pop();
        temp = temp->next;
    }

    return head;
}


// by swapping the nodes-> front to back and back to front

ListNode* reverseDLLbyswapping(ListNode* head){
    ListNode* temp = head;
    ListNode* prev = nullptr;
    while(temp != nullptr){
        prev = temp->back;
        temp->back = temp->next;
        temp->next = prev;

        temp = temp->back;
    }

    return prev->back;
}



int main(){
    vector<int> v = {1,2,3,4,5};
    ListNode* head = convertarrtoLL(v);
    head = reverseDLLbyswapping(head);
    ListNode* temp = head;

    while(temp != nullptr){
        cout<<temp->val<<"   ";
        temp = temp->next;
    }

    return 0;
}