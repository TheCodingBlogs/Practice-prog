/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; */


// Return a vector containing the inorder traversal of the tree
void myFun(vector<int>&temp,Node * root)
{
    if(root==NULL){
        return ;
    }
    myFun(temp,root->left);
    temp.push_back(root->data);
    myFun(temp,root->right);
}
vector<int> inOrder(Node* root)
{
    vector<int>v;
    myFun(v,root);
    return v;
}int main()
{
vector <int> res = inOrder(root);
}