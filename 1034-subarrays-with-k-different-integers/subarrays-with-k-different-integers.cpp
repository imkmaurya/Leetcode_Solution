class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {

        int start=0;
        int end=0;
        int n=nums.size();
        int total=0;
        int count=0;
        unordered_map<int,int> mpp;
        while(end<n){
            mpp[nums[end]]++;

            if(mpp[nums[end]]==1){
                count++;
            }

            while(count>=k){
                total+=n-end;
                mpp[nums[start]]--;
                if(mpp[nums[start]]==0){
                    count--;
                }
                start++;
                
            }

            end++;

        }

        start=0;
        end=0;
        count=0;
        k++;
        mpp.clear();
        while(end<n){
            mpp[nums[end]]++;

            if(mpp[nums[end]]==1){
                count++;
            }

            while(count>=k){
                total-=n-end;
                mpp[nums[start]]--;
                if(mpp[nums[start]]==0){
                    count--;
                }
                start++;
            }

            end++;

        }


        return total;




        
    }
};