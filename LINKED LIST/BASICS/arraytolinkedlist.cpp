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

node* convertarrtoLL(vector<int> &arr){
    node* head = new node(arr[0]);
    node* mover = head;
    for(int i = 1 ; i < arr.size() ; i++){
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;

}

int main()
{
    vector<int> v = {2 , 4, 3, 5};
    node* head = convertarrtoLL(v);
    cout<<head->data<<endl;
    cout<<head->next;



    return 0;


}


