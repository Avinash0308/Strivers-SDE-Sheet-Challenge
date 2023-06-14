#include <bits/stdc++.h> 
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    double val_per_g, weight, value;
    vector<pair<double,double>> v(n);
    for(int i = 0; i<n; i++){
        value = items[i].second;
        weight = items[i].first;
        val_per_g = value/weight;
        v[i].first = val_per_g;
        v[i].second = weight;
    }
    sort(v.begin(),v.end());
    double total = 0;
    double weigh = (double)w;
    for(int i = n-1; i>=0 && weigh ; i--){
        weight = min(weigh,v[i].second);
        val_per_g = v[i].first;
        total += weight*val_per_g;
        weigh -= weight;
    }
    return total;
}
