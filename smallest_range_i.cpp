/*Q8.You are given an integer array nums and an integer k.

In one operation, you can choose any index i where 0 <= i < nums.length and change nums[i] to nums[i] + x where x is an integer from the range [-k, k]. You can apply this operation at most once for each index i.

The score of nums is the difference between the maximum and minimum elements in nums.

Return the minimum score of nums after applying the mentioned operation at most once for each index in it.

Example 1:
Input: nums = [1], k = 0
Output: 0

Explanation: The score is max(nums) - min(nums) = 1 - 1 = 0.
*/

#include<bits/stdc++.h>
using namespace std;


int smallestRangeI(vector<int>& arr, int k) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        arr[0]  = arr[0] + k;
        arr[n-1] = arr[n-1] -k;
        if(arr[n-1] - arr[0]>0)
            return arr[n-1] - arr[0];

        return 0;    

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
		int k;
		cin>> k;
		cout<<smallestRangeI(nums,k)<<endl;
	}
	return 0;
}
