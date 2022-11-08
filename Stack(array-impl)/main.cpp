#include <iostream>

using namespace std;
const int MAX_SIZE=100;
template <class t>
class stack
{
    int top;
    t item[MAX_SIZE];

public:
    stack()
    {
        top=-1;
    }
    void push(t element)
    {

        if(top>=MAX_SIZE-1)
        {
            cout<<"The stack is full";
        }
        else
        {
            top++;
            item[top]=element;
        }
    }
    bool isEmpty()
    {
        return top==-1;
    }
    void pop()
    {
        if(isEmpty())
        {
            cout<<"The stack is Empty";
        }
        else
            top--;
    }
    void pop(t &element)
    {
        if(isEmpty())
        {
            cout<<"The stack is Empty";
        }
        else
        {
            element=item[top];
            top--;
        }
    }
    int getTop()
    {
        if(isEmpty())
        {
            cout<<"The stack is Empty";
        }
        else
        {
            int topElement=item[top];
            return topElement;
        }
    }
    void print()
    {
        cout<<"[";
        for(int i=top; i>=0; i--)
        {
            cout<<item[i]<<" ";
        }
        cout<<"]";
        cout<<endl;
    }
};
int main()
{
    stack<int> s;
    s.push(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.print();
    int top=s.getTop();
    cout<<top<<endl;
    s.pop();
    int top2=s.getTop();
    cout<<top2<<endl;
    return 0;
}
