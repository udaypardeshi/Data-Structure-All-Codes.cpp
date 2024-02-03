#include <iostream>
using namespace std;
class De_Queue
{
private:
    int front;
    int rear;
    int arr[5];

public:
    int isFull()
    {
        if (front == 0 && rear == 5)

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
        if (rear == front)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    De_Queue()
    {
        front = 0;
        rear = 0;
    }
    void insertfromrear(int a)
    {
        if (isFull())
        {
            cout << "Queue is Full" << endl;
        }
        else
        {
            
            arr[rear] = a;
             rear++;
            cout << "Data Inserted : " << a << endl;
        }
    }
    void _deletefromfront()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
        }
        else
        {
            // arr[front];
            front++;
            arr[front];
            cout << "Data Deleted" << endl;
        }
    }
    void insertfromfront(int a)
    {
        if (isFull())
        {
            cout << "Queue is Full";
        }
        else
        {
             front--;
            arr[front] = a;
            // front--;
            cout << "Data Inserted : " << a << endl;
           
        }
    }
    void _deletefromrear()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty";
        }
        else
        {
            rear--;
            cout << "Data Deleted" << endl;
        }
    }
    void traverse()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
        }
        else
        {
            for (int i = front; i < rear; i++)
            {
                cout << arr[i] << endl;
            }
        }
    }
};
int main()
{
    De_Queue d;
    d.insertfromrear(1);
    d.insertfromrear(2);
    d.insertfromrear(3);
    d.insertfromrear(4);
    d.insertfromrear(5);
    d.insertfromfront(6);
    d._deletefromfront();
    d.insertfromfront(6);
    d.insertfromfront(7);
    // d._deletefromrear();
    // d._deletefromrear();
    // d.insertfromrear(6);
    // d.insertfromrear(7);
    // d._deletefromfront();
    // d._deletefromrear();
    // d.insertfromfront(8);
    // d.insertfromrear(9);
    // d.insertfromfront(10);
    d.traverse();
}
