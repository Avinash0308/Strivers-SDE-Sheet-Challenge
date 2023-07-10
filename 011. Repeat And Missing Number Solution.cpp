#include <bits/stdc++.h> 
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	long long even_sum = 0, odd_sum = 0, obt_sqr_sum = 0;
    for(auto i:arr){
        if(i%2) odd_sum += i;
        else even_sum += i;
        obt_sqr_sum += i*i;
    }
    /*long long exp_even_sum, exp_odd_sum;
    exp_even_sum = (n/2) * ((n/2) + 1);
    exp_odd_sum = ((n+1)/2) * ((n+1)/2);
    int rep_num, mis_num;
    if(exp_odd_sum != odd_sum && exp_even_sum != even_sum){
        rep_num = max(exp_even_sum-even_sum,exp_odd_sum-odd_sum);
        mis_num = abs(min(exp_even_sum-even_sum,exp_odd_sum-odd_sum));
    }
    else if(exp_odd_sum != odd_sum){
        
    }
    else{

    }
    return {mis_num,rep_num};*/
    long long exp_tot_sum = ((long long)n*(n+1))/2;
    long long obt_tot_sum = even_sum + odd_sum;
    long long x_diff_y = exp_tot_sum - obt_tot_sum;
    long long exp_sqr_sum = ((long long)n*(n+1)*((2*n) + 1))/6;
    long long diff_square = exp_sqr_sum - obt_sqr_sum;
    long long x_add_y = diff_square/x_diff_y;
    long long mis_num = (x_diff_y + x_add_y)/2;
    long long rep_num = (x_add_y - x_diff_y)/2;
    return {mis_num,rep_num};
}
