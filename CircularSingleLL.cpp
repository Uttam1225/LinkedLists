#include <iostream>
//template <typename T>

using namespace std;

namespace abc
{
    struct node
    {
        int data;
        node* next;
    };
    node* ptr;
    node* head=nullptr;
    node* temp;
    node* temp1;
    bool b=0;
    void insNode(int value)
    {
        ptr=new node;
        ptr->data=value;
        if(head not_eq nullptr)
        {
            temp->next=ptr;
            ptr->next=head;
        }
        else
            head=ptr;
        temp=ptr;
    }
    void trav()
    {
        ptr=head;
        do
        {
            cout<<"-->"<<ptr->data<<"-->";
            ptr=ptr->next;
        }while(ptr not_eq head);
        cout<<head->data;
    }
    void insNewNode(int value,int n);

    int delNode(int n);

    void insNodeAtEnd(int value)
    {
        ptr=new node;
        ptr->data=value;
        ptr->next=head;
        temp->next=ptr;
        temp=ptr;
    }

    void insNodeAtBeginning(int value)
    {
        ptr=new node;
        ptr->data=value;
        ptr->next=head;
        head=ptr;
        temp->next=head;
    }
}

void abc::insNewNode(int value,int n)
{
    temp1=head;
    for(int i=1;i<n-1;++i)
        temp1=temp1->next;
    ptr=new node;
    ptr->data=value;
    ptr->next=temp1->next;
    temp1->next=ptr;
}

int abc::delNode(int n)
{
    if(n==1)
    {
        head=ptr->next;
        temp->next=head;
    }
    else
    {
        ptr=temp1=head;
        for(int i=1;i<n-1;++i)
            temp1=temp1->next;
        for(int i=1;i<n;++i)
            ptr=ptr->next;
        temp1->next=ptr->next;
    }
    delete ptr;
}


int main()
{
    using namespace abc;
    cout<<"Original list is : ";
    insNode(1);
    insNode(2);
    insNode(3);
    insNode(4);
    insNode(5);
    insNode(6);
    trav();
    cout<<"\n\nAfter adding a new node at nth position : ";
    insNewNode(8,4);
    trav();
    cout<<"\n\nAfter deleting nth node from LL : ";
    delNode(1);
    trav();
    cout<<"\n\ninsert at end : ";
    insNodeAtEnd(9);
    trav();
    cout<<"\n\nAfter deleting nth node from LL : ";
    delNode(3);
    trav();
    cout<<"\n\nInserting node at the beginning : ";
    insNodeAtBeginning(1);
    trav();
    cout<<"\n\n";
    return 0;
}
