#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void inserAtHead(Node *&head, int d)
{
    // New Node creation
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data;
        temp = temp->next;
    }
}

void InsertAtPos(Node *head, int d, int position)
{

    // for traversing LL

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {

        temp = temp->next;
        cnt++;
    }

    // Node to Insert
    Node *NodeToInsert = new Node(d);
    NodeToInsert->next = temp->next;
    temp->next = NodeToInsert;
}

int main()
{

    Node *n1 = new Node(10);
    Node *n2 = new Node(20);

    Node *head = n1;
    print(head);

    inserAtHead(head, 30);
    print(head);

    InsertAtPos(head, 65, 1);
    print(head);

    return 0;
}