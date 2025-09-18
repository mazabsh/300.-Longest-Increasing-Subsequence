#include<iostream> 
#include<vector> 

using namespace std; 

class Solution{
public: 
      int lengthOfList(vector<int>& nums) {
        vector<int> sub; 
        sub.push_back(nums[0]); 

        for(int i=1; i<nums.size(); ++i){
          if(nums[i]> sub.back()) sub.push_back(nums[i]); 
          else {
            auto it = lower_bound(sub.begin(), sub.end(), nums[i]); 
            *it = nums[i]; 
          }
        }
        return sub.size(); 
      }
};
int main(){
  vector<int> nums = {10,9,2,5,3,7,101,18};
  Solution sol; 
  cout << sol.lengthOfList(nums) << endl; 
  return 0; 
}
