#include <bits/stdc++.h> 
class Trie{
    vector<Trie*> v;
    int start_count;
    int end_count;
    public:

    Trie(){
        // Write your code here.
        v.resize(26,NULL);
        start_count = 0;
        end_count = 0;
    }

    void insert(string &word){
        // Write your code here.
        Trie* cur = this;
        int n = word.size();
        for(int i = 0; i<n; i++){
            int val = word[i]-'a';
            if(cur->v[val] == NULL){
                cur->v[val] = new Trie();
            }
            cur->v[val]->start_count++;
            cur = cur->v[val];
        }
        cur->end_count++;
    }
    int traverse(){
        int ans = 0;
        for(int i = 0; i<26; i++){
            if(v[i] != NULL){
                ans += v[i]->traverse();
            }
        }
        if(end_count) ans++;
        return ans;
    }
};
int distinctSubstring(string &word) {
    //  Write your code here.
    Trie* head = new Trie();
    int n = word.size();
    for(int i = 0; i<n; i++){
        string cur;
        for(int j = i; j<n; j++){
            cur += word[j];
            head->insert(cur);
        }
    }
    return head->traverse();
}
