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
    node* ptr;
    node* temp;
    node* check;

public:
    void newNode()
    {
        ptr=new node;
    }
    void insertNode(int value)
    {
        newNode();
        ptr->data=value;
        if(head==nullptr)
        {
            ptr->next=nullptr;
            temp=ptr;
            head=ptr;
        }
        else
        {
            ptr->next=nullptr;
            temp->next=ptr;
            temp=ptr;
        }
    }
    void traverse()
    {
        ptr=temp=check=head;
        while(check!=nullptr)
        {
            ptr=check;
            temp=check->next;
            while(temp!=nullptr)
            {
                if(check->data==temp->data)
                {
                    ptr->next=temp->next;
                    cout<<"match found removing element "<<temp->data<<endl;
                    delete temp;
                    temp=ptr->next;
                }
                else
                {
                    temp=temp->next;
                    ptr=ptr->next;
                }
            }
            check=check->next;
        }
    }
    void travel()
    {
        ptr=head;
        while(ptr!=nullptr)
        {
            cout<<ptr->data<<"-->";
            ptr=ptr->next;
        }
    }
};

int main()
{
    abc a;
    a.insertNode(1);
    a.insertNode(2);
    a.insertNode(1);
    a.insertNode(3);
    a.insertNode(1);
    a.insertNode(2);
    a.travel();
    a.traverse();
    a.travel();
    return 0;
}
