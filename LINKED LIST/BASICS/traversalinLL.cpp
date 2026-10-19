#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data1, node *next1)
    {
        data = data1;
        next = next1;
    }

    node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

node *convertarrtoLL(vector<int> &arr)
{
    node *head = new node(arr[0]);
    node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

int lengthofLL(node * head , vector<int> arr){
    int length;
    node* temp = head;
    while(temp){
        temp = temp->next;
    }

    return length;
}

int main()
{
    vector<int> v = {2, 4, 3, 5};
    node *head = convertarrtoLL(v);

    node* temp = head;
    
    while(temp){
        cout<<temp->data<<"   ";
        temp = temp->next;
        
    }

    cout<<endl;

    cout<<"The length of the LL is: "<<lengthofLL(head , v);
    

    return 0;
}