#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int val1)
    {
        val = val1;
        next = nullptr;
    }

    ListNode(int val1, ListNode *next1)
    {
        val = val1;
        next = next1;
    }
};

ListNode *convertARRtoLL(vector<int> &arr)
{

    ListNode *head = new ListNode(arr[0]);
    ListNode *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        ListNode *temp = new ListNode(arr[i]);
        prev->next = temp;
        prev = temp;
    }

    return head;
}

ListNode* sortoddevenLL(ListNode* head){
    vector<int> arr;

    if(head == nullptr || head->next == nullptr){
        return head;
    }

    ListNode* temp1 = head;
    while(temp1 != nullptr && temp1->next != nullptr){
        arr.push_back(temp1->val);
        temp1 = temp1->next->next;
    }

    if(temp1) arr.push_back(temp1->val);

    ListNode* temp2 = head->next;

    while(temp2 != nullptr && temp2->next != nullptr){
        arr.push_back(temp2->val);
        temp2 = temp2->next->next;
    }

    if(temp2) arr.push_back(temp2->val);

    ListNode* mover = head;
    int i = 0;
    while(mover!= nullptr){
        mover->val = arr[i];
        i++;
        mover = mover->next;
    }

    return head;
}

int main()
{
    vector<int> v = {2, 4, 5, 7, 9};
    ListNode *head = convertARRtoLL(v);
    head = sortoddevenLL(head);
    ListNode *temp = head;

    while (temp != nullptr)
    {
        cout << temp->val << "   ";
        temp = temp->next;
    }

    return 0;
}