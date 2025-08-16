#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
public:
    int max_frequency_elements(vector<int>& nums) {
        int hash[101]={0};
        int sum=0;
        int maxFreq=0;
        if (nums.size()==1)
        {
            return 1;
        }
        
        for (int i = 0; i < nums.size(); i++)
        {
            hash[nums[i]] += 1;
            maxFreq = max(maxFreq, hash[nums[i]]);
        }
        for (int i = 0; i < 101; i++)
        {   
            if (maxFreq==hash[i])
            {
                sum += hash[i];
            }
            
        }
        
        return sum;
    }
};


int main(){

    vector<int> nums = {15};
    Solution sol;
    cout << sol.max_frequency_elements(nums) << endl;  

    return 0;
}