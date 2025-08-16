#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int sum=0;
        unordered_map<int, int> mpp;
        for (auto &&num : nums)
        {
            mpp[num]++;
        }
        for (auto &&[key, value] : mpp)
        {
            if (value >1) return false;
        }
        return true;
        
        
    }
};

int main(){
    
    return 0;
}