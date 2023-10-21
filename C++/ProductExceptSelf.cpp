/*Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation. LeetCode 238*/
#include <bits/stdc++.h>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums) {
        int mult=1;
        vector<int> ans(nums.size(),1);
        for(int i=0;i<nums.size();i++)
        {
            ans[i]=ans[i]*mult;
            mult=nums[i]*mult;
        }
        mult=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            ans[i]=ans[i]*mult;
            mult=nums[i]*mult;
        }
        return ans;

    }

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> num(n);
		for(int i=0;i<n;i++)
		{
			cin>>num[i];
		}
		vector<int> ans=productExceptSelf(num);
		for(auto s: ans)
		{
			cout<<s<<" ";
		 } 
		 cout<<endl;
	}
	return 0;
}