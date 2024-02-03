// #include <iostream>
// using namespace std;
// class Stack
// {
// private:
//     int top;
//     int arr[5];
//     int isFull()
//     {
//         if (top == 5)
//             return 1;
//         else
//             return 0;
//     }
//     int isEmpty()
//     {
//         if (top == 0)
//             return 1;
//         else
//             return 0;
//     }

// public:
//     Stack()
//     {
//         top = 0;
//     }
//     void Push(int data)
//     {
//         if (isFull())
//         {
//             cout << "Stack is Full";
//         }
//         else
//         {
//             arr[top] = data;
//             top++;
//             cout << "Data Increment";
//         }
//     }
//     void Pop()
//     {
//         if (isEmpty())
//         {
//             cout << "Stack is Empty";
//         }
//         else
//         {
//             top--;
//             cout << "Stack is Deleted";
//         }
//     }
//     void Peek()
//     {
//         if (isEmpty())
//         {
//             cout << "Stack is Empty";
//         }
//         else
//         {
//             cout << "The Topmost value = " << top;
//         }
//     }
//     int traverse()
//     {
//         if (isEmpty())
//         {
//             cout << "Stack is Empty";
//         }
//         else
//         {
//             for (int i = 0; i <= 5; i++)
//             {
//                 cout << arr[i];
//             }
//         }
//     }
// };
// int main()
// {
//     Stack obj;
//     obj.Push(10);
//     // obj.Push(20);
//     // obj.traverse();
//     // obj.Pop();
//     // obj.traverse();
//     // obj.Peek();
// }

#include <iostream>
using namespace std;
class Stack
{
    int a[5];
    int top;
    int isFull() // Returns true stack is empty else false
    {
        if (top == 5)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int isEmpty() // Returns true stack is empty else false
    {
        if (top == 0)
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
        top = 0;
    }
    void push(int x) // Insert element in stack
    {
        if (isFull())
        {
            cout << "Stack is Full." << endl;
        }
        else
        {
            a[top] = x;
            top++;
            cout << "Data Inserted." << endl;
        }
    }
    void pop() // Remove element from stack
    {
        if (isEmpty())
        {
            cout << "Stack is Empty." << endl;
        }
        else
        {
            top--;
            cout << "Data Deleted." << endl;
        }
    }
    void traverse() // Printing value
    {
        if (isEmpty())
        {
            cout << "Stack is Empty." << endl;
        }
        else
        {
            for (int i = top - 1; i >= 0; i--)
            {
                cout << a[i] << endl;
            }
        }
    }
    int peek() // Top element of stack
    {
        if (isEmpty())
        {
            cout << "Stack is Empty." << endl;
        }
        else
        {
            return a[top - 1];
        }
    }
};
// int main()
// {
//     Stack obj;
//     obj.push(10);
//     // obj.push(20);
//     // obj.push(30);
//     // obj.push(40);
//     // obj.push(50);
//     // // obj.push(60);
//     // obj.pop();
//     // obj.traverse();
// }
int main()
{
    Stack obj;
    int choice;
    char ch;
    int number;
    do
    {
        cout << "1. Push  " << endl;
        cout << "2. Pop  " << endl;
        cout << "3. Traverse " << endl;
        cout << "4. Peek " << endl;
        cout << "5. Exit" << endl;
        cout << "Enter The Choice = " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter The Number = ";
            cin >> number;
            obj.push(number);
            break;
        case 2:
            obj.pop();
            break;
        case 3:
            obj.traverse();
            break;
        case 4:
             cout<< obj.peek()<<endl;
            break;
        case 5:
            return 0;

        default:
            cout << "Please Choose correct number" << endl;
            break;
        }
         cout << "Are you continue =y/n"<<endl;
         cin>>ch;
    } while (ch == 'y');
    return 0;
}