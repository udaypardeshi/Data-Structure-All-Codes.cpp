#include <iostream>
using namespace std;
class Circular_Queue
{
private:
    int rear;
    int front;
    int count;
    int arr[5];

    int isFull()
    {
        if (count == 5)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int isEmpty()
    {
        if (count == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    public : 
    Circular_Queue()
    {
        front=0;
        rear=0;
        count=0;
    }
    void insert(int a)
    {
        if(isFull())
        {
            cout<<"Circular Queue is Full"<<endl;
        }
        else
        {
            rear=rear%5;
            arr[rear]= a;
            rear++;
            count++;
        }
    }
    void _delete ()
    {
        if(isEmpty())
        {
            cout<<"Circular Queue is Empty"<<endl;
        }
        else
        {
            front = front%5;
            cout<<arr[front]<<" is Deleted"<<endl;
            front++;
            count--;
        }
    }
    void traverse ()
    {
        if (isEmpty())
        {
            cout<<"Circular Queue is Empty"<<endl;
        }
        else
        {
           int  temp=front;
            for(int i=1;i<=count;i++)
            {
                temp=temp%5;
                cout<<arr[temp]<<endl;
                temp++;
            }
        }
    }
};
int main()
{
    Circular_Queue obj;
    obj.insert(1);
    obj.insert(2);
    obj.insert(3);
    obj.insert(4);
    obj.insert(5);
    // obj._delete();
    // obj._delete();
    // obj.insert(6);
    // obj.insert(7);
    // obj.insert(8);
    obj.traverse();
}