class Solution {
    public:
        int minimumCost(vector<int>& cost) {
            if(cost.size()==1)
            {
                return cost[0];
            }
            if(cost.size()==2)
            {
                return cost[0]+cost[1];
            }
            
            sort(cost.begin(),cost.end());
            int count=0;int cost1=0;
            for(int i=cost.size()-1;i>=0;i--){
               if (count == 2) {
                    count = 0;
                    continue;
                }
                cost1 += cost[i];
                count++;
            }
            return cost1;
        }
    };