#include<bits/stdc++.h>
class MedianFinder {
    multiset<int> m;
    int median;
    int size;
    multiset<int> :: iterator it;
public:
    MedianFinder() {
        median = 0;
        size = 0;
    }
    
    void addNum(int num) {
        m.insert(num);
        size++;
        if(size == 1){
            it = m.begin();
            median = num;
        }
        else if(size % 2){
            if(num >= *it){
                it++;
            }
            median = *it;
        }
        else{
            auto i = it;
            if(num >= *it){
                it++;
                median = ((*it)+*i)/2;
                it = i;
            }
            else{
                it--;
                median = ((*it)+*i)/2;
            }
        }
    }
    
    int findMedian() {
        return median;
    }
};
void findMedian(int *arr, int n)
{
    MedianFinder *m = new MedianFinder();
    for(int i = 0; i<n; i++){
        m->addNum(*(arr+i));
        cout<<m->findMedian()<<" ";
    }
}
