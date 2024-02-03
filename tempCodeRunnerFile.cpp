#include <iostream>
using namespace std;
class Queue
{
private:
    int front, rear;
    int arr[5];
    int isEmpty()
    {
        if (front == rear)

        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int isFull()
    {
        if (rear == 5)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    public:
    Queue()
    {
        front = 0;
        rear = 0;
    }
   void insert (int a)
    {
      if(isFull())
      {
        cout<<"Queue is Full"<<endl;
      }
      else
      {
         arr[front]=a;
         front++;
         cout<<"Data Inserted"<<endl;
      }
    }
    void _delete()
    {
        if (isEmpty())
        {
            cout<<"Queue is Empty"<<endl;
        }
        else
        {
            arr[front];
            front++;
            cout<<"Data Deleted"<<endl;
        }
    }
    void traverse()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty"<<endl;
        }
        else
        {
           
            for (int i = front; i < rear; i++)
            { cout<<"sadf";
                cout<<arr[i];
            }
            
        }
    }
};
int main()
{
    Queue q;
    q.insert(34);
    q.insert(34);
    q.insert(34);
    q.insert(34);
    q.insert(34);
    q.insert(34);
    q.traverse();
}