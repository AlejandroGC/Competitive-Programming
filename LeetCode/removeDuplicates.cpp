#include <bits/stdc++.h>

using namespace std;

// Complexity: 
int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0 || nums.size() == 1){
            return nums.size();
        }
        for(int i = 0; i < nums.size() - 1; i++) {
            if(nums[i] == nums[i+1]){
               nums.erase(nums.begin()+i);
                i--;
            }
        }
        return nums.size();
    }

int main() {
    vector<int> nums = {1,1,1,2,2,3};
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];
    }
    cout << endl;
    removeDuplicates(nums);
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];
    }
    
}