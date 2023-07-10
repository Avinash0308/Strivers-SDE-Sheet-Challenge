/*
    Your Trie object will be instantiated and called as such:
    Trie* obj = new Trie();
    obj->insert(word);
    bool check2 = obj->search(word);
    bool check3 = obj->startsWith(prefix);
 */

#include<vector>
class Trie {
    vector<Trie*> v;
    bool end;
public:

    /** Initialize your data structure here. */
    Trie() {
        v.resize(26,NULL);
        end = false;
    }

    /** Inserts a word into the trie. */
    void insert(string word) {
        Trie* cur = this;
        int n = word.size();
        for(int i = 0; i<n; i++){
            if(cur->v[word[i]-'a'] == NULL){
                cur->v[word[i]-'a'] = new Trie();
            }
            cur = cur->v[word[i]-'a'];
        }
        cur->end = true;
    }

    /** Returns if the word is in the trie. */
    bool search(string word) {
        Trie* cur = this;
        int n = word.size();
        for(int i = 0; i<n; i++){
            if(cur->v[word[i]-'a'] == NULL) return false;
            cur = cur->v[word[i]-'a'];
        }
        return cur->end;
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Trie* cur = this;
        int n = prefix.size();
        for(int i = 0; i<n; i++){
            if(cur->v[prefix[i]-'a'] == NULL) return false;
            cur = cur->v[prefix[i]-'a'];
        }
        return true;
    }
};
