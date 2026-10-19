#include <bits/stdc++.h>
using namespace std;

vector<int> rearrange_elements(vector<int> a)
{
    vector<int> pos;
    vector<int> neg;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] < 0)
        {
            neg.push_back(a[i]);
        }

        else
        {
            pos.push_back(a[i]);
        }
    }

    if (pos.size() > neg.size())
    {
        for (int i = 0; i < neg.size(); i++)
        {
            a[2 * i] = pos[i];
            a[2 * i + 1] = neg[i];
        }

        int index = neg.size() * 2;

        for (int i = neg.size(); i < pos.size(); i++)
        {
            a[index] = pos[i];
            index++;
        }
    }

    else
    {

        for (int i = 0; i < pos.size(); i++)
        {
            a[2 * i] = pos[i];
            a[2 * i + 1] = neg[i];
        }

        int index = pos.size() * 2;

        for (int i = pos.size(); i < neg.size(); i++)
        {
            a[index] = neg[i];
            index++;
        }
    }
    cout<<"Array after rearranging elements: "<<endl;
    
    for(int i = 0 ; i < a.size() ; i++){
        cout<<a[i]<<"    ";
    }
}


int main(){
    vector<int> a = {-4,-7,2,-5,-8,3,7};

    rearrange_elements(a);

    return 0;
}