// Bottom View of a Binary Tree using Recursion
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int x) : data(x), left(nullptr), right(nullptr) {}
};

void Bottom(Node *root, vector<int> &arr, vector<int> &arr2, int &left, int &right, int x, int p, int mid)
{
    if (!root)
        return;
    if (x < left)
        left = x;
    if (x > right)
        right = x;
    if (arr[mid + x] == INT_MIN || arr2[mid + x] < p)
    {
        arr[mid + x] = root->data;
        arr2[mid + x] = p;
    }
    Bottom(root->right, arr, arr2, left, right, x + 1, p + 1, mid);
    Bottom(root->left, arr, arr2, left, right, x - 1, p + 1, mid);
}

vector<int> bottomView(Node *root)
{
    int n = countNodes(root);
    vector<int> arr(2 * n + 1, INT_MIN), arr2(2 * n + 1, INT_MIN);
    int left = 0, right = 0, mid = n;
    Bottom(root, arr, arr2, left, right, 0, 0, mid);

    vector<int> ans;
    for (int i = mid + left; i <= mid + right; ++i)
        if (arr[i] != INT_MIN)
            ans.push_back(arr[i]);
    return ans;
}

int countNodes(Node *root)
{
    if (!root)
        return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int main()
{
    Node *root = new Node(1);
    root->right = new Node(2);
    root->right->right = new Node(4);
    root->right->right->left = new Node(3);
    root->right->right->right = new Node(5);

    for (int val : bottomView(root))
        cout << val << " ";
    return 0;
}
