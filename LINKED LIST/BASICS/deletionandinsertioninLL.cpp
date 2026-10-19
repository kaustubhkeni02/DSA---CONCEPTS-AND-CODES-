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

node *deletehead(node *head)
{
    if (head == NULL)
        return head;
    node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

node *deletetail(node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;
    node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    free(temp->next);
    temp->next = nullptr;

    return head;
}

node *removeKthelementusingposition(node *head, int k)
{
    if (head == NULL)
        return head;
    if (k == 1)
    {
        node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    int cnt = 0;
    node *temp = head;
    node *prev = NULL;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }

        prev = temp;
        temp = temp->next;
    }

    return head;
}

node *removetheKelementusingel(node *head, int ele)
{
    if (head == NULL)
        return NULL;
    if (head->data == ele)
    {
        node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    node *temp = head;
    node *prev = NULL;
    while (temp != NULL)
    {
        if (temp->data == ele)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }

        prev = temp;
        temp = temp->next;
    }

    return head;
}

node *insertathead(node *head, int val)
{
    node *new_node = new node(val, head);
    return new_node;
}

node *insertatTail(node *head, int val)
{
    if (head == NULL)
    {
        node *new_node = new node(val);
    }

    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    node *new_node = new node(val);
    temp->next = new_node;

    return head;
}

node *insertatkthpos(node *head, int ele, int k)
{
    if (head == NULL)
    {
        if (k == 1)
        {
            return new node(ele, head);
        }

        else
        {
            return head;
        }
    }

    if (k == 1)
    {
        return new node(ele, head);
    }

    int cnt = 0;
    node *temp = head;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k - 1)
        {
            node *x = new node(ele, temp->next);
            temp->next = x;
            break;
        }

        temp = temp->next;
    }

    return head;
}

node *insertbeforevalue(node *head, int ele, int val)
{
    if (head == NULL)
    {
        return NULL;
    }

    if (head->data == val)
    {
        return new node(ele, head);
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->next->data == val)
        {
            node *x = new node(ele, temp->next);
            temp->next = x;
            break;
        }

        temp = temp->next;
    }

    return head;
}
int main()
{
    vector<int> v = {2, 4, 3, 5};
    node *head = convertarrtoLL(v);
    head = insertbeforevalue(head, 200, 2);
    node *temp = head;

    while (temp)
    {
        cout << temp->data << "   ";
        temp = temp->next;
    }

    cout << endl;

    return 0;
}