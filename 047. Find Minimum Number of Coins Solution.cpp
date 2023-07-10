#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
    // Write your code here
    vector<int> currency = {1,2,5,10,20,50,100,500,1000};
    int total = 0, i = 8;
    while(i>=0 && amount){
        total += (amount/currency[i]);
        amount -= (amount/currency[i]) * currency[i];
        i--;
    }
    return total;
}
   
