/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

    int helper(string& data) {
        int pos = data.find(',');
        int val = stoi(data.substr(0,pos));
        data = data.substr(pos+1);
        return val;
    }
string serializeTree(TreeNode<int> *root)
{
 //    Write your code here for serializing the tree
 if (root == nullptr) return "#";
        return to_string(root->data)+","+serializeTree(root->left)+","+serializeTree(root->right);

}
TreeNode<int>* mydeserialize(string& data) {
        if (data[0]=='#') {
            if(data.size() > 1) data = data.substr(2);
            return nullptr;
        } else {
            TreeNode<int>* node = new TreeNode<int>(helper(data));
            node->left = mydeserialize(data);
            node->right = mydeserialize(data);
            return node;
        }
    }

TreeNode<int>* deserializeTree(string &data)
{
 //    Write your code here for deserializing the tree
     return mydeserialize(data);

}



