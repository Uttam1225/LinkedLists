#include <iostream>

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
    node* temp;
    node* ptr;
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

    void pushNode(int value)  ///function to push value into queue
    {
        ptr=new node;
        ptr->data=value;
        ptr->next=nullptr;
        temp->next=ptr;
        temp=ptr;
        cout<<"\nInsertion of "<<ptr->data<<" is successful!!!"<<endl;
    }

    void popNode()    ///function to pop values from queue
    {
        ptr=head;
        if(head==nullptr)
            cout<<"\n\nUnderflow can't pop anymore!!!"<<endl;
        head=ptr->next;
        cout<<"\nDeletion of "<<ptr->data<<" is successful!!!"<<endl;
        delete ptr;
    }

    void trav()    ///function to travel the LL
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
    abc b;
    cout<<"The original Link List is : ";
    b.insNode(1);
    b.trav();
    b.pushNode(5);
    b.trav();
    b.pushNode(6);
    b.trav();
    b.popNode();
    b.trav();
    b.popNode();
    b.trav();
    b.popNode();
    b.trav();
    b.popNode();
    b.trav();
    return 0;
}
