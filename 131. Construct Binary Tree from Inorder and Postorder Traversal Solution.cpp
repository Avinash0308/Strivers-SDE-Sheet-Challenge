/************************************************************
   
   Following is the TreeNode class structure
   
   class TreeNode<T>
   { 
   public:
        T data; 
        TreeNode<T> *left;
        TreeNode<T> *right;
   
        TreeNode(T data) 
  		{ 
            this -> data = data; 
            left = NULL; 
            right = NULL; 
        }
   };
   
   
 ************************************************************/
TreeNode<int> *Tree(vector<int>& in, int x, int y,vector<int>& po,int a,int b){
     if(x > y || a > b)return nullptr;
     TreeNode<int> *node = new TreeNode<int>(po[b]);
     int SI = x;  
     while(node->data != in[SI])SI++;
     node->left  = Tree(in,x,SI-1,po,a,a+SI-x-1);
     node->right = Tree(in,SI+1,y,po,a+SI-x,b-1);
     return node;
}
TreeNode<int>* getTreeFromPostorderAndInorder(vector<int>& po, vector<int>& in) 
{
	// Write your code here.
     return Tree(in,0,in.size()-1,po,0,po.size()-1);
}
