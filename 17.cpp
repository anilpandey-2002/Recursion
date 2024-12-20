#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int x) : data(x), left(nullptr), right(nullptr) {}
};

void rightViewHelper(Node *root, int level, int &maxLevel, vector<int> &result)
{
    if (!root)
        return;
    if (level > maxLevel)
    {
        result.push_back(root->data);
        maxLevel = level;
    }
    rightViewHelper(root->right, level + 1, maxLevel, result);
    rightViewHelper(root->left, level + 1, maxLevel, result);
}

vector<int> rightView(Node *root)
{
    vector<int> result;
    int maxLevel = -1;
    rightViewHelper(root, 0, maxLevel, result);
    return result;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->left = new Node(4);
    root->right->right = new Node(5);

    for (int val : rightView(root))
        cout << val << " ";
    cout << endl;
    return 0;
}
