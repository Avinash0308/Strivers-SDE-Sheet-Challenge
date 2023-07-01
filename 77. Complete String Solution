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

    bool isComplete(string &s){
        Trie* cur = this;
        int n = s.size();
        for(int i = 0; i<n; i++){
            int val = s[i] - 'a';
            if(cur->v[val]->end_count == 0) return false;
            cur = cur->v[val];
        }
        return true;
    }
};

string completeString(int n, vector<string> &a){
    // Write your code here.
    Trie* head = new Trie();
    for(int i = 0; i<n; i++){
        head->insert(a[i]);
    }
    sort(a.begin(),a.end());
    int cur_length = 0;
    string cur_string = "";
    for(int i = 0; i<n; i++){
        if(head->isComplete(a[i])){
            if(a[i].length() > cur_length){
                cur_length = a[i].length();
                cur_string = a[i];
            }
        }
    }
    return (cur_string.size())?cur_string:"None";
}
