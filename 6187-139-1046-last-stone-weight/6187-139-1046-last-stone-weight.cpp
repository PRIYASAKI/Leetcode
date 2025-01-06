class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int,vector<int>,less<int>>pb(stones.begin(),stones.end());
        int res=0;
        while(pb.size()>1)
        {
            int first=pb.top();
            pb.pop();
            int second=pb.top();
            pb.pop();
            if(first!=second) 
            {
             pb.push(first-second);
            }
        }
    return pb.empty()?0:pb.top();    
    }
};