#include<iostream>
using namespace std;
class Stack
{
    int a[5];
    int top;
    int x,i;
    int isFull()   // Returns true stack is empty else false
    {
        if(top==5)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int isEmpty()     // Returns true stack is empty else false
    {
        if(top==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    public:
    Stack()
    {
        top=0;
    }
    void push(int x)  // Insert element in stack
    {
        if(isFull())
        {
            cout<<"Stack is Full."<<endl;
        }
        else
        {
            a[top]=x;
            top++;
            cout<<"Data Inserted."<<endl;
        }
    }
    void pop()     // Remove element from stack
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty."<<endl;
        }
        else
        {
            top--;
            cout<<"Data Deleted."<<endl;
        }
    }
    void traverse()    // Printing value
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty."<<endl;
        }
        else
        {
            for(int i=top-1;i>=0;i--)
            {
                cout<<a[i]<<endl;
            }
        }
    }
    int peek()    // Top element of stack
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty."<<endl;
        }
        else
        {
            return a[top-1];
        }
    }

};
int main()
{  
   Stack obj;
    // Stack obj;
    // obj.push(10);
    // obj.push(20);
    // obj.push(30);
    // obj.push(40);
    // obj.push(50);
    // // obj.push(60);
    // obj.pop();
    // obj.traverse();
}