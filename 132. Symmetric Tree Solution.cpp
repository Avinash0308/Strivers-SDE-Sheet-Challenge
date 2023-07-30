/*****************************************************

    Following is the Binary Tree node structure:
    
    class BinaryTreeNode {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if(left) 
                delete left;
            if(right) 
                delete right;
        }
    };

******************************************************/

bool solve(BinaryTreeNode<int> * left , BinaryTreeNode<int> * right){
    if(!left && !right) return true;
    else if(left && !right || !left && right) return false;
    else{
        if(left->data != right->data) return false;
        else{
            if(solve(left->left,right->right) && solve(left->right,right->left)){
                return true;
            }
            else{
                return false;
            }
        }
    }
}
bool isSymmetric(BinaryTreeNode<int>* root)
{
    // Write your code here.   
    if(!root) return true;
    return solve(root->left,root->right); 
}