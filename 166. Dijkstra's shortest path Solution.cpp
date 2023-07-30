#include <bits/stdc++.h> 

vector<int> dijkstra(vector<vector<int>> &vec, int v, int e, int source) {

    vector<int> dis(v,INT_MAX);

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;

    vector<pair<int,int>> adj[v];

    for(auto i:vec)

    {

        adj[i[0]].push_back({i[1],i[2]});

        adj[i[1]].push_back({i[0],i[2]});

 

    }

    pq.push({0,source});//first --> dis // second is node

    dis[source]=0;

    while(!pq.empty())

    { 

        int cdis=pq.top().first;

        int cnode=pq.top().second;

        pq.pop();

        for(auto adjn:adj[cnode])

        {

 

            if((adjn.second+cdis<dis[adjn.first]))

            {     

                  dis[adjn.first]=cdis+adjn.second;

                  pq.push({dis[adjn.first],adjn.first});

            }

            

        }

 

    }

 

    return dis;

}