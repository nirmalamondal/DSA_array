/*Question 6
Given an array of integers nums which is sorted in ascending order, and an integer target,
write a function to search target in nums. If target exists, then return its index. Otherwise,
return -1.

You must write an algorithm with O(log n) runtime complexity.

Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4

Explanation: 9 exists in nums and its index is 4
*/


#include<bits/stdc++.h>
using namespace std;



int search(vector<int>& nums, int target) {
        int l = 0;
        int h = nums.size()-1;
        while(l<=h){
            int mid = l+(h-l)/2;
            if(target == nums[mid])
                return mid;
            else if(target<nums[mid]) 
                 h=mid-1;
            else
                 l=mid+1;
                        
        }
        return -1;

    }
    
    
    
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>nums;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			nums.push_back(x);
		}
		int target;
		cin>>target;
		
		cout<<search(nums,target)<<endl;
	}
	return 0;
}    
