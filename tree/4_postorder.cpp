#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left, *right;
};

Node *newNode(int data) 
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

void postorder(struct Node *node)
{
    if (node == NULL)
        return;

    postorder(node->left);
    postorder(node->right);
    cout << node->data << " ";
}
int main()
{
    struct Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout << "postorder" << endl;
    postorder(root);
    return 0;
}
/* iterative postorder -> In this the iterative approch the two stack is used in which the push and pop element is done
class Solution{
    public:
    vector<int>postorder(TreeNode * root)
    {
        vector<int> postorder;
        if(root==NULL)
        return postorder;
        stack<TreeNode*> st1,st2;
        st1.push(root);
        while(!st1.empty())
        {
            root =st1.top();
            st1.pop();
            st2.push(root);
            if(root->left!=NULL)
            {
                st1.push(root->left);
            }
            if(root->right!=NULL)
            {
                st1.push(root->right);
            }
        }
        while(!st2.empty())
        {
            postorder.push_back(st2.top()->val);
            st2.pop();
        }
        return postorder;
    }
}
*/