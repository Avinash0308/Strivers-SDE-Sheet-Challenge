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

    int countWordsEqualTo(string &word){
        // Write your code here.
        Trie* cur = this;
        int n = word.size();
        for(int i = 0; i<n; i++){
            int val = word[i]-'a';
            if(cur->v[val] == NULL) return 0;
            cur = cur->v[val];
        }
        return cur->end_count;
    }

    int countWordsStartingWith(string &word){
        // Write your code here.
        Trie* cur = this;
        int n = word.size();
        for(int i = 0; i<n; i++){
            int val = word[i]-'a';
            if(cur->v[val] == NULL) return 0;
            cur = cur->v[val];
        }
        return cur->start_count;
    }

    void erase(string &word){
        // Write your code here.
        Trie* cur = this;
        int n = word.size();
        for(int i = 0; i<n; i++){
            int val = word[i]-'a';
            cur->v[val]->start_count--;
            if(cur->v[val]->start_count == 0){
                cur->v[val] = NULL;
                return;
            }
            cur = cur->v[val];
        }
        cur->end_count--;
    }
};
