#include <bits/stdc++.h>
//template <typename t>

using namespace std;

class abc
{
private:
    struct node
    {
        int data;
        node* next;
    };
    node* head=nullptr;
    node* ptr;
    node* temp;

public:
    void insNode(int value)
    {
        ptr=new node;
        ptr->data=value;
        ptr->next=nullptr;
        if(head==nullptr)
            head=ptr;
        else
            temp->next=ptr;
        temp=ptr;
    }

    void trav()
    {
        ptr=temp=head;
        temp=ptr->next;
        while(temp!=nullptr)
        {
            ptr=ptr->next;
            temp=temp->next->next;
        }
        cout<<"Middle ele is "<<ptr->data<<endl;
    }
};

int main()
{
    abc a;
    a.insNode(1);
    a.insNode(2);
    a.insNode(3);
    a.insNode(4);
    a.insNode(5);
    a.insNode(6);
    a.insNode(7);
    a.insNode(8);
    a.insNode(9);
    a.trav();

    return 0;
}
