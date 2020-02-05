#include <iostream>

using namespace std;

struct node
{
    int data;
    node* next;
};

node* head=nullptr;
node* ptr;
node* temp;

class LinkedList
{
public:
    int mynode()
    {
        ptr=new node;
    }
    int create(int value)
    {
        mynode();
        ptr->data=value;
        if(head==nullptr)
        {
            ptr->next=nullptr;
            head=ptr;
            temp=ptr;
        }
        else
        {
            ptr->next=nullptr;
            temp->next=ptr;
            temp=ptr;
        }
    }

    int insertmiddle(int pos,int value)
    {
        mynode();
        ptr->data=value;
        for(int i=0;i<pos;++i)
        {
            temp=head;
            temp=temp->next;
        }
        ptr->next=temp->next;
        temp->next=ptr;
    }

    int deletemiddle(int pos)
    {
        for(int i=0;i<pos+1;++i)
        {
            temp=head;
            temp=temp->next;
        }
        for(int i=0;i<pos;++i)
        {
            ptr=head;
            ptr=ptr->next;
        }
        ptr->next=temp->next;
        delete temp;
    }
    int searchmiddle(int value)
    {
        ptr=head;
        while(ptr->next!=nullptr)
        {
            if(ptr->data==value)
            {
                cout<<"SUCCESS element found "<<ptr->data<<endl;
            }
            else
            {
                ptr=ptr->next;
            }
        }
    }

    int print()
    {
        ptr=head;
        while(ptr->next!=nullptr);
        {
            cout<<ptr->data<<"-->";
            ptr=ptr->next;
        }
        cout<<ptr->data;
    }
};

int main()
{
    LinkedList ll;
    ll.create(2);
    ll.create(3);
    ll.create(4);
    ll.create(5);
    ll.print();
    ll.insertmiddle(2,6);
    ll.print();
    ll.deletemiddle(2);
    ll.print();
    ll.searchmiddle(4);


    return 0;
}
