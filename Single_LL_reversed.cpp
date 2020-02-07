#include <iostream>

using namespace std;

template<class t>
class abc
{
    int c=0;
    struct node
    {
        t data;
        node* next;
    };
    node* head=nullptr;
    node* ptr;
    node* temp;
    node* cur;
    node* tail;
public:
    void insNode(t value)
    {
        ptr=new node;
        ptr->data=value;
        ptr->next=nullptr;
        if(head==nullptr)
            head=ptr;
        else
            tail->next=ptr;
        tail=ptr;
    }

    void trav()
    {
        ptr=head;
        while(ptr not_eq nullptr)
        {
            cout<<ptr->data<<"-->";
            ptr=ptr->next;
            c++;
        }
        cout<<"NULL"<<endl;
    }

    void reverseLL()
    {
        ptr=temp=cur=head;
        head=nullptr;
        do
        {
            if(head == nullptr)
            {
                temp=ptr->next;
                cur=temp->next;
                temp->next=ptr;
                ptr->next=nullptr;
            }
            else
            {
                temp=cur;
                cur=temp->next;
                temp->next=ptr;
            }
            //cur=temp->next;
            ptr=temp;
            head=ptr;
        }while(ptr not_eq tail);
    }
//    void reverseNodesLL(t pos);
};

/*template<class t>
void abc<t>::reverseNodesLL(t pos)
{
    int y=c-pos;
    ptr=temp=temp1=cur=head;
    for(int i=0;i<y;++i)
        ptr=ptr->next;
    for(int i=0;i<y-1;++i)
        temp=temp->next;
    temp1=ptr;
    temp=ptr->next;
    cur=temp->next;
    temp->next=ptr;
    tail=ptr;
    tail->next=nullptr;
    ptr=temp;
    temp=cur;
    ptr->next=head;
    head=temp1;
}*/

int main()
{
    abc<int> a;
    a.insNode(1);
    a.insNode(2);
    a.insNode(3);
    a.insNode(4);
    a.insNode(5);
    cout<<"Original LL : ";
    a.trav();
    a.reverseLL();
    cout<<"\n\nAfter reversing LL : ";
    a.trav();
    cout<<"reverse particular nodes and adding them into front of LL : ";


    return 0;
}
