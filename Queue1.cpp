#include <iostream>
using namespace std;
class Queue
{
    int *front;
    int *rear;
    int arr[5];



public:
    int isEmpty()
    {
        if (*front == *rear)

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
        if (*rear == 5)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }


    Queue()
    {
        front =new int(0);
         rear =new int(0);
         //front = 0;
         //rear = 0;
    }
    void insert(int a)
    {
        if (isFull())
        {
            cout << "Queue is Full" << endl;
        }
        else
        {
            arr[*(rear)] = a;
            (*rear)++;
            cout << "Data Inserted : " <<a<< endl;
        }
    }
    int _delete()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
        }
        else
        {
            int num=arr[*(front)];
           (*front)++;
            // cout << "Data Deleted"<< << endl;
            return num;
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
            for (int i = *front; i < *rear; i++)
            { 
                cout<<arr[i]<<endl;
            }
            
        }
    }
};
int main()
{
    Queue q;
    q.insert(12);
    q.insert(124);
    q.insert(124);
    q.insert(124);
    q.insert(124);
    q.insert(1);
    
    q._delete();
    q.traverse();
    return 0;
}