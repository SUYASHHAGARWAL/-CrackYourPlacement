/*

day32

int isNegativeWeightCycle(int n, vector<vector<int>>edges){
    // Code here
    vector<int>dist(n,1e9);
    dist[0]  = 0;
    
    for(int i=0;i<n-1;i++){
        
        for(int i=0;i<edges.size();i++){
               
        int u = edges[i][0];
        int v = edges[i][1];
        int wt = edges[i][2];
        
        if( dist[u] + wt < dist[v])
       dist[v]  =  dist[u] + wt;
            
        }
        
    }
    
    
   
    for(auto it:edges){
        
        int u = it[0];
        int v = it[1];
        int wt = it[2];
        
        if(dist[u] + wt < dist[v])
       
       return 1;
        
    }
    
   
    return 0;
 
    
}

*/