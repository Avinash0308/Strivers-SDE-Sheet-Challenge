#include<bits/stdc++.h>
class Node{

        public:
        Node* links[2];
    };
    class Trie{

        public:
        Node* root;
        Trie(){
            root=new Node();
        }
        void insert(int num){
            Node* node=root;
            for(int i=31; i>=0; i--){
                int bit=(num>>i)&1;
                if(!node->links[bit]){
                    node->links[bit]=new Node();
                }
                node=node->links[bit];
            }
        }
        int maxnum(int num){
            Node* node=root;
            int maxi=0;
            for(int i=31; i>=0; i--){
                int bit=(num>>i)&1;
                if(!node) return -1;
                if(!node->links[1-bit]){
                    node=node->links[bit];
                }
                else{
                    maxi=maxi|(1<<i);
                    node=node->links[1-bit];
                }
            }
            return maxi;
        }
};
vector<int> maxXorQueries(vector<int> &nums, vector<vector<int>> &queries){
	int n = nums.size(), m = queries.size();
        sort(nums.begin(),nums.end());
        vector<pair<int,int>> v(m);
        for(int i = 0; i<m; i++){
            v[i] = {queries[i][1],i};
        }
        sort(v.begin(),v.end());
        int j = 0;
        Trie *root = new Trie();
        vector<int> ans(m);
        for(int i = 0; i<m; i++){
            int max_val = v[i].first;
            int val = queries[v[i].second][0];
            while(j<n && max_val >= nums[j]){
                root->insert(nums[j]);
                j++;
            }
            int max_xor = root->maxnum(val);
            ans[v[i].second] = max_xor;
        }
        return ans;
}
