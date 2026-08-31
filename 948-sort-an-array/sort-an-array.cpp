class Solution {
public:
    void merge(vector<int> &nums,int start,int mid,int high){
        vector<int> temp(high-start+1);

        int left=start;
        int right=mid+1;
        int index=0;
        while(left<=mid && right<=high){
            if(nums[left]<=nums[right]){
                temp[index]=nums[left];
                index++;
                left++;
            }
            else{
                temp[index]=nums[right];
                index++;
                right++;

            }
        }
        while(left<=mid){
            temp[index]=nums[left];
            index++;
            left++;

        }
        while(right<=high){
            temp[index]=nums[right];
            index++;
            right++;
        }
        index=0;
        while(start<=high){
            nums[start]=temp[index];
            start++;
            index++;

        }
    }






    
    void mergesort(vector<int> &nums,int low,int high){
        if(low>=high){
            return;
        }

        int mid = low + (high - low) / 2;

        mergesort(nums,low,mid);
        mergesort(nums,mid+1,high);
        merge(nums,low,mid,high);
    }
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        mergesort(nums,0,n-1);

        return nums;
        
    }
};