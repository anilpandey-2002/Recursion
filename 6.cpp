// Delete a linked list using recursion
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data) : data(data), next(nullptr) {}
};

void deleteList(Node *node)
{
    if (!node)
        return;
    deleteList(node->next);
    delete node;
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    deleteList(head);
    cout << "Linked List deleted.";
    return 0;
}
