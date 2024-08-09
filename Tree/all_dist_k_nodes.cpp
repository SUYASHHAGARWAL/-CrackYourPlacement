/*

day25



class Solution {
public:
    

    void dfs(map<int,vector<int>> &m, int s, int dist, vector<int> &ans,int curr, int tar, unordered_map<int,bool> &vis){
        
      vis[s]=true;
      if(curr==dist){    
          ans.push_back(s);
          return;
      }
      
      vector<int> arr= m[s];
      for(int i=0; i<arr.size();i++){
          if(vis[arr[i]] == false)
             dfs(m,arr[i],dist,ans, curr+1,tar,vis);
      }
            
        
    }
    
    void addNode( map<int, vector<int>> &m, int a, int b){
        m[a].push_back(b);
        m[b].push_back(a);
    }
    
    void solveMap(TreeNode* root,  map<int, vector<int>> &m,unordered_map<int,bool> &vis){
        if(root==NULL )
            return;
        vis[root->val]=false;
        if(root->left != NULL){
            addNode(m,root->val, root->left->val);
        }
        
        if(root->right != NULL){
            addNode(m, root->val, root->right->val);
        }
        
        solveMap(root->left, m,vis);
        solveMap(root->right,m,vis);
        
    }
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        map<int, vector<int>> m;
        unordered_map<int, bool> vis;
        solveMap(root, m,vis);
        
        vector<int> ans;
        int T = target->val;
        int x=m.size();
       
        
        dfs(m,T,k,ans,0,T,vis);
        
        return ans;
    }
};

*/