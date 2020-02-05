#include<bits/stdc++.h>

using namespace std;

class abc
{
private:
    struct node
    {
        int data;
        node* next;
    };
    node* ptr;
    node* head=nullptr;
    node* temp;
public:
    int insNode(int value)
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

    void pushNode(int value)
    {
        ptr=head;
        ptr=new node;
        ptr->data=value;
        ptr->next=head;
        head=ptr;
        cout<<"\n\nInsertion of "<<ptr->data<<" is successful!!!"<<endl;
    }

    void popNode()
    {
        if(head==nullptr)
            cout<<"\n\nUnderflow can't pop anymore!!!"<<endl;
        temp=head;
        head=temp->next;
        cout<<"\n\nDeletion of "<<temp->data<<" is successful!!!"<<endl;
        delete temp;
    }

    void trav()
    {
        ptr=head;
        while(ptr!=nullptr)
        {
            cout<<ptr->data<<"-->";
            ptr=ptr->next;
        }
        cout<<"NULL\n";
    }
};

int main()
{
    abc c;
    cout<<"Original Linked List is : ";
    c.insNode(1);
    c.trav();
    c.pushNode(11);
    c.trav();
    c.pushNode(12);
    c.trav();
    c.popNode();
    c.trav();
    c.popNode();
    c.trav();
    c.popNode();
    c.trav();
    c.popNode();
    c.trav();
    return 0;
}
