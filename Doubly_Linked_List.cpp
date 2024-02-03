#include <iostream>
using namespace std;
class Node
{
private:
    int data;
    Node *next;
    Node *prev;

public:
    Node()
    {
        data = 0;
        next = NULL;
        prev = NULL;
    }
    void setData(int a)
    {
        this->data = a;
    }
    int getData()
    {
        return data;
    }
    void setNext(Node *next)
    {
        this->next = next;
    }
    Node *getNext()
    {
        return next;
    }
    void setPrev(Node *prev)
    {
        this->prev = prev;
    }
    Node *getPrev()
    {
        return prev;
    }
};
class Doubly_Linked_List
{
    Node *head;

public:
    Doubly_Linked_List()
    {
        head = NULL;
    }
    void insertBegin(int a)
    {
        Node *temp = new Node();
        temp->setData(a);
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            temp->setNext(head);
            head->setPrev(temp);
            head = temp;
        }
    }
    void insertEnd(int a)
    {
        Node *temp = new Node();
        temp->setData(a);
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            Node *t = head;
            while (t->getNext() != NULL)
            {
                t = t->getNext();
            }
            t->setNext(temp);
            temp->setPrev(t);
            temp->setNext(NULL);
        }
    }
     void insertBetween(int a)
    {
        int position;
        cout << "Enter Position" << endl;
        cin >> position;
        if (position <= 0)
        {
            cout << "Invalid Position";
        }
        else
        {
            if (position == 1)
            {
                insertBegin(a);
            }
            else
            {
                int i = 1;
                Node *trav = head;
                while (i < position -1 )
                {
                    if (trav != NULL)
                    {
                        trav = trav->getNext();
                    }
                    else
                    {
                        cout << "Invalid Postion";
                        return;
                    }
                    i++;
                }
                Node *temp = new Node();
                temp->setData(a);
                temp->setNext(trav->getNext());
                temp->setPrev(trav);
                temp->getNext()->setPrev(temp);
                trav->setNext(temp);
            }
        }
    }
     void _deleteBegin()
    {

        if (head == NULL)
        {
            cout << "Node is Empty" << endl;
        }
        else
        {
            Node *temp;
            temp = head;
            head = head->getNext();
            delete temp;
        }
    }
     void _deleteEnd()
    {
        if (head == NULL)
        {
            cout << "Node is Empty" << endl;
        }
        else
        {
            if (head->getNext() == NULL)
            {
                delete head;
                head = NULL;
            }
            else
            {
                Node *present = head;
                Node *previous = head;
                while (present->getNext() != NULL)
                {
                    previous = present;
                    present = present->getNext();
                }
                previous->setNext(NULL);
                // delete present;
            }
        }
    }
    void _deleteBetween()
    {
        int position;
        cout<<"Enter Position"<<endl;
        cin>>position;
        if(position<=0)
        {
            cout<<"Invalid Position";
        }
        else
        {
            if(position==1)
            {
                _deleteBegin();
            }
            else
            {
                int i=1;
                Node *trav=head;
                while(i<position-1)
                {
                    if(trav!=NULL)
                    {
                        trav=trav->getNext();
                    }
                    else
                    {
                        cout<<"Invalid Position";
                        return;
                    }
                    i++;
                }
                if(trav->getNext()!=NULL)
                {
                    Node * del;
                    del=trav->getNext();
                    trav->setNext(del->getNext());
                    delete del;
                }
                else
                {
                    cout<<"Invalid Position";
                    return;
                }
            }
        }
    }
    void traverse()
    {
        if (head == NULL)
        {
            cout << "Linked list is empty" << endl;
        }
        else
        {
            Node *temp = head;
            while (temp != NULL)
            {
                cout << temp->getData() <<" ";
                temp = temp->getNext();
            }
        }
    }
};
int main()
{
    Doubly_Linked_List obj;
    // obj.insertEnd(10);
    // obj.insertEnd(20);
    // obj.insertEnd(30);
    // obj.insertBetween(40);
    // obj._deleteEnd();
    // obj.insertBegin(10);
    // obj.insertBegin(20);
    // obj.insertBegin(30);
    // obj._deleteBegin();
    // obj.insertBegin(40);

    // obj.insertEnd(40);
    // obj.insertBetween(100);
    // obj.insertBetween(110);
    // obj.insertEnd(50);
    // obj.insertBegin(60);
    // obj.insertEnd(70);
    // obj.traverse();
    // obj._deleteBetween();
    // obj.traverse();

    // obj.insertBegin(10);
    // obj.insertBegin(20);

    // obj.insertBetween(30);
    // obj.insertBegin(40);
    // obj.traverse();
    obj.insertBegin(10);
    obj.insertBetween(20);
    obj.traverse();
    }
