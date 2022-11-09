#include <iostream>

using namespace std;
template <class t>
class stack
{
    struct node
    {
        t item;
        node* next;
    };
    node *top;

public:
    stack()
    {
        top=NULL;
    }
    void push(t newItem)
    {
        node *newItemPtr=new node;
        newItemPtr->item=newItem;
        newItemPtr->next=top;
        top=newItemPtr;
    }
    bool isEmpty()
    {
        return top==NULL;
    }
    void pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is already empty";
        }
        else
        {
            node* temp=top;
            top=top->next;
            temp=temp->next=NULL;
            delete temp;
        }
    }
      void pop(t &saveVal)
    {
        if(isEmpty())
        {
            cout<<"Stack is already empty";
        }
        else
        {
            saveVal=top->item;
            node* temp=top;
            top=top->next;
            temp=temp->next=NULL;
            delete temp;
        }
    }
     void getTop(t &saveVal)
    {
        if(isEmpty())
        {
            cout<<"Stack is already empty";
        }
        else
        {
            saveVal=top->item;
        }
    }
    void display(){
    node* cur=top;
    while(cur!=NULL){
        cout<<cur->item<<endl;
        cur=cur->next;
    }
    }
};
int main()
{
    stack<int> s;
    s.push(100);
    s.push(200);
    s.push(300);
    s.push(400);
    s.push(500);
    s.display();
    int top=0;
    s.getTop(top);
    cout<<"top: "<<top<<endl;
        return 0;
}
