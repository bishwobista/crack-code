/*Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:
0 <= a, b, c, d < n
a, b, c, and d are distinct.
nums[a] + nums[b] + nums[c] + nums[d] == target
You may return the answer in any order.

Example 1:

Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]


Example 2:

Input: nums = [2,2,2,2,2], target = 8
Output: [[2,2,2,2]]

*/
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> fourSum(vector<int>& nums, long long int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
       for(int k=0;k<n-3;k++)
       {    if(k>0 && nums[k]==nums[k-1])continue;
            for(int j=k+1;j<n-2;j++)
            {   if(j!=k+1 && nums[j]==nums[j-1])continue;
               long long int target1=target-nums[k]-nums[j];
                int l = j + 1, h = n - 1;
                
                while (l < h){
                    if (nums[l] + nums[h] == target1){
                        vector<int> oneAns = {nums[k], nums[j], nums[l], nums[h]};
                        ans.push_back(oneAns);
                        while(l < h && nums[l] == nums[l + 1]){
                            l++;
                        }
                        while(l < h && nums[h] == nums[h - 1]){
                            h--;
                        }
                        l++;
                        h--;
                    }
                    else if(nums[l] + nums[h] < target1){
                        l++;
                    }
                    else{
                        h--;
                    }
                    
                }         
                
            }
       }
                
        return ans;
    }