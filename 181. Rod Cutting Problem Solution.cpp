int profit(vector<int>& price ,int n ,int w,vector<vector<int>> &dp){

    if(n==0||w==0) return 0;

    if(dp[n][w]!=-1) return dp[n][w];

    if(n>w){

        return dp[n][w]=profit(price,n-1,w,dp);

    }

    else{

        int take=profit(price,n,w-n,dp)+price[n-1];// we can take it one more time and

        //total length to make is reduced and and indexing is price for n is n-1

        int notake=profit(price,n-1,w,dp);

        return dp[n][w]=max(take,notake);

    }

}

int cutRod(vector<int> &price, int n)

{

    // Write your code here.

    vector<vector<int>> dp(n+1,vector<int>(n+1,-1));

    // return profit(price,n,n,dp); //one n is for choosing rod of length n and other 

    // n is for total rode length we want to make to get max profit;

 

    //tabulation

    int w=n;

    for(int i=0;i<=n;i++) dp[i][0]=0;

    for(int j=0;j<=w;j++) dp[0][j]=0;

    for(int i=1;i<=n;i++){

        for(int j=1;j<=w;j++){

        if(i>j){

        dp[i][j]=dp[i-1][j];

        }

        else{

        int take=dp[i][j-i]+price[i-1];

        int notake=dp[i-1][j];

        dp[i][j]=max(take,notake);

        }

        }

    }

    return dp[n][w];

}

 