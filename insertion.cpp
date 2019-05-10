#include<iostream>
using namespace std;

struct node
{

    int data;
    node *next;
};

class list
{
private:
    node *head;
    node *tail;

public:
    list()
    {
        head=NULL;
        tail=NULL;
    }

    void createnode()
    {
        node *temp=new node;
        int val;
        cin>>val;
        temp->data=val;
        temp->next=NULL;
        if(head==NULL)
        {
           head=temp;
           tail=temp;
           temp=NULL;
        }
        else{
               tail->next=temp;
               tail=temp;


        }
    }

    void display()
    {
        node *temp=new node;
        temp=head;
        while(temp!=NULL)
        {cout<<temp->data;
        temp=temp->next;
    }

    void nfromend()
    {
        cout<<"enter n";
        int n;
        cin>>n;

        node*ptr=head;
        int k=0;
        while(ptr!=NULL)
        {
            ptr=ptr->next;
            k++;
        }

        n=k-n;
        ptr=head;
        while(n!=1)
        {
         ptr=ptr->next;
         n--;
        }
        node *del=ptr->next;
        ptr->next=ptr->next->next;
        delete(del);
    }
}
};


int main()
{
    list obj;
    int ch;
    cout<<"enter ur choice= ";
    cin>>ch;
    while(ch<4)
   {

    if(ch==1)
        obj.createnode();
    if(ch==2)
        obj.display();
    if(ch==3)
        obj.nfromend();
    cout<<"enter ur choice= ";
   cin>>ch;

   }
return 0;
}
