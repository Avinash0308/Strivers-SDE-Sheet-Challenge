#include <bits/stdc++.h> 
class LFUCache
{
private:
    unordered_map<int,list<int>> freq;
    unordered_map<int,pair<int,int>> ele;
    unordered_map<int,list<int>::iterator> pos;
    int size;
    int min_freq;
public:
    LFUCache(int capacity)
    {
        // Write your code here.
        size = capacity;
        min_freq = 0;
    }

    int get(int key)
    {
        // Write your code here.
        if(ele.find(key) == ele.end()) return -1;
        int fre = ele[key].second;
        int valu = ele[key].first;
        freq[fre].erase(pos[key]);
        fre++;
        freq[fre].push_front(key);
        pos[key] = freq[fre].begin();
        if(freq[min_freq].empty()){
            min_freq = fre;
        }
        return valu;
    }

    void put(int key, int value)
    {
        // Write your code here.
        if(ele.find(key) == ele.end()){
            if(ele.size() == size){
                int key = freq[min_freq].back();
                ele.erase(key);
                pos.erase(key);
                freq[min_freq].pop_back();
            }
            ele[key] = {value,1};
            freq[1].push_front(key);
            pos[key] = freq[1].begin();
            min_freq = 1;
        }
        else{
            int fre = ele[key].second;
            ele[key].first = value;
            freq[fre].erase(pos[key]);
            fre++;
            freq[fre].push_front(key);
            pos[key] = freq[fre].begin();
            if(freq[min_freq].empty()){
                min_freq = fre;
            }
        }
    }
};
