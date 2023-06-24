/*Question 7
An array is monotonic if it is either monotone increasing or monotone decreasing.

An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An array nums is
monotone decreasing if for all i <= j, nums[i] >= nums[j].

Given an integer array nums, return true if the given array is monotonic, or false otherwise.

Example 1:
Input: nums = [1,2,2,3]
Output: true
*/


#include<bits/stdc++.h>
using namespace std;

bool isMonotonic(vector<int>& v) {
        if(v.size()==0)
           return true;
        int i;
        for(i =0;i<v.size()-1;i++){
            
            if(v[i]>=v[i+1])
                continue;
            else 
                break;    
        }
        if(i==v.size()-1){
            return true;
        }
        
        for( i =0;i<v.size()-1;i++){
            if(v[i]<=v[i+1])
                continue;
            else
               break;    
        }
        if(i==v.size()-1){
            return true;
        }
        return false;
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
		if(isMonotonic(nums))
		cout<<"true"<<endl;
		else
		cout<<"false"<<endl;
	}
	return 0;
}
