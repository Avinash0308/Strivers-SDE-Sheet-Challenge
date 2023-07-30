#include<bits/stdc++.h>
class MedianFinder {
    multiset<int> m;
    double median;
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
            median = double(num);
        }
        else if(size % 2){
            if(num >= *it){
                it++;
            }
            median = double(*it);
        }
        else{
            auto i = it;
            if(num >= *it){
                it++;
                median = (double(*it)+*i)/2;
                it = i;
            }
            else{
                it--;
                median = (double(*it)+*i)/2;
            }
        }
    }
    
    double findMedian() {
        return median;
    }
};
vector<int> findMedian(vector<int> &arr, int n){
	
	// Write your code here 
	MedianFinder* m = new MedianFinder();
	vector<int> ans(n);
	for(int i = 0; i<n; i++){
		m->addNum(arr[i]);
		ans[i] = m->findMedian();
	}
	return ans;
}
