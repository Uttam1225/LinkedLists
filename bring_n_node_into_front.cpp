#include <iostream>

using namespace std;

namespace abc
{
    int c=0;
    struct node
    {
        int data;
        node* next;
    };
    node* head=nullptr;
    node* ptr;
    node* temp;
    node* temp1;
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
        cout<<"\n\n";
        ptr=head;
        while(ptr not_eq nullptr)
        {
            cout<<ptr->data<<"-->";
            ptr=ptr->next;
            c++;
        }
        cout<<"NULL"<<endl;
    }

    void BringFront(int pos)
    {
        ptr=temp1=head;
        int y=c-pos;
        for(int i=1;i<y+1;++i)
            ptr=ptr->next;
            /*cout<<"\nptr->data : "<<ptr->data<<endl;
            system("pause");*/
        for(int i=1;i<y;++i)
            temp1=temp1->next;
        //head->next=temp;
        temp->next=head;
        head=ptr;
        temp1->next=nullptr;

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
    cout<<"Original LL is : ";
    trav();
    cout<<"\n\nenter no of nodes to bring on front : ";
    int b;
    cin>>b;
    BringFront(b);
    trav();
    return 0;
}
