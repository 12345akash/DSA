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

void preorder(struct Node *node)
{
    if (node == NULL)
        return;
    cout << node->data << " ";

    preorder(node->left);
    preorder(node->right);
}
int main()
{
    struct Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    cout << "preorder" <<  endl;
    preorder(root);
}

// iterative method
/*
class solution{

    public:
    vector<int> preorder(treeNode *root)
    {
        vector<int>preorder;
        if(root==NULL)
        return preorder;
        stack<treeNode*> st;
        st.push(root);
        while(!st.empty())
        {
            root= st.top();
            st.pop();
            preorder.push_back(root->val);
            if(root->left !=NULL)
            {
                st.push(root->left);
            }
            
            if(root->right !=NULL)
            {
                st.push(root->right);
            }
        }

        return preorder;
    }
}

TC=o(n)
SP=o(n)
*/