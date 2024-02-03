#include <iostream>
using namespace std;
class Node
{
private:
    int data;
    Node *next;

public:
    Node()
    {
        data = 0;
        next = NULL;
    }
    void setdata(int a)
    {
        this->data = a;
    }
    int getdata()
    {
        return data;
    }
    void setnext(Node *next)
    {
        this->next = next;
    }
    Node *getnext()
    {
        return next;
    }
};
class Singly_Circular_Linked_List
{
    Node *head;
    Node *tail;

public:
    Singly_Circular_Linked_List()
    {
        head = NULL;
    }
    void insertEnd(int a)
    {
        Node *temp = new Node();
        temp->setdata(a);
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            Node *t = head;
            while (t->getnext() != NULL)
            {
                t = t->getnext();
            }
            t->setnext(temp);
        }
    }
    void insertBegin(int a)
    {
        Node *temp = new Node();
        temp->setdata(a);
        // temp->setnext(head);
        // head=temp;
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            temp->setnext(head);
            head = temp;
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
                cout << temp->getdata() << endl;
                temp = temp->getnext();
            }
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
            if (head->getnext() == NULL)
            {
                delete head;
                head = NULL;
            }
            else
            {
                Node *present = head;
                Node *previous = head;
                while (present->getnext() != NULL)
                {
                    previous = present;
                    present = present->getnext();
                }
                previous->setnext(NULL);
                // delete present;
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
            head = head->getnext();
            delete temp;
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
                while (i < position - 1)
                {
                    if (trav != NULL)
                    {
                        trav = trav->getnext();
                    }
                    else
                    {
                        cout << "Invalid Postion";
                        return;
                    }
                    i++;
                }
                Node *temp = new Node();
                temp->setdata(a);
                temp->setnext(trav->getnext());
                trav->setnext(temp);
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
                        trav=trav->getnext();
                    }
                    else
                    {
                        cout<<"Invalid Position";
                        return;
                    }
                    i++;
                }
                if(trav->getnext()!=NULL)
                {
                    Node * del;
                    del=trav->getnext();
                    trav->setnext(del->getnext());
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
};
int main()
{
  Singly_Circular_Linked_List obj;
  obj.insertBegin(10);
  obj.insertBegin(20);
  obj.traverse();
}