#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *back;

    node(int data1, node *next1, node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

    node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

node *convertarrtodoublyLL(vector<int> arr)
{
    node *head = new node(arr[0]);
    node *prev = head;

    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = prev->next;
    }

    return head;
}

node *deletethehead(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    node *prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    free(prev);

    return head;
}

node *deletethetail(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    node *x = temp->back;
    x->next = nullptr;
    temp->back = nullptr;
    free(temp);

    return head;
}

node *deleteatkthposition(node *head, int k)
{
    if (head == NULL)
    {
        return NULL;
    }
    int cnt = 0;
    node *temp = head;
    while (temp != nullptr)
    {
        cnt++;
        if (cnt == k)
        {
            break;
        }

        temp = temp->next;
    }

    node *prev = temp->back;
    node *front = temp->next;

    if (prev == NULL && front == NULL)
    {
        free(temp);
        return NULL;
    }

    else if (prev == nullptr)
    {
        return deletethehead(head);
    }

    else if (front == nullptr)
    {
        return deletethetail(head);
    }

    else
    {
        prev->next = front;
        front->back = prev;
        temp->next = NULL;
        temp->back = NULL;
        free(temp);
        return head;
    }
}

void deletenode(node *temp)
{
    node *prev = temp->back;
    node *front = temp->next;

    if (front == NULL)
    {
        prev->next = NULL;
        temp->back = NULL;
        free(temp);
        return;
    }
    prev->next = front;
    front->back = prev;

    temp->next = nullptr;
    temp->back = nullptr;
    free(temp);
}

node* insertbeforehead(node* head , int val){
    if(head == NULL){
        node* new_node = new node(val);
        head = new_node;
    }

    node* new_node = new node(val);
    node*temp = head;

    head = new_node;

    temp->back = head;
    head->next = temp;
    head->back = nullptr;
    

    return head;

}

node* insertbeforetail(node* head , int val){
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    node* prev = temp->back;
    node* front = temp;

    node* new_node = new node(val , front , prev);

    prev->next = new_node;
    front->back = new_node;

    return head;
}

node* insertbeforekthELEMENT(node* head , int val , int k){
   if(head->next == NULL){
    if(k==1){
        insertbeforehead(head,val);
    }
   }
    node* temp = head;
    int cnt = 0;
    while(temp!=nullptr){
        cnt++;
        if(cnt == k){
            break;
        }

        temp = temp->next;
    }

    node* prev = temp->back;
    node* front = temp;

    node* new_node = new node(val , front , prev);

    prev->next = new_node;
    front->back = new_node;

    return head;
}

void insertnode(node* Node , int val){
    node* prev = Node->back;
    node* new_node = new node(val , Node , prev);
    prev->next = new_node;
    Node->back = new_node;
}

int main()
{
    vector<int> v = {2, 4, 6, 3, 7};
    node *head = convertarrtodoublyLL(v);
    // head = insertbeforekthELEMENT(head, 12 , 3);
    // deletenode(head->next->next);
    insertnode(head->next->next->next , 10);
    node *temp = head;

    while (temp!= NULL)
    {
        cout << temp->data << "   ";
        temp = temp->next;
    }

    return 0;
}