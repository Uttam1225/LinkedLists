#include <iostream>

using namespace std;

//template<class t>
namespace abc
{
    struct node
    {
        int data;
        node* next;
    };
    node* head=nullptr;
    node* ptr;
    node* tail;
    node* temp;
    int c=0;
    void insNode(int value)
    {
        ptr=new node;
        ptr->data=value;
        ptr->next=head;
        if(head==nullptr)
            head=ptr;
        else
            tail->next=ptr;
        tail=ptr;
        c++;
    }
    void spliting()
    {
        ptr=head;
        for(int i=1;i<c/2;++i)
            ptr=ptr->next;
        temp=ptr->next;
        ptr->next=head;
        tail->next=temp;
    }

    void concatenation()
    {
        /*cout<<"\nptr->data : "<<ptr->data<<endl;
        cout<<"\ntemp->data : "<<temp->data<<endl;
        cout<<"\nhead->data : "<<head->data<<endl;
        cout<<"\ntail->data : "<<tail->data<<endl;*/
        ptr=head;
        for(int i=1;i<c/2;++i)
            ptr=ptr->next;
        ptr->next=temp;
        tail->next=head;
    }
    namespace   ///global
    {
        void trav()
        {
            ptr=head;
            do
            {
                cout<<ptr->data<<"-->";
                ptr=ptr->next;
            }while(ptr not_eq head);
            cout<<tail->next->data;
        }
        void trav1()
        {
            ptr=head;
            do
            {
                cout<<ptr->data<<"-->";
                ptr=ptr->next;
            }while(ptr not_eq head);
            cout<<ptr->data;
        }
        void trav2()
        {
            ptr=temp;
            do
            {
                cout<<ptr->data<<"-->";
                ptr=ptr->next;
            }while(ptr not_eq temp);
            cout<<tail->next->data;
        }
    }
}

int main()
{
    using namespace abc;
    insNode(1);
    insNode(2);
    insNode(3);
    insNode(4);
    insNode(5);
    insNode(17);
    insNode(18);
    insNode(16);
    insNode(19);
    insNode(20);
    insNode(26);
    insNode(45);
    cout<<"Original Circular Linked List : ";
    trav();
    cout<<"\n\nAfter splitting the List into two equal Circular LL : "<<endl;
    spliting();
    cout<<"Circular Linked List 1 : ";
    trav1();
    cout<<"\nCircular Linked list 2 : ";
    trav2();
    concatenation();
    cout<<"\n\nAfter concatenating : ";
    trav();
    return 0;
}
