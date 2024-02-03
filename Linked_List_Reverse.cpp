 #include <iostream>
// using namespace std;
// class Node
// {
// private:
//     int data;
//     Node *next;
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
class Linked_List
{
    Node *head;

public:
    Linked_List()
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
    void insertRev()
    {
        Node *temp = NULL;
        Node *Before = NULL;
        Node *After = head;
        while (After != NULL)
        {
            temp = After->getnext();
            After->setnext(Before);
            Before = After;
            After = temp;
        }
        head = Before;
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
            temp = head;
            while (temp != NULL)
            {
                cout << temp->getdata() << endl;
                temp = temp->getnext();
            }
        }
    }
};
int main()
{
    Linked_List obj;
    cout << "Before Reverse" << endl;
    obj.insertEnd(1);
    obj.insertEnd(2);
    obj.insertEnd(3);

    obj.traverse();
    cout << "After Reverse" << endl;
    obj.insertRev();
    obj.traverse();
}



