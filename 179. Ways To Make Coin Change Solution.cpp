#include<bits/stdc++.h>

long countWaysToMakeChange(int *denominations, int n, int value)

{

    vector<long> prev(value + 1, 0) , cur(value+1 , 0);

 

    for(int tar = 0; tar <= value ; tar++){

        prev[tar] = (tar%denominations[0] == 0);

    }

    for(int ind = 1; ind< n ; ind++){

      for (int tar = 0; tar <= value; tar++) {

        long notpick = prev[tar];

        long pick = 0;

        if (tar >= denominations[ind])

          pick = cur[tar - denominations[ind]];

 

        cur[tar] = pick + notpick;

      }

      prev = cur;

    }

     return prev[value];

}