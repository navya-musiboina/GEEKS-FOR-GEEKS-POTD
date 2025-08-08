/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) 
    {
        map<int,int>mpp;
        vector<int>ans;
        if(root==NULL) return ans;
        queue<pair<Node *,int>>q;
        q.push({root,0});
        while(!q.empty())
        {
            Node *node=q.front().first;
            int val=q.front().second;
               q.pop();
            mpp[val]=node->data;
         
            if(node->left)
            q.push({node->left,val-1});
            if(node->right)
            q.push({node->right,val+1});
        }
        for(auto it:mpp)
        ans.push_back(it.second);
        return ans;
        
    }
};