#include <bits/stdc++.h> 
/***************************************************************************

	Class for graph node is as follows:

	class graphNode
	{
		public:
    		int data;
    	vector<graphNode *> neighbours;
    	graphNode()
    	{
        	data = 0;
        	neighbours = vector<graphNode *>();
    	}

    	graphNode(int val)
    	{
        	data = val;
        	neighbours = vector<graphNode *>();
    	}

    	graphNode(int val, vector<graphNode *> neighbours)
    	{
        	data = val;
        	this->neighbours = neighbours;
    	}
	};

******************************************************************************/
unordered_map<graphNode*,graphNode*> m;
graphNode *cloneGrap(graphNode *node)
{
    // Write your code here.
	if(node == NULL) return NULL;
        if(m.find(node) == m.end()){
            m[node] = new graphNode(node->data);
            for(int i = 0; i<node->neighbours.size(); i++){
                m[node]->neighbours.push_back(cloneGrap(node->neighbours[i]));
            }
        }
        return m[node];
}
graphNode *cloneGraph(graphNode *node)
{
    // Write your code here.
	m.clear();
	return cloneGrap(node);
}