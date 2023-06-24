/*Question 5
Given an integer array nums, find three numbers whose product is maximum and return the maximum product.*/

#include<bits/stdc++.h>
using namespace std;



int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(nums[0]*nums[1]*nums[n-1]>nums[n-3]*nums[n-2]*nums[n-1])
            return nums[0]*nums[1]*nums[n-1];

        return  nums[n-3]*nums[n-2]*nums[n-1];
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
		
		cout<<maximumProduct(nums)<<endl;
	}
	return 0;
}
