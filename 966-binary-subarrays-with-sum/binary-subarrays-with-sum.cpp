class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        int count=0;
        int currsum=0;
        for(int i=0;i<n;i++)
        {
            currsum=0;
            for(int j=i;j<n;j++)
            {
                currsum+=nums[j];
                if(currsum>goal){
                    break;
                }
                else if(currsum==goal) count++;
            }
        }
        return count;
    }
};