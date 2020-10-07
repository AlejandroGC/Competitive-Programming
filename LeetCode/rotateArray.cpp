class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        reverse(nums, 0, nums.size()-1);
        reverse(nums, 0, k-1);
        reverse(nums, k, nums.size()-1);
    }
    
    void reverse(vector<int> &nums, int inicio, int fin){
        while(inicio < fin){
            int temp = nums[inicio];
            nums[inicio] = nums[fin];
            nums[fin] = temp;
            inicio++;
            fin--;
        }
    }
};