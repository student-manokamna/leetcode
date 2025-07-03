class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int l=0;
        int h=n-1;
        while(l<h){
            int mid= l+(h-l)/2;
            // right side n even hh ya odd
            bool iseven;
            if((h-mid)%2==0){
                iseven=true;
            }
            else
            iseven=false;
            // check your bagal vala elem mid+1;
            if(nums[mid]==nums[mid+1]){
                if(iseven){
                    l=mid+2; // as mid=mid+1 ho gya so aab bacche odd elem so aab serach krege mid+2 se ki khaha hh right m 
                }
                else
                h=mid-1; // see aab ager right side odd elem hh , tou jab mid=mid+1 hoga then aab aage even elem rh jayega so singl elem hume left side melega so h=mid-1 se piche dekhne lgo

            }
            else{
                if(iseven){
                  h=mid; // as even hh tou h ko mid per le ayo or left side dekho
                }
                else{
                      l=mid+1;  // aab ager odd hh tou mid tou khaha piche pair h so mid +1 se dekhna start kro 
                }
            }
        }
        return nums[h];
    }
};