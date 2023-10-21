//Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.
#include <bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        return 0;
        
     map<int,int> maps;
     int minm=INT_MAX;

     for(int i=0;i<nums.size();i++)
     {
         maps[nums[i]]=1;
         minm=min(minm, nums[i]);
        

     }   
    int maxm=1;
    int prev=minm;
     for(auto n:maps)
     {
         if(n.first==minm)
         continue;
        
        if(prev==n.first-1)
        maps[n.first]=maps[n.first-1]+1;

        prev=n.first;
         maxm=max(maxm, maps[n.first] );

     }
     return maxm;
    }
int main()
{
	int n;
	cin>>n;
	vector<int> list(n);
	for(int i=0;i<n;i++)
	{
		cin>>list[i];
		
	}
	cout<<longestConsecutive(list)<<endl;
	return 0;
}