#include <iostream>
using namespace std;
class Queue
{
private:
    int front;
    int rear;
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
    void insert(int a)
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
    void _delete()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
        }
        else
        {
            int num = arr[front];
            front++;
            cout << "Data Deleted" << endl;
            // return  num;
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
    Queue q;
    q.insert(1);

    q.insert(2);
    q.insert(3);
    q.insert(4);
    q.insert(5);
    q.insert(6);
    // cout<<q._delete();
    q._delete();
    q._delete();
    q.traverse();

    return 0;
}


// #include <iostream>
// using namespace std;
// class Queue
// {
//  private:
//     int front;
//     int rear;
//     int arr[5];

//     int isEmpty()
//     {
//         if (front == rear)

//         {
//             return 1;
//         }
//         else
//         {
//             return 0;
//         }
//     }
//     int isFull()
//     {
//         if (rear == 5)
//         {
//             return 1;
//         }
//         else
//         {
//             return 0;
//         }
//     }
//  public:
//     Queue()
//     {
//         front = 0;
//         rear = 0;
//     }
//    void insert (int a)
//     {
//       if(isFull())
//       {
//         cout<<"Queue is Full"<<endl;
//       }
//       else
//       {
//          arr[rear]=a;
//          rear++;
//          cout<<"Data Inserted"<<endl;
//       }
//     }
//     void _delete()
//     {
//         if (isEmpty())
//         {
//             cout<<"Queue is Empty"<<endl;
//         }
//         else
//         {
//             arr[front];
//             front++;
//             cout<<"Data Deleted"<<endl;
//         }
//     }
//     void traverse()
//     {
//         if(isEmpty())
//         {
//             cout<<"Queue is Empty"<<endl;
//         }
//         else
//         {
           
//             for (int i = front; i < rear; i++)
//             { cout<<"sadf";
//                 cout<<arr[i];
//             }
            
//         }
//     }
// };
// int main()
// {
//     Queue q;
//     q.insert(34);
//     // q.insert(34);
//     // q.insert(34);
//     // q.insert(34);
//     // q.insert(34);
//     // q.insert(34);
//     q.traverse();
//     return 0;
// }