#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node *newNode(int data)
    {
        Node *temp = new Node;
        temp->data = data;
        temp->left = temp->right = NULL;
        return temp;
    }
};
class Solution
{
public:
    int isSumproperty(Node *root)
    {
        int sum = 0;
        if (root == NULL)
            return true;
        if (root->left == NULL && root->right == NULL)
            return true;
        queue<int> q;
        q.push(root->data);
        while (!q.empty())
        {
            Node *it = root;
            q.pop();
            if (it->left != NULL)
            {
                sum += it->left->data;
            }
            if (it->right != NULL)
            {
                sum += it->right->data;
            }

            if (sum == it->data && isSumproperty(it->left) && isSumproperty(it->right))
                return true;
            else
                return false;
        }
    }
};
